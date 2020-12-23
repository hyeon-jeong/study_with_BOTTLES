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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        //cout<<curr->val;
        ListNode* prev = NULL;
        
        while(curr){
            ListNode* next = prev;
            prev = curr;
            curr = curr->next;
            prev->next = next;
        }
        
        return prev;
    }
};
