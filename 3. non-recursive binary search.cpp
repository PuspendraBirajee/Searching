//Non-recursive Program: 
#include<stdio.h> 
int binarysearch(int *arr,int e,int l,int r) 
{ 
 int m; 
 while(l<=r) 
{ 
  m=(l+r)/2; 
  if(arr[m]==e) 
   return m; 
  if(arr[m]<e) 
   l=m+1; 
  if(arr[m]>e) 
   r=m-1; 
 } 
 return -1; 
} 
int main() 
{ 
 int n,e,i,j,k,t; 
 scanf("%d",&n); 
 int l=0,r=n-1,arr[n]; 
 for(i=0;i<n;i++) 
  scanf("%d",&arr[i]); 
 scanf("%d",&e); 
 k= binarysearch(arr,e,l,r); 
 if(k!=-1) 
  printf("Element found at index %d",k); 
 else 
  printf("Element not found"); 
}