#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};
node* head;

void del_node(node* curr)
{
    curr = head;
    node* curr2 = head->next;

    if(curr == NULL)
        return;

    while(curr!=NULL)
    {
        if(curr2 == curr)
        {
            curr2 = curr2->next;
            curr->next = curr2;
        }

        else{
            curr = curr->next;
            curr2 = curr2->next;
        }
    }

}

void insertNode(int newData)
{
    node* curr = head;
    if(curr == NULL)
        return;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    node* newNode = new node();
    curr->next = newNode;
    newNode->data = newData;

}

void print_()
{
    node* curr = head;
    while(curr != NULL){
        cout<<curr->data<<' ';
        curr = curr->next;}
}

int main()
{
    insertNode(5);
    insertNode(5);
    insertNode(5);
    print_();
    return 0;
}
