#include <stdio.h>
#include <string.h>
int palindrome(char str[], int start, int end)
{
    while(start < end)
    {
        if(str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}
int main()
{
    char str[100];
    printf("Enter binary string: ");
    scanf("%s", str);
    if(palindrome(str, 0, strlen(str)-1))
        printf("String Accepted\n");
    else
        printf("String Rejected\n");
    return 0;
}
