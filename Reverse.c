#include<stdio.h>
int main()
{
    int a,rem,i=0;
    printf("enter a no: ");
    scanf("%d",&a);
    while(a>0)
    {
      rem=a%10;
      a=a/10;
      i++;

    printf("%d",rem);
}
return 0;
}
