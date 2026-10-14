#include<stdio.h>
int main(){
    int l;
    int c;
    printf("Enter number of lines: ");
    scanf("%d",&l);
    printf("Enter no. of columns: ");
    scanf("%d",&c);
    for(int i=1;i<=l;i++){
        for(int i=1;i<=c;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}