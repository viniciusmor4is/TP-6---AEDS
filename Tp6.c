#include <stdio.h>
#include <stdlib.h>

int seqFibonacci (int n)
{  if (n==0)
      return 0;
     else if (n==1) return 1;
         else return (seqFibonacci(n-1) + seqFibonacci(n-2));

}


int main()
{  int n, i;
   scanf("%d", &n);
   while (n>0)
      {
       for (i=1; i<=n; i++)
          {
            seqFibonacci(i);
          }

       printf("%d\n", seqFibonacci(n));

       scanf("%d", &n);
      }




    return 0;
}
