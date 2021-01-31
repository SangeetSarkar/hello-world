#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],b[12],i,count=0 ;
    printf("Enter the smaller array :\n");
    for(i=0;i<10;i++)
    {

        scanf("%d",&a[i]);
    }
        printf("Enter the larger array :\n ");
       for( i=0;i<12;i++)
        {

        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++)
        for(int j=0;j<12;j++)
    {

        if(a[i]==b[j])
         {
           count++;
          printf("The %d th element was found in %d th position.\n",i+1,j+1);
         }
    }
    printf("Total number of matching items are = %d",count);
    return 0;
}
//hello