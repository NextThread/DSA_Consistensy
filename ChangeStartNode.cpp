/*
You are given a singly linked list and an integer ‘K’.
You are supposed to make ‘K’ th node from the end of a linked list as the starting node of the linked list.
*/
Node *changeStartNode(Node *head, int k)
{
	 if(!head) return NULL;
    if(!head->next) return head;
    Node *t = head, *n = NULL, *p = NULL;
    int cnt = 0;
    while(t)
    {
        cnt++;
        t = t->next;
    }
    cnt -= k;
    if(!cnt) return head;
    t = head;
    while(cnt--)
    {
        p= t;
        t = t->next;
        n = t->next;
    }
    p->next = n;
    t->next = head;
    return t;
}