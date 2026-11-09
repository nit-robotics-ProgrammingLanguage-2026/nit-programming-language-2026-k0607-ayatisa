#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("NG\n");
    } else {
        int count = 0;
        // i と j は 0 以上 50 以下の整数
        for (int i = 0; i <= 50; i++) {
            for (int j = 0; j <= 50; j++) {
                if (i != j && i + j == n) {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}