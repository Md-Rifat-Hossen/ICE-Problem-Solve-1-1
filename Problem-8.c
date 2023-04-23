#include<stdio.h>
int main()
{
    int i, n,sum=0;
    printf("Input number of tearm:");
    scanf("%d",&n);
    printf("\nThe odd number are:");
    for(i=1;i<=n;i++){
        printf("%d",2*i-1);
        sum+=2*i-1;
    }
    printf("\n The sume of odd number %d term:%d\n",n,sum);


}
