#include<stdio.h>
int main(){
    int row,col,n;
    printf("How many rows of suare:");
    scanf("%d",&n);

    for(row=1; row<=n;row++)//outer loop
    {
        for(col=1;col<=n;col++)//Inner loop
            printf("*");

            printf(" \n");
        
    }
    return 0;
}