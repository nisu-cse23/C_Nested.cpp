#include<stdio.h>
int main(){
    int row,col,n;
    printf("How many rows of suare?");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(row==1||row==n||col==row)
            printf("#");
            else
            printf("*");
        }

        printf("\n");

    }

}