#include<stdio.h>
int main(){
    int n;
    printf("Enter any positive number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=5;i++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}