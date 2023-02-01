//Author : Aryan Tiwari 
//Date: 27-12-2003
#include<bits/stdc++.h>
using namespace std;
//Actual Node for the Node.
class Node
{
public:
 int data;
 Node *next;    //Pointer to store address of next node.

 Node(int data)  // Constructor
 {
    this -> data = data;      //Value get Assigned.
    this -> next = NULL;              //by Default Null.
 }
};
// print function
void print(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
//Main Function. 
int main() 
{
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    print(head);
}