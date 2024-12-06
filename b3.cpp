#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Nhap so lan hien thi so Fibonacci: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui long nhap so nguyen duong\n");
    } else {
        printf("Day so Fibonacci: ");
        for (int i = 0; i < n; i++) {
            printf("%d", fibonacci(i));
            if (i < n - 1)
                printf(",");
        }
        printf("\n");
    }
    return 0;
}
