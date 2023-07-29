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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        //step:1 reverse first k nodes
        ListNode* next=NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
        int count =0;

        while(curr!=NULL&& count <k){
            next=curr->next;
            curr->next=prev;
            prev=curr;

            curr=next;
            count++;
        }
           // If the last group has < k nodes, reversing it again to get the previous order.
    if (count < k)
    {
        curr = prev;
        prev = NULL;
        next = NULL;
        count = 0;
        while (curr && count < k)
        {

            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
    }
        //step2: recursion dekhbe samne
        if(next!=NULL){
            head->next=reverseKGroup(next,k);
        }
        return prev;
        
    }
};