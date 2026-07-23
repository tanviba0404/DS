/*Write a program to multiply two matrices.
Name: Tanviba Zala
Enrollment no.: 92500527103*/
#include<stdio.h>

void main()
{
  int a[3][3],b[3][3],c[3][3],i,j,k;

  printf("\n Enter values for Matrix A \n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          printf("\n Enter values [%d][%d]:",i,j);
          scanf("%d",&a[i][j]);
      }
  }

  printf("\n Enter values for Matrix B \n");
    for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          printf("\n Enter values [%d][%d]:",i,j);
          scanf("%d",&b[i][j]);
      }
  }

   for(i=0;i<3;i++)
   {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
             for(k=0;k<3;k++)
             {
                 c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
             }
        }
   }


   printf("\n Matrix A \n");
   for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
        printf("%5d",a[i][j]);
      }
      printf("\n");
  }

   printf("\n Matrix B\n");
   for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
        printf("%5d",b[i][j]);
      }
      printf("\n");
  }

   printf("\nMatrix C\n");
   for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
        printf("%5d",c[i][j]);
      }
      printf("\n");
  }
}
