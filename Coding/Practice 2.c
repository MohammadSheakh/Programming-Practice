#include<stdio.h>
int main()
{
    int N,i=1,num,M=0;
    printf("Enter N : ");
    scanf("%d", &N);
    while(i<=N)
    {
        printf("Enter a number :");
        scanf("%d",&num);
        if(num>M)
        {
            num=M;
        }
        i++;
    }
    printf("Print the maximum number : %d",M);
    return 0;
}
