// size can be modifie
// non contiguous mem

#include <iostream>
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

void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

int main()
{
    Node *node1 = new Node(10);
    cout << node1->data<<endl;
    cout << node1->next<<endl;
}