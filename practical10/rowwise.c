#include <stdio.h>

int main() {
    int r, c, i, j, arr[10][10], sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    for(i = 0; i < r; i++) {
        sum = 0;
        for(j = 0; j < c; j++)
            sum += arr[i][j];
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
