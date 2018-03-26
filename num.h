#include <stdio.h>
 
int main()
{
   int x, y, temp;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);
 
   temp = x;
   x    = y;
   y    = temp;
 
   printf("After Swapping,x,y");
}
