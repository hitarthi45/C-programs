#include <stdio.h>

 // global variable
int fun(){
    int a=6;
  printf("%d\n",a);
  return 0;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}
