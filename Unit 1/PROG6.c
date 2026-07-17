#include<stdio.h>
void main()
{
   int a [20], i, pos,val,n;
   printf("\n Enter limit :");
   scanf("%d",&n);

   for(i=0;i<n;i++)
   {
   printf("\n Enter value %d :",i+1);
   scanf("%d",&a[i]);
   }

   printf("\n Enter position at which you want to insert value :");
   scanf("%d",&pos);
   pos=pos-1;
   printf("\n Enter New value to be inserted :");
   scanf("%d",&val);
   for(i=n;i>=pos;i--)
   {
       a[i]=a[i-1];
   }

    a[pos]=val;
    for(i=0;i<n+1;i++)

   {
     printf("\n %d",a[i]);
   }

   }
