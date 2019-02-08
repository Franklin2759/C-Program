#include <stdio.h>

int main()
{
 int i;
 scanf("%d",&i);
 if(i%2==0)
{
    printf("Even");
}
else if(i%2!=0)
{
    printf("Odd");
}
else
{
    printf("invalid");
}
    return 0;
}
