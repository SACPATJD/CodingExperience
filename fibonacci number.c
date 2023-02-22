/* fibonacci number */
#include <stdio.h>

int main()
{
  int a = 1;
  int b = 1;
  int n = 0;
  int reminder;
  printf("%d \n", a);
  while((a+b)<100)
 {
   n = a+b;
   a = b;
   b = n;
   printf("%d \n", n);
 }
    return 0;
}
