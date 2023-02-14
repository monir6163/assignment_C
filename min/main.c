#include <stdio.h>
int main() {
 int num[100],n,i,min;
 printf("Enter Size of Array: ");
 scanf("%d",&n);
 printf("Enter Value in Array: ");
 for(i=0; i<n; i++)
 {
     scanf("%d",&num[i]);
 }
 min=num[0];
 for(i=0; i<n; i++)
 {
     if(num[i]<min)
     {
         min=num[i];
     }
 }
 printf("Minimum Number Of Array: %d\n",min);
  return 0;
}
