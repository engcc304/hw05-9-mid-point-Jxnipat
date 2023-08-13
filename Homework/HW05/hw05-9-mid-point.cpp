/*
    ผู้ใช้กรอกพิกัดจำนวน 2 จุดลงในโปรแกรม ให้คุณเขียนโปรแกรมคำนวณหาจุดกึ่งกลางของ 2 จุดนี้

    Test case:
        Input A Point :
            2 2
        Input B Point :
            4 4

    Output:
        Mid Point of A and B is ( 3.0, 3.0 )

    Test case:
        Input A Point :
            -3 9
        Input B Point :
            4 -19

    Output:
        Mid Point of A and B is ( 0.5, -5.0 )

    Test case:
        Input A Point :
            6 -8
        Input B Point :
            3 3

    Output:
        Mid Point of A and B is ( 4.5, -2.5 )
*/
#include <stdio.h>

int main() {
    float x1, y1, x2, y2;

    // รับพิกัดA
    printf("Input A Point:\n");
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);

    // รับพิกัดB
    printf("Input B Point:\n");
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);

    // คำนวณ
    float midX = (x1 + x2) / 2;
    float midY = (y1 + y2) / 2;

    // แสดงผลลัพธ์
    printf("Mid Point of A and B is ( %.1f, %.1f )\n", midX, midY);

    return 0;
    //เมือไหร่ HW เเม่งจะเสร็จหมดวะ
}
