#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Nhap mot so nguyen duong n >= 0: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Giai thua khong xac dinh cho so am\n");
    } else {
        printf("Giai thua cua %d la %lld\n", n, factorial(n));
    }
    return 0;
}
