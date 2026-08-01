#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, j, len;
    printf("Enter binary string: ");
    scanf("%s", str);
    len = strlen(str);
    j = len - 1;
    while(i < len && str[i] == '0')
        i++;
    while(j >= 0 && str[j] == '1')
        j--;
    if(i == len - 1 - j)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");
    return 0;
}
