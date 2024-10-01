#include<stdio.h>
//write the program to change the small letter into capital and vice-versa
int main(){
    char a[30]={'abcdefghijklmnopqrstuvwxyz'};
    //scanf("%c",&a);
    for(int i=0;a[i]!=null;i++){
    if(a[i]>='a' && a[i]<='z'){
            a[i]=a[i]-32
            printf("%c\n",a);
    }
    else{
        printf("Capital\n");
    }

   }
}
