#include<stdio.h>
#include "max.o"
#include "min.o"
int main()
 {
    int a1=21;
    int a2=33;
    maxNum=max(a1,a2);
    minNum=min(a1,a2);
    int maxNum(int x,int y);
    int minNum(int x,int y);
    printf("the max number is %d\n",maxNum);
    printf("the min number is %d\n",minNum);
    return 0;
 }
