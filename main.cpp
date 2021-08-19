#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;

};

Node* addit(Node** head,int data)
{
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=(*head);
    (*head)=new_node;
}

Node* reverseit(Node* head,int n)
{
        Node* current=head;
        Node* next=NULL;
        Node* prev=NULL;
        int cnt=0;
        while(current!=NULL && cnt<n)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            cnt++;
        }
        if(next!=NULL)
            head->next=reverseit(next,n);
        return prev;
}

Node* printit(Node* head)
{
    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    Node* head=NULL;
    addit(&head, 9);
    addit(&head, 8);
    addit(&head, 7);
    addit(&head, 6);
    addit(&head, 5);
    addit(&head, 4);
    addit(&head, 3);
    addit(&head, 2);
    addit(&head, 1);
    cout<<"before"<<endl;
    printit(head);
    head=reverseit(head,3);
    cout<<"After"<<endl;
    printit(head);
    return 0;

}
