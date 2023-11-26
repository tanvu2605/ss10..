#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[100];
    int n;
    int sum;
    int count = 0;
    int min, max;
    do {
        printf("\n           MENU             \n");
        printf("1.Nhap gia tri n phan tu cua mang\n");
        printf("2.In gia tri cac phan tu trong mang\n");
        printf("3.Tinh tong cac phan tu chia het cho 2 va 3 trong mang\n");
        printf("4.In ra gia tri phan tu lon nhat va nho nhat trong mang\n");
        printf("5.Su dung thuat toan sap xep chen sap xep mang tang dan\n");
        printf("6.Tinh tong cac phan tu la so nguyen to trong mang\n");
        printf("7.Sap xep cac phan tu le chia het cho 5 o dau mang theo thu tu giam dan, cac phan tu chan chia het cho 5 o cuoi mang theo thu tu tang dan, cac phan tu con lai o giua mang theo thu tu giam dan\n ");
        printf("8.Nhap gia tri m tu ban phim, chen gia tri m vao mang (sap xep tang dan) dung vi tri\n");
        printf("9.Thoat\n");
        int choice;
        printf("chon so: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Nhap so luong phan tu: ");
            scanf("%d", &n);

            for (int i = 0; i < n; i++) {
                printf("nhap gia tri phan tu thu %d: ", i + 1);
                scanf("%d", &a[i]);
            }
            break;

        case 2:
            for (int i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;

        case 3:
            sum = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0 && a[i] % 3 == 0) {
                    sum += a[i];
                }
            }
            printf("tong cac phan tu chia het cho 2 va 3 trong mang la: %d\n", sum);
            break;

        case 4:
            max = a[0], min = a[0];
            for (int i = 1; i < n; i++) {
                if (a[i] > max) {
                    max = a[i];
                }
                if (a[i] < min) {
                    min = a[i];
                }
            }
            printf("Gia tri phan tu lon nhat trong mang la: %d\n", max);
            printf("Gia tri phan tu nho nhat trong mang la: %d\n", min);
            break;

        case 6:
            sum = 0;
            for (int i = 0; i < n; i++) {
                int isPrime = 1;
                if (a[i] < 2) {
                    isPrime = 0;
                } else {
                    for (int j = 2; j <= sqrt(a[i]); j++) {
                        if (a[i] % j == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if (isPrime) {
                    printf("%d ", a[i]);
                    sum += a[i];
                }
            }
            printf("\nTong cac so nguyen to trong mang la: %d\n", sum);
            break;

        case 8:
            int m;
            printf("Nhap gia tri m: ");
            scanf("%d", &m);

            for (int i = 0; i < n; i++) {
                if (a[i] < m) {
                    for (int j = n - 1; j >= i; j--) {
                        a[j + 1] = a[j];
                    }
                    a[i] = m;
                    break;
                }
            }

            printf("Mang sau khi chen gia tri m la: ");
            for (int i = 0; i <= n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            break;

        case 9:
            exit(0);
        }
    } while (1 == 1);

    return 0;
}
