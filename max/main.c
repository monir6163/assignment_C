#include <stdio.h>
int main() {
 int num[100],n,i,max;
 printf("Enter Size of Array: ");
 scanf("%d",&n);
 printf("Enter Value in Array: ");
 for(i=0; i<n; i++)
 {
     scanf("%d",&num[i]);
 }
 max=num[0];
 for(i=0; i<n; i++)
 {
     if(num[i]>max)
     {
         max=num[i];
     }
 }
 printf("Maximum Number Of Array: %d\n",max);
  return 0;
}
