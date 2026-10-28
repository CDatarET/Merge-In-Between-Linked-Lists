/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *c1 = list1;
        ListNode *c2 = list1;
        for(int i = 0; i < b; i++){
            if(i < a - 1) c1 = c1->next;

            c2 = c2->next;
        }

        ListNode *end = list2;
        while(end->next != nullptr) end = end->next;

        c1->next = list2;
        end->next = c2->next;
        return list1;
    }
};
