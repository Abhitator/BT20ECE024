#include<stdio.h>
int main()
{
    //identification of a leap year 
   int a,j;
   printf("ENTER A YEAR:\t");
   scanf("%d",&a);
   if(a%100==0 && a%400==0)
   {printf("%d is a leap year",a);}
   else if (a%4==0)
   {
   printf("%d is a leap year",a) ;}
  else
  {
 printf("%d is not a leap year",a);  }
}