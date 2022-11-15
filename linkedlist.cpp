 #include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node *next;
// constructor
    node (int val){
        data=val;
        next=NULL;
    }


};
 int main()
{
//     node* n = new node(10);
//     cout << n->data << endl;
//     cout << n->next << endl;
//     node* z = new node(20);
//     cout << z->data <<endl;
//     cout << z->next << endl;

// }



void iat(node* &head,int val){
    node * n=new node(val);
    if(head==NULL){
        head=n;
        return ;
    }

    node * temp=head;
    // check for temp->next not for temp!=NULL
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}

// // void iah(node * &head,int val){
// //     node * n=new node(val);
// //     n->next=head;
// //     head=n;
// // }

void displayll(node * head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}


// // bool finde(node * head,int key){
    
// //     while(head->next!=NULL){
// //         if(head->data==key){
// //             return true;
// //         }
// //         head=head->next;
// //     }
// //     return false;
// // }


// // int findindex(node * head,int key){
// //     int c=1;
// //     while(head->next!=NULL){
        
// //         if(head->data==key){
// //             return c;
// //         }
// //         c++;
// //         head=head->next;
// //     }
// //     return -1;


// // }

// // void deletion(node* &head,int val){
// //     node* n=head;
// //     if(head==NULL){
// //         return ;
// //     }
// //     if(head->next==NULL){
// //         head=NULL;
// //         return ;
// //     }
// //     if(head->data==val){
// //         head=head->next;
// //         return ;
// //     }
// //     while(head->next->data!=val){
// //         head = head->next;

// //     }
// //     if(head->next->next==NULL){
// //         head->next=NULL;
// //         head=n;
// //         return ;
// //     }
// //     head->next=head->next->next;
// //     head=n;
// // }

// // vector<int> findmindex(node * head,int key){
// //     vector<int> n;
// //     int c=1;
// //     while(head->next!=NULL){
        
// //         if(head->data==key){
// //             n.push_back(c);
// //         }
// //         c++;
// //         head=head->next;
// //     }
// //     return n;


// // }



void reversell(node* &head)
{
    node* prev = NULL;
    node* curr = head;
    node* nextptr;

    while(curr!=NULL)
    {
        nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
    }
    head=prev;
}


// // node* reversellrecur(node* &head){
// //     if(head==NULL || head->next==NULL){
// //         return head;
// //     }

// //     node* newhead=reversellrecur(head->next);
// //     head->next->next=head;
// //     head->next=NULL;

// //     return newhead;
// // }

// // node* reversek(node* &head , int k)
// // {
// //     node* prevptr  = NULL;
// //     node* currptr  = head;
// //     node* nextptr;

// //     int count = 0;
// //     while(currptr!=NULL && count <k)
// //     {
// //         nextptr = currptr->next;
// //         currptr->next = prevptr;
// //         prevptr = currptr;
// //         currptr = nextptr;
// //         count++;
// //     }
// //     if (nextptr!=NULL)
// //     {
// //         head->next = reversek(nextptr,k);
// //     }
// //     head = prevptr;
// //     return head;
// // }

// // void mc(node* &head , int pos)
// // {
// //      node* temp = head;
// //      node * findpos;
// //      int c = 1;

// //      while(temp->next!=NULL)
// //      {
// //         if(c==pos)
// //         {
// //             findpos = temp;
// //         }
// //         temp = temp->next;
// //         c++;
// //      }
// //      temp->next = findpos;
// //      head = temp;
// // }

// // bool dCycle(node* head){
    
// //     node* slow=head;
// //     node* fast=head;

// //     while (fast!=NULL && fast->next!=NULL )
// //     {
// //         slow = slow->next;
// //         fast = fast->next->next;
// //         if (fast == slow)
// //         { 
// //             return true;
// //         }
 
// //     }
// //     return false;
    
// // }


int main(){
    node * head =NULL;
    iat(head,1);
    iat(head,2);
    iat(head,3);
    iat(head,77);
    iat(head,8);
    iat(head,4);
    // iah(head,5);
    displayll(head);
//     // cout<<"\n"<<finde(head,5)<<"\n";
//     // iat(head,9);
//     // iah(head,5);
//     // displayll(head);
//     // vector<int> num; 
//     // num=findmindex(head,0);
//     // if(num.size()==0){
//     //     cout<<"NOT FOUND";
//     // }
//     // else
//     // { 
//     //     for(auto x:num){
//     //         cout<<x<<" ";
//     //     }
//     //     cout<<"\n";
//     // }

//     // deletion(head,1);
//     // displayll(head);
//     // node * nhead;
//     // reversek(head,3);
//     // mc(head,3); 
//     // cout<< dCycle(head)<<endl;
 }
 #include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node *next;
// constructor
    node (int val){
        data=val;
        next=NULL;
    }
};
void iat(node* &head,int val){
    node * n=new node(val);
    if(head==NULL){
        head=n;
        return ;
    }

    node * temp=head;
    // check for temp->next not for temp!=NULL
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}
void displayll(node * head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}
int main(){
    node * head =NULL;
    iat(head,1);
    iat(head,2);
    iat(head,3);
    iat(head,77);
    iat(head,8);
    iat(head,4);
    // iah(head,5);
    displayll(head);
}

//Shaurya Gupta Btech Cse



















