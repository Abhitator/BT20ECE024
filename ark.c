#include<stdio.h>
int main()
{ // code for factorial calculations
    int n,i,multiply=1;
printf("enter a number");
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {multiply=multiply*i;
 }
    printf(" factorial of %d is %d",n,multiply);
       return 0;
}