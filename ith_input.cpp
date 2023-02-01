//Author : Aryan Tiwari 
//Date:31-12-2022
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void Insert(int val,int i,Node *head)
{
    Node *newval = new Node(val);
    int count = 0;
    Node *temp = head;
    while(count < i-1)
    {
        temp = temp->next;
        count++;
    }
    Node *a = temp->next;
    temp->next = newval;
    newval->next = a;
}

Node* takeInput() {
int data;
cin>>data;
Node *head = NULL;
while(data != -1)
{
    Node *newNode = new Node(data);
    if(head == NULL)
    {
        head = newNode;
    }
    else{
        Node *temp = head;
        while(temp ->next != NULL)
        {
            temp = temp ->next;
        }
        temp ->next = newNode;
    }
    cin>>data;
}
return head;
}

void print(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main() {
    Node *head = takeInput();
    int val,pos;
    cin>>val>>pos;
    Insert(val,pos,head);
    print(head);
}