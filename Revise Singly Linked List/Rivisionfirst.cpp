// // Linked List Implementation Revision  13-02-2024

// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* next;

//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class LinkedList
// {
//     public:
//     Node* head;
//     Node* tail;
//     int size;

//     LinkedList()
//     {
//         head=tail=NULL;
//         size=0;
//     }


// int addathead(int val)
// {
//     Node* temp=new Node(val);
//     if(size==0)
//     {
//         head=tail=temp;
//         size++;
//     }
//     else
//     {
//         temp->next=head;
//         head=temp;
//         size++;
//     }
// }

// int addatend(int val)
// {
//     Node* temp=new Node(val);
//     if(size==0)
//     {
//         head=tail=temp;
//     }
//     else
//     {
//       tail->next=temp;
//       tail=temp;
//     }
//     size++;
// }

// int addatidx(int idx,int val)
// {
//     if(idx<0 || idx>size) cout<<"Invalid idx"<<endl;
//     else if (idx==0)  return addathead(val);
//     else if (idx==size)  return addatend(val);
//     else
//     {
//         Node* temp = head;
//         Node* t = new Node(val);
//         for(int i=1; i<idx; i++)
//         {
//             temp=temp->next;
//         }
//         t->next=temp->next;
//         temp->next=t; 
//     }
//     size++;
// }

// void display()
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// };
// int main()
// {
//     LinkedList ll;
//     // ll.addathead(10);
//     // ll.addathead(20);
//     // ll.addathead(30);
//     // ll.addathead(40);
//     // ll.addathead(50);
//     // ll.addathead(60);
//     // ll.addathead(70);
//     // ll.addathead(80);
//     // ll.display();
   
//     // ll.addatend(11);
//     // ll.addatend(12);
//     // ll.addatend(13);
//     ll.addatend(14);
//     ll.addatend(15);
//     ll.display();

//     ll.addatidx(0,100);
//     ll.addatidx(1,1000);
//     ll.addatidx(2,10000);
//     ll.display();

// }






//                        // Implementation of linked list node and class and apply stl operation on linked list.

// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int val;
//     Node* next;

//     Node(int val)
//     {
//        this->val=val;
//        this->next=NULL; 
//     }
// };

// class LinkedList
// {
//     public:
//     Node* head;
//     Node* tail;
//     int size;

//     LinkedList()
//     {
//         head=tail=NULL;
//         size=0;
//     }

// int insertathead(int val)
// {
//     Node* temp = new Node(val);
//     if(size==0)
//     {
//         head=tail=temp;
//         size++;
//     }
//     else
//     {
//         temp->next=head;
//         head=temp;
//         size++;
//     }
    
// }

// int insertattail(int val)
// {
//     Node* temp = new Node(val);
//     if(size==0)
//     {
//         tail->next=temp;
//         tail=temp;
//         size++;
//     }
//     else
//     {
//         tail->next=temp;
//         tail=temp;
//         size++;
//     }
// }

// int insertatidx(int idx, int val)
// {
//     if(idx<0 || idx>size) 
//     {
//         cout<<"Invalid Index";
//         return -1;
//     }
//     else if (idx==0) 
//     {
//         return insertathead(val);
//     }
//     else if (idx==size)
//     {
//         return insertattail(val);
//     }
//     else
//     {
//         Node* temp=head;
//         Node* t=new Node(val);
//         for(int i=1; i<idx; i++)
//         {
//             temp=temp->next;
//         }
//         t->next=temp->next;
//         temp->next=t;
//         size++;
//     }
// }

// void deleteathead()
// {
//     head=head->next;
//     size--;
// }

// void deleteattail()
// {
//     if(size==0)
//     {
//         cout<<"List is empty ! ";
//         return ;
//     }
//     Node* temp=head;
//     // ************ again visit this code *************** to solve how this code is run solve using pen paper mode 
//     // // this is my approach to solve this problem -: 
//     // for(int i=1; i<size-1; i++)
//     // {
//     //     temp=temp->next;
//     // }
//     // temp->next=NULL;
//     // tail=temp;
//     // size--;

//     // 2nd approach
//     while(temp->next!=tail)
//     {
//         temp=temp->next;
//     }
//     temp->next=NULL;
//     tail=temp;
//     size--;
// }



// void deleteatidx(int idx)
// {
//     if(size==0)
//     {
//         cout<<"List is empty ! ";
//         return ;
//     }
//     Node* temp=head;
//     for(int i=1; i<idx; i++)
//     {
//         temp=temp->next;
//     }
//     temp->next=temp->next->next;
//     size--;
// }



