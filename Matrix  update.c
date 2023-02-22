/* Matrix  update */
#include <stdio.h>

int main()
{
  int a[2][3];
  int i = 0;
  int k = 0;

  for(i = 0; i<2; i++)
  {
      for(k = 0; k<3; k++)
      {
          scanf("%d",&a[i][k]); 
      } 
  }

  for(i = 0; i<2; i++)
  {
      for(k = 0; k<3; k++)
      {
          printf("%d\t",a[i][k]); 
      } 
  }
    return 0;
}
