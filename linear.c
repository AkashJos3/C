#include<stdio.h>
void main()
 {
  int a[10],count=0,i,element,t=0,n;
  t++;
  printf("Enter the size of the array");
  t++;
  scanf("%d",&n);
  t++;
  printf ("Enter the elements");
  t++;
  for(i=0;i<n;i++)
  {
  t++;
  scanf("%d",&a[i]);
  t++;
  }
  t++;
  printf("Enter the elemens to be searched");
  t++;
  scanf("%d",&element);
  t++;
  t++;
  for(i=0;i<n;i++)
  {
  t++;
  if(element==a[i])
  {
  t++;
  t++;
   printf("position %d\n",i+1);
   count = 1;
   t++;
  }
  }
  t++;
   if (count==0)
   {
   printf("The element is not found");
   t++;
   }
   else
   { 
   printf("The element is found");
   t++;
   }
   printf("\n space complexity is %d",(4*4)+(n*4));
   printf("\n Time complexity is %d",t);
 }
 
