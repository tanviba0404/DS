#include<stdio.h>

void main()
{
    int a[20], i, pos, n;

    printf("\n Enter limit :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter value %d :",i+1);
        scanf("%d",&a[i]);
    }

    printf("\n Enter position to delete :");
    scanf("%d",&pos);

    pos = pos - 1;

    for(i=pos;i<n-1;i++)
    {
        a[i] = a[i+1];
    }

    n--;

    printf("\nArray after deletion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
