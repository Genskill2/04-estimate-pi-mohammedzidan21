#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int n)
{
  float p=1;
  for(int i=1; i<=n;i++)
    p*=(4*i*i)/((4*i*i)-1);
  return 2*p;
}
int main(void)
{
  int x = get_int("Enter number of terms");
  printf("%d \n",wallis_pi(x));
}
