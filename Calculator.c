#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("Enter Two nos ");
   int a,b;
   scanf("%d%d",&a,&b);
   int c =1;
   for(int i=0;i<b;i++){
      c=c*a;
   }
      printf("Result is %d",c);

    return 0;
}
