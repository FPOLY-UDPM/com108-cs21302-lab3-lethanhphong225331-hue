/******************************************************************************
 * Họ và tên: [Lê Thành Phong]
 * MSSV:      [PS47422]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <math.h>

int main(){
    
    // Khai báo biến
    int choice;
    float a, b, c;
    float delta, x1, x2;
    int soDien;
    float soTien;

    // Nhập dữ liệu
    printf("Chon bai tap (1-3): ");
    scanf("%d", &choice);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    switch (choice) {
        case 1:
            // Bài 2.1: Giải phương trình bậc 1
            printf("Nhap he so a: ");
            scanf("%f", &a);
            printf("Nhap he so b: ");
            scanf("%f", &b);
            if (a == 0) {
                if (b == 0) {
                    printf("Phuong trinh co vo so nghiem.\n");
                } else {
                    printf("Phuong trinh vo nghiem.\n");
                }
            } else {
                float x = -b / a;
                printf("Phuong trinh co nghiem x = %.2f\n", x);
            }
            break;
        case 2:
            // Bài 2.2: Giải phương trình bậc 2
            printf("Nhap he so a: ");
            scanf("%f", &a);
            printf("Nhap he so b: ");
            scanf("%f", &b);
            printf("Nhap he so c: ");
            scanf("%f", &c);
            if (a == 0) {
                if (b == 0) {
                    if (c == 0) {
                        printf("Phuong trinh co vo so nghiem.\n");
                    } else {
                        printf("Phuong trinh vo nghiem.\n");
                    }
                } else {
                    float x = -c / b;
                    printf("Phuong trinh co nghiem x = %.2f\n", x);
                }
            } else {
                delta = b * b - 4 * a * c;
                if (delta < 0) {
                    printf("Phuong trinh vo nghiem.\n");
                } else if (delta == 0) {
                    x1 = -b / (2 * a);
                    printf("Phuong trinh co nghiem kep x1 = x2 = %.2f\n", x1);
                } else {
                    x1 = (-b + sqrt(delta)) / (2 * a);
                    x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("Phuong trinh co hai nghiem phan biet:\n");
                    printf("x1 = %.2f\n", x1);
                    printf("x2 = %.2f\n", x2);
                }
            }
            break;
        case 3:
            // Bài 3: Tính tiền điện
            printf("Nhap so dien tieu thu: ");
            scanf("%d", &soDien);

            if (soDien <= 50) {
                soTien = soDien * 1000;
            } else if (soDien <= 100) {
                soTien = 50 * 1000 + (soDien - 50) * 1200;
            } else if (soDien <= 200) {
                soTien = 50 * 1000 + 50 * 1200 + (soDien - 100) * 1500;
            } else {
                soTien = 50 * 1000 + 50 * 1200 + 100 * 1500 + (soDien - 200) * 25;
            }

            printf("So tien phai tra la: %.2f\n", soTien);
        default:
           break;
    }

    return(0);
}