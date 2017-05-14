

//project
//implementing given algo


#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<cmath>
#include<time.h>
clock_t start,end;
double msecs;
using namespace std;
int cur=0;
void revers(char * ar,int st,int en)
{
	int temp;
	
	while(st<=en)
	{
		temp=ar[st];
		ar[st]=ar[en];
		ar[en]=temp;
		
		st++;
		en--;
	}
}
void mirror(char * ar,int len)
{
	int i,st=0,en,sum=0;
	int limiter=log(len)/log(2);
	for(i=0;i<=limiter;i++)
	{  
	     en=st+pow(2,i)-1;
	     revers(ar,st,en);
	     st=en+1;		
	}
	
}
void preorder(char * pre,char *ar,int index,int len)
{
   if(index>=len)
   return;
   pre[cur++]=ar[index];
   
   preorder(pre,ar,2*index+1,len);
   preorder(pre,ar,2*index+2,len);
   	
}


int main()
{


     start=clock();
	char st[100];
	printf("Enter your Message(plain text): ");
	gets(st);
	int str_len=strlen(st);
	int t1=log(str_len)/log(2);
	t1=t1+1;
	int len=pow(2,t1)-1;
	char ar[len];
	for(int i=0;i<str_len;i++)
	ar[i]=st[i];
	 
	 for(int i=str_len;i<len;i++)
	  ar[i]='%';
	  
	  cout<<"\n\n\nENCRYPTION PROCESS\n\n\n";
	  
	  cout<<"\n\nAfter Adding Padding Bits:\n";
	  for(int i=0;i<len;i++)
	   cout<<ar[i]<<' ';
	   
	   revers(ar,0,len-1);
	    cout<<"\n\nAfter Reversing The Text:\n";
	   cout<<'\n';
	   
	   for(int i=0;i<len;i++)
	   cout<<ar[i]<<' ';
	   
	   mirror(ar,len);
	   
	    cout<<"\n\nAfter Mirroring:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<ar[i]<<' ';
	   
	   
	   char * temp;
	   char pre[len];
	  
	   cur=0;
	   preorder(pre,ar,0,len);
	   cout<<"\n\nFirst Preorder Traversal:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<pre[i]<<' ';
	   
	   cur=0;
	   preorder(ar,pre,0,len);
	   cout<<"\n\nSecond Preorder Traversal:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<ar[i]<<' ';
	   
	   cur=0;
	   preorder(pre,ar,0,len);
	   cout<<"\n\nThird Preorder Traversal:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<pre[i]<<' ';
	   
	   cur=0;
	   preorder(ar,pre,0,len);
	   cout<<"\n\nFourth Preorder Traversal:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<ar[i]<<' ';
	   
	   cur=0;
	   preorder(pre,ar,0,len);
	   cout<<"\n\nFifth Preorder Traversal:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<pre[i]<<' ';
	    
	   cout<<"\n\n\nDECRYPTION PROCESS\n\n\n";
	   
	   
	 
	   cur=0;
	   preorder(ar,pre,0,len);
	   cout<<"\n\nFirst Preorder Traversal:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<ar[i]<<' ';
	
	   
	   cur=0;
	   preorder(pre,ar,0,len);
	   cout<<"\n\nSecond Preorder Traversal:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<pre[i]<<' ';
	   
	   cur=0;
	   preorder(ar,pre,0,len);
	   cout<<"\n\nThird Preorder Traversal:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<ar[i]<<' ';
	   
	   
	   cur=0;
	   preorder(pre,ar,0,len);
	   cout<<"\n\nFourth Preorder Traversal:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<pre[i]<<' ';
	   
	   cur=0;
	   preorder(ar,pre,0,len);
	   cout<<"\n\nFifth Preorder Traversal:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<ar[i]<<' ';
	   
	    cur=0;
	   preorder(pre,ar,0,len);
	   cout<<"\n\nSixth Preorder Traversal:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<pre[i]<<' ';
	
	  
	  
	   mirror(pre,len);
	   
	    cout<<"\n\nAfter Mirroring:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<pre[i]<<' ';
	
	   
	   revers(pre,0,len-1);
	    cout<<"\n\nAfter Reversing The Text:\n";
	   cout<<'\n';
	   for(int i=0;i<len;i++)
	   cout<<pre[i]<<' ';
	   
	   
	   cout<<"\nAfter Removing Padding Bits:\n";
	   for(int i=0;i<str_len;i++)
	    cout<<pre[i]<<' ';
	    end=clock();
	    msecs=(((double)(end-start))*1000)/CLOCKS_PER_SEC;
	    cout<<"\n"<<"the  execution time is "<<msecs<<"\n";
}














