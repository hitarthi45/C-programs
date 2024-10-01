//write a program to find the sum of user given number where we demands the number from user one by one
#include<stdio.h>
int main(){
    /*int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        i=i+1;
        printf("%d",i);
    }*/
    int num,flag=1,sum=0;
    printf("Enter a number");
        scanf("%d",&sum);
    for(;flag;){
        //printf("Enter a number");
        //scanf("%d",&num);
       // sum=sum+num;

        printf("press 0 to exit otherwise press any number to add\n");
        scanf("%d",&flag);
        sum=sum+flag;
    }
    printf("%d\n",sum);
}
