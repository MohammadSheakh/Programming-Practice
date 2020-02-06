#include <stdio.h>
int string_length(char str[])
{
int i, length = 0;
for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
return length;
}
int main()
{
char ara[100];
while(NULL != gets(ara))
{
printf("%s\n", ara);
}
return 0;
}
