#include<stdio.h>>
int main()
{

    int i,j,rows;
    printf("input the numbr of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){

        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
