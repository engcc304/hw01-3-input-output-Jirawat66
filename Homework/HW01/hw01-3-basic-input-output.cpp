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
    char name[50], Last[50];
    printf("First Name: ");
    scanf("%s", name); 
    printf("Last Name: ");
    scanf("%s", Last); 
    printf("Full Name: %s %s", name, Last); 
    printf("TC, RMUTL, Chiang Mai, Thailand\n");
    return 0 ;
}