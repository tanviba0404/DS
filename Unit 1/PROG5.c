/*Create an array of size 10 find the largest value from the array.
Name:Tanviba Zala
Enrollment no.:92500527103/*
#include<stdio.h>
void main()
{
int a[10],i,Largest;

for(i=0;i<10;i++)
{
    printf("/n Enter the value %d : ",i+1);
    scanf("%d",&a[i]);
}
Largest=a[0];
for(i=0;i<10;i++)
   {
    if(a[i]>Largest)
{
    Largest=a[i];
}
   }

printf("/n Largest Element is : %d", Largest);
}
