#include<stdio.h>
int main(){

     //printf("%d\n",5>4?1:0);
     int a=5, b=4, c=6, d=8;
     a=a>b?a:b;
    /* a=a>c?a:c;
     a=a>d?a:d;*/
     b=c>d?c:d;
     a=a>b?a:b;
     printf("%d",a);
     return 0;
}
































