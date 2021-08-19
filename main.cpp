#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    Node* next;

};
Node* newNode(int key)
{
    Node* temp=new Node;
    temp->key=key;
    temp->next=NULL;
    return temp;
}
/*
Node* addit(Node** head,int data)
{
    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=(*head);
    (*head)=new_node;
}*/
/*
Node* remloop(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    slow=slow->next;
    fast=fast->next->next;
    while(fast && fast->next)
    {
        if(slow==fast)
        {
            cout<<fast->key;
            break;

        }
        slow=slow->next;
        fast=fast->next->next;

    }
    if(slow!=fast)
        return NULL;
    slow=head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
*/

/*
Node* Duplicate(Node* head)
{
    unordered_set<int> st;
    Node* temp=head;
    st.insert(temp->key);
    Node* prev=NULL;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
        if(st.find(temp->key)!=st.end())
        {
            prev->next=temp->next;
            delete(temp);
            break;
        }
        else
        {
            st.insert(temp->key);
        }
    }

}
*/

/* doubt
Node* lasttofirst(Node* head)
{
    Node* prev=NULL;
    Node* temp=head;
    Node* fronti=head;
    cout<<temp->key;
    if(temp->next=NULL){
            cout<<"he";
        return 0;
    }
    while(temp->next!=NULL)
    {
        cout<<"he";
        prev=temp;
        temp=temp->next;
        cout<<temp->key<<"\t";
    }

    prev->next=temp->next;
    temp->next=fronti;

}
*/

/* add 1 to a number represented as linked list
Node* add_1_toanumber(Node* head)
{
    vector<int> v;
    Node* temp=head;
    while(temp->next!=NULL)
    {
        int x=temp->key;
        v.push_back(x);
        temp=temp->next;
    }
    int sum=0;
    int n=v.size()-1;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i]*pow(10,n);
        n--;
    }
    sum++;
    cout<<sum<<endl;
}
*/

Node* printit(Node* head)
{
    Node* temp=head;
    while(temp)
    {
        cout<<temp->key<<endl;
        temp=temp->next;
    }
}

int main()
{
    Node* head = newNode(1);
    head->next = newNode(9);
    head->next->next = newNode(9);
    head->next->next->next = newNode(9);
    head->next->next->next->next = newNode(9);
//    head->next->next->next->next->next = newNode();
    cout<<"b"<<endl;
    printit(head);
    cout<<"a"<<endl;
    add_1_toanumber(head);
    printit(head);
    return 0;
}
