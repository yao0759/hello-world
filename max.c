#include<stdio.h>
int main()
{
  int a,b,c;
  int max(int x,int y);
  c=max(a,b);
  printf("The max is %d",c);
  return 0;
}
int max(int x,int y)
{
  int z;
  z=x>y?x:y;
  return (z);
}
