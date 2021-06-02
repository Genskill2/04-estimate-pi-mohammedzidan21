#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int n)
{
  float p=1;
  for(int i=0; i<=n;i++)
    p*=(4*n*n)/((4*n*n)-1);
  return p;
}
int main(void)
{
  int x = get_int("Enter number of terms");
  printf("%d \n",wallis_pi(x));
}
