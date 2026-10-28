# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeInBetween(self, list1: ListNode, a: int, b: int, list2: ListNode) -> ListNode:
        c1 = list1
        for i in range(a - 1):
            c1 = c1.next
        
        c2 = c1
        for i in range(b - a + 2):
            c2 = c2.next
        
        end = list2
        while(end.next):
            end = end.next

        c1.next = list2
        end.next = c2
        return list1
