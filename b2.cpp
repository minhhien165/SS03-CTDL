#include <stdio.h>

int sum(int n, int m) {
    if (n > m)
        return 0;
    return n + sum(n + 1, m);
}

int main() {
    int n, m;
    printf("Nhap hai so nguyen n va m voi n < m: ");
    scanf("%d %d", &n, &m);
    if (n > m) {
        printf("n phai nho hon m\n");
    } else {
        printf("Tong cac so tu %d den %d la %d\n", n, m, sum(n, m));
    }
    return 0;
}
