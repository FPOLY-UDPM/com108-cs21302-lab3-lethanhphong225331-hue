/******************************************************************************
 * Họ và tên: [Lê Thành Phong]
 * MSSV:      [PS47422]
 * Lớp:       [CS21302]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>
#include <string.h>

int main() {

    // Khai báo biến
    float diem;
    char hocLuc[20];

    // Nhập dữ liệu
    printf("Nhap diem cua sinh vien (0-10): ");
    scanf("%f", &diem);

    // Xử lý và hiển thị kết quả
    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le!\n");
        return 0;
    }

    if (diem >= 9) {
        strcpy(hocLuc, "Xuat sac");
    } else if (diem >= 8) {
        strcpy(hocLuc, "Gioi");
    } else if (diem >= 6.5) {
        strcpy(hocLuc, "Kha");
    } else if (diem >= 5) {
        strcpy(hocLuc, "Trung binh");
    } else if (diem >= 3.5) {
        strcpy(hocLuc, "Yeu");
    } else {
        strcpy(hocLuc, "Kem");
    }

    printf("Hoc luc cua sinh vien la: %s\n", hocLuc);

    return 0;
}