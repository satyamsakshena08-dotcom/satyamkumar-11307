#include <stdio.h>
int main() {
    int n, key, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
        if(a[i] == key)
            found = 1;
    if(found)
        printf("Element found");
    else
        printf("Not found");

    return 0;
}