/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast=head,*slow=head;
        ListNode *e=head;
        while(fast&&slow&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                while(e!=slow){
                    e=e->next;
                    slow=slow->next;
                }
                return slow;
            }
            
        }
        return NULL;
    }
};