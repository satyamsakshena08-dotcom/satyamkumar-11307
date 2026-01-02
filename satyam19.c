#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];

    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);

    printf("Length of s1 = %lu\n", strlen(s1));

    strcpy(s1, s2);
    printf("After strcpy, s1 = %s\n", s1);

    strcat(s1, s2);
    printf("After strcat, s1 = %s\n", s1);

    if(strcmp(s1, s2) == 0)
        printf("Strings equal");
    else
        printf("Strings not equal");

    return 0;
}