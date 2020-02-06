#include<stdio.h>
int main()
{
    int num, i = 1, n, positive = 0, negative = 0;
    printf("");
    scanf("%d",&num);
    while(i<=num)
    {
        printf("\n");
        scanf("%d",&n);
        if(n>0)
            positive++;
        else
            negative++;
        i++;
    }
    printf("%d %d", positive, negative);
    return 0;
}
