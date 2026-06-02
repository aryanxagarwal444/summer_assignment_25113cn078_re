#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int c=0;
    while(n>0){
        n/=10;
        ++c;
    }
    printf("The number of digits are %d",c);
}