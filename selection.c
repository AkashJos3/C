#include<stdio.h>
 void main()
 {
  int i,n,j,small,a[10],min,temp;
  printf(" Enter the elements of array");
  scanf("%d",&n);
  printf("Enter teh elements of the array:");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
  min= i;
  for(j=i+1;j<n;j++)
  {
   if(a[j]<a[min])
   {
   min= j;
  }
  }
  if(i!=min)
  {
   temp = a[i];
   a[i] = a[min];
   a[min] = temp;
  }
  }
  printf("elements are\n");
  for(i=0;i<n;i++)
  {
   printf("%d\n",a[i]);
  }
 }
  
  
  
  
