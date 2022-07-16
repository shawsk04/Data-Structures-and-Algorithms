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
    ListNode* swapPairs(ListNode* head){
       if(!head || !head->next) return head;
        
       ListNode prehead(0, head);
       ListNode *pre=&prehead, *node1=head, *node2=head->next;
        while(node1 && node2){
            node1->next=node2->next;
            node2->next=node1;
            pre->next=node2;
            
            if(!node1->next || !node1->next->next) break;
            pre=node1;
            node1=node1->next;
            node2=node1->next;
            
        }
        
        return prehead.next;
    }
};