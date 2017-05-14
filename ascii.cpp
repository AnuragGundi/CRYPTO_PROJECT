#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<cmath>
#include<time.h>
#include<malloc.h>

clock_t start,end;
double msecs;
using namespace std;


struct node
{
	int data;
	struct node *next;
};


void insert(struct node** head_ref, int new_data)
{
    
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    struct node *last = *head_ref; 
     new_node->data  = new_data;
    new_node->next = NULL;
 
    
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }  
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;    
}
int str_len;
int a[50];
char x[50];
int printList(struct node *n)
{
	int m=0,y=0;
  while(n!=NULL)
  {
  	  a[m++]=n->data;
  	  x[y++]=n->data;
     cout<<(n->data)<<"\t";
     n=n->next;
  }
}
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int pairWiseSwap(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        swap(&temp->data, &temp->next->data);
        temp = temp->next->next;
    }
}


int main()
{
	
	start=clock();
    char st[100];
    
	cout<<"Enter your Message(plain text):";
	gets(st);
	str_len=strlen(st);
	int ascii[str_len];
	for(int i=0;i<str_len;i++)
	 ascii[i]=st[i];
	
	for(int i=0;i<str_len;i++)
	 cout<<ascii[i]<<"\t";
	 
	 	for(int i=0;i<str_len;i++)
	 	{
	 		 if(ascii[i]%2==0)
	          ascii[i]=ascii[i]+1;
	         else
	          ascii[i]=ascii[i]-1;
	 		
	 	}
	 cout<<"\n\n\n";
	for(int i=0;i<str_len;i++)
	 cout<<ascii[i]<<"\t";
	 
	 struct node *head=NULL;
	for(int i=0;i<str_len;i++)
     {
     	insert(&head,ascii[i]);
    } 
	 cout<<"\n\nAfter Inserting Data into Linked List:\n\n";
	  printList(head);
	  
	  
	  cout<<"\n\n\nAfter PAirwise Swapping:";
	 pairWiseSwap(head);
	 
	  printList(head);
	  
	     for(int i=0;i<str_len;i++)
	     cout<<x[i];
	  
	  
	  cout<<"\n\nDECRYPTION PROCESS\n\n";
	  
	  
	   cout<<"\n\n\n\n\nAfter PAirwise Swapping in Decryption:\n\n";
	   pairWiseSwap(head);
	   printList(head);
	   
	   cout<<"\n\n";
	   for(int i=0;i<str_len;i++)
	   cout<<a[i]<<"\t";
	
	  	for(int i=0;i<str_len;i++)
	 	{
	 		 if(a[i]%2==0)
	          a[i]=a[i]+1;
	         else
	          a[i]=a[i]-1;
	 		
	 	}
	cout<<"\n\n\tODD-decrement by 1 and EVEN-increment by 1";
	   cout<<"\n\n"<<"\t";
	   for(int i=0;i<str_len;i++)
	   cout<<a[i]<<"\t";
	   
	   for(int i=0;i<str_len;i++)
	     st[i]=a[i];
	     
	    cout<<"\n\n"<<"The decrypted string is ";
	   for(int i=0;i<str_len;i++)
	     cout<<st[i];
	     
	   end=clock();
	    msecs=(((double)(end-start))*1000)/CLOCKS_PER_SEC;
	    cout<<"\n"<<"\n\nThe exxecution time : "<<msecs<<"\n";
   
}









