#include<stdio.h>
int main()
{ int x,y;
printf("ENTER THE VALUE OF x coordinate\n");
scanf("%d",&x);
printf("ENTER THE VALUE OF y coordinate\n");
scanf("%d",&y);


if (x>0&&y>0)
{
    printf("your point is in first Quadrant");
}
if (x>0&&y<0)
{
    printf("your point is in fourth Quadrant");
}
if (x<0&&y>0)
{
    printf("your point is in second Quadrant");
}
if (x<0&&y<0)
{
    printf("your point is in third Quadrant");
}
if (x==0&&y<0)
{printf("your point is on negative Y axis");}
if (x==0&&y>0)
{printf("your point is on positive Y axis");}
if (y==0&&x<0)
{printf("your point is on negative X axis");}
 if (y==0&&x>0)
{printf("your point is on positive Y axis");}
else
{ if(x==0&&y==0)
    printf("your point is on origin");
}
    return 0;
}