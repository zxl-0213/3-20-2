/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
    
    struct ListNode* cur=head;
    int size=0;
    while(cur)
    {
        cur=cur->next;
        size++;
    }
    size--;
    int result=0;
    while(head)
    {
        result=result+head->val*pow(2,size);
        size--;
        head=head->next;
    }
    return result;
}