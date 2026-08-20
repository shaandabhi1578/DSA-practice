#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* head=NULL;
int n;
Node* temp;
// Function prototypes
void insert_nodes();
void insert_front();
void insert_end();
void insert_mid();
void display();

void delete_front();
void delete_end();
void delete_mid();
void delete_a_node();
void reverse_display(Node* temp);



void reverse_display(Node* temp)
{
    if(temp == NULL)
        return;

    reverse_display(temp->next);
    cout << temp->data << " ";
}
void insert_front()
{
    Node* first=new Node();
    cout<<"enter data:\n";
    cin>>first->data;
    first->next=head;
    head=first;
}
void insert_end()
{
    Node* newNode=new Node();
    cout<<"enter data: \n";
    cin>>newNode->data;
    newNode->next=NULL;
    temp=head;
    if (head==NULL)
    {
        head=newNode;
        return ;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void insert_mid()
{
    Node* newNode = new Node();
    temp=head;
    Node* prev;
    int prop;
    cout<<"enter the data of the next node\n";
    cin>>prop;
    cout<<"enter data: \n";
    cin>>newNode->data;
    if (head==NULL)
    {
        cout<<"linked list is empty\n";
        return;
    }
    else if (head->next==NULL)
    {
        cout<<"there is only one node in this list\n";
    }
    else{   
            temp=head;
            while(temp->data!=prop)
            {   prev=temp;
                temp=temp->next;
                if(temp->data==prop)
                {
                    newNode->next=temp;
                    prev->next=newNode;
                }
            }
            newNode->next=temp;
        }
}
void display()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void delete_front()
    {
        if(head==NULL)
        {
            cout<<"list is empty\n";
            return;
        }
        else if(head->next==NULL)
        {
            cout<<"there is only one element in this list\n";
            delete(head);
            head=NULL;
        }
        else
        {
            temp=head;
            head=head->next;
            delete(temp);
        }
    }
void delete_end()
    {
        struct Node* prev;
        if(head==NULL)
        {
            cout<<"list is empty\n";
            return;
        }
        else if(head->next==NULL)
        {
            delete(head);
            head=NULL;
           
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                prev=temp;
                temp=temp->next;
            }    
            prev->next=NULL;
            delete(temp);
                
           
        }
    }
void delete_mid()
    {
       Node* trav = head;
        int x;
        cout<<"enter the data you want to delete: \n";
        cin>>x;
        if(head==NULL)
        {
            cout<<"linked list is empty\n";\
            return;
        }
        if(head->data==x)
        {
            delete_front();
            return;
        }
        while(trav->next != NULL && trav->next->data != x)
            {
                trav = trav->next;
            }
        temp=trav->next;
        trav->next=trav->next->next;
        delete(temp);

    }

int main()
{
    int choice=-1;
    cout<<"enter your choice:\n";
    while(choice!=5)
    {
        cout<<"1.insert node\n";
        cout<<"2.display\n";
        cout<<"3.delete a node\n";
        cout<<"4.reverse-print\n";
        cout<<"5.exit\n";
        cin>>choice;
       switch(choice)
        {
            case 1:
            insert_nodes();
            break;
            case 2:
            display();
            break;
            case 3:
            delete_a_node();
            break;
            case 4:
            reverse_display(head);
            cout<<endl;
            break;
            case 5:
            cout<<"program ended\n";
            exit(0);
            break;
            default:
            cout<<"enter appropriately\n";
        } 
    }
    
}
void delete_a_node()
{
    int choice=-1;
    while(choice!=4)
    {
        cout<<"1.delete the front element\n";
        cout<<"2.delete the back element\n";
        cout<<"3.delete a element in between\n";
        cout<<"4.exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            delete_front();
            break;
            case 2:
            delete_end();
            break;
            case 3:
            delete_mid();
            break;
            case 4:
            return;
            break;
            default:
            cout<<"enter appropriate choice!\n";
        }
    }
}

void insert_nodes()
{
    int choice=-1;
    while(choice!=4)
    {
        cout<<"1.insert the element at front\n";
        cout<<"2.insert the element at back\n";
        cout<<"3.insert a element in between\n";
        cout<<"4.exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            insert_front();
            break;
            case 2:
            insert_end();
            break;
            case 3:
            insert_mid();
            break;
            case 4:
            return;
            break;
            default:
            cout<<"enter appropriate choice!\n";
        }
    }
}
