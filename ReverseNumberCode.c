/*Program to reverse digits of number

#include <stdio.h>
int main()
{
  int a = 322;
  int b =0;
  int reminder;
  
  while(a>1)
 {
    reminder = a%10;
    b = b*10+reminder;
    a = a / 10;
  }
  printf("%d",b);
    return 0;
}
