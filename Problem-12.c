#include<stdio.h>
int main()
{

    int i,j,rows,k=1;
    printf("ENter the rows Number:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){

        for(j=1;j<=i;j++)
            printf("%d",k++);
        printf("\n");
    }



}
