#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j;
    printf("Enter binary string: ");
    scanf("%s", str);
    i = 0;
    j = strlen(str) - 1;
    while(i < j && str[i] == '0' && str[j] == '0')
    {
        i++;
        j--;
    }
    while(i <= j)
    {
        if(str[i] != '1')
        {
            printf("String Rejected\n");
            return 0;
        }
        i++;
    }
    printf("String Accepted\n");
    return 0;
}