// int getathead()
// {
//     if(size==0)
//     {
//         cout<<"Linked List is empty! ";
//         return -1;
//     }
//     else cout<<head->val;
// }

// int getattail()
// {
//     if(size==0)
//     {
//         cout<<"Linked List is empty! ";
//         return -1;
//     }
//     else cout<<tail->val;
// }

// int getatidx(int idx)
// {
//     if(idx<0 || idx>size)
//     {
//         cout<<"Invalid Index";
//         return -1;
//     }
//     else if (idx==0)
//     {
//         return getathead();
//     }
//     else if(idx==size)
//     {
//         return getattail();
//     }
//     else
//     {
//         Node* temp=head;
//         for(int i=1; i<=idx; i++)
//         {
//             temp=temp->next;
//         }
//         cout<<temp->val<<" ";
//     }
// }



// void display()
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }



// };
// int main()
// {
//     LinkedList ll;
//     ll.insertathead(10);
//     ll.insertathead(20);
//     ll.insertathead(30);
//     ll.insertathead(40);
//     ll.insertathead(50);
//     ll.insertathead(60);
//     ll.display();



//     // ll.insertattail(100);
//     // ll.insertattail(200);
//     // ll.insertattail(300);
//     // ll.insertattail(400);
//     // ll.display();



// // ****************   Visit again this insertatindex code becoz it's important *********************
// // And this problem and says why less index node ia connect first and then large index is connect first and take 
// // some example also to understand this problem **************************
 

//     // ll.insertatidx(2,11);
//     // ll.insertatidx(5,111); 
//     // ll.insertatidx(4,1111);
//     // ll.insertatidx(6,-6);
//     // ll.display();

//     // // in ll val. are arranged indexing wise (sequencing wise) (0,1,2,3,4...) not randomly ki koi node kahi se connect ho jayega 
//     // // values are attached through one node to another node hm yha per 2nd idx per values ko join kiye then direct 
//     // // 5th index per value ko join nhi kara sakte jb tk esse kam ke index per val join karne ka option ho 
//     // // this code is true 
//     // // hme pahle 2nd idx per value ko add kiye than 5th per karna chahe per add nhi hua kyuki hmare pass option 
//     // // hai ki hm 4th index per and then just next time 6th index per values join(node join) kar sakte h eske bad jb max idx se small
//     // // sare idx per node connect hone ke bad vh bich me aaye large index just bad me connect ho jata h

//     // // output -:
//     // // 60 50 40 30 20 10 100 200 300 400 
//     // // 60 50 11 40 1111 30 -6 111 20 10 100 200 300 400 

//     // let's take another example-:  

//     // ll.insertatidx(2,11);
//     // ll.insertatidx(4,111); 
//     // ll.insertatidx(5,1111);
//     // ll.insertatidx(6,-6);
//     // ll.display();
//     // // 60 50 40 30 20 10 100 200 300 400 
//     // // 60 50 11 40 111 1111 -6 30 20 10 100 200 300 400 


//      // let's take another example-:  

//     // ll.insertatidx(4,-4);
//     // ll.insertatidx(3,-3); 
//     // ll.insertatidx(2,-2);
//     // ll.insertatidx(6,-6);
//     // ll.display();
//     // // 60 50 40 30 20 10 100 200 300 400 
//     // // 60 50 -2 40 -3 30 -6 -4 20 10 100 200 300 400




//     // ll.insertatidx(3,-4);
//     // ll.insertatidx(2,-3); 
//     // ll.insertatidx(4,-2);
//     // ll.insertatidx(6,-6);
//     // ll.display();
//     // // 60 50 40 30 20 10 100 200 300 400 
//     // // 60 50 -3 40 -2 -4 -6 30 20 10 100 200 300 400 
    



//     // ll.deleteathead();
//     // ll.display();
//     // ll.deleteathead();
//     // ll.display();




//     // ll.deleteattail();
//     // ll.display();
//     // ll.deleteattail();
//     // ll.display();


//     // ll.deleteatidx(2);
//     // ll.display();
//     // ll.deleteatidx(3);
//     // ll.display();
   
//     // ll.getathead();
//     // cout<<endl;
//     // ll.deleteathead();
//     // ll.display();
//     // ll.getathead();
    
//     // ll.getattail();
//     // cout<<endl;
//     // ll.deleteattail();
//     // ll.display();
//     // ll.getattail();

//     ll.getatidx(3);
//     ll.getatidx(4);

// }



