#include<stdio.h>
int main(){
    int n;
    printf("Enter number of stars: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++){
            printf("*");
        }
        printf("\n");
    }
    printf("Hello git\n");
    return 0;
}