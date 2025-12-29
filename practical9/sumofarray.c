#include <stdio.h>

int main() {
    int n, i, arr[50], sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
