#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("Enter original price ");
   int a,b;
   scanf("%d",&a);
   printf("Enter discount percent");
    scanf("%d",&b);
   

   int c =(a-((b/100)*a));

      printf("Result is %d ",c);

    return 0;
}
