/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>
int main() {
    char firstName1[50];
    char lastName1[50];
    printf("First Name: ");
    scanf("%s", firstName1);

    printf("Last Name: ");
    scanf("%s", lastName1);
    
    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand\n", firstName1, lastName1);
   
}
