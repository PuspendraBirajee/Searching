//Non-recursive Program: 
#include<stdio.h> 
int linearsearch(int n,int k) 
{ 
 if(n==k)   
  return 1; 
 return 0; 
} 
int main() 
{ 
 int n,f=0; 
 scanf("%d",&n); 
 int i,arr[n],k; 
 for(i=0;i<n;i++) 
  scanf("%d",&arr[i]); 
 scanf("%d",&k); 
 for(i=0;i<n;i++) 
{ 
  if(linearsearch(arr[i],k)) 
{ 
   printf("Element found at index %d",i);  
   f=1; 
   break; 
} 
 } 
 if(f==0) 
  printf("Element not found"); 
}