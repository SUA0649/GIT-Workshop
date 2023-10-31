#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main(){
    int n,m;
    printf("Enter the first and second number: ");
    scanf("%d %d",&n,&m);
    printf("Sum: %d\nSub: %d\nMul: %d\nDiv: %d",add(n,m),sub(n,m),mul(n,m),div(n,m));

    return 0;
}

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}