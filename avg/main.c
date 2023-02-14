#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100],i,n,sum=0,average;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter Value in Array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    average=sum/n;
    printf("Average Number Of Array: %d\n", average);
    return 0;
}
