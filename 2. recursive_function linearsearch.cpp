//Recursive Program: 
#include<stdio.h> 
int linearsearch(int *arr,int n,int i,int k) 
{ 
 if(i<n) 
{ 
  if(arr[i]==k) 
   return i; 
  else 
   return linearsearch(arr,n,i+1,k); 
 } 
 return -1; 
} 
int main() 
{ 
 int n,c=0,f; 
 scanf("%d",&n); 
 int i,arr[n],k; 
 for(i=0;i<n;i++) 
  scanf("%d",&arr[i]);  
 scanf("%d",&k); 
 f=linearsearch(arr,n,0,k); 
 if(f==-1)  
	printf("Element not found"); 
 else
 	printf("Element found at index %d",f); 
} 