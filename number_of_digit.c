#include<stdio.h>
int main(){
    int d=0;
    int n;
    printf("ente a number");
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        n=n/10;
        d++;
    }
    printf("no .of digits in %d is %d",temp,d);
    return 0;
}