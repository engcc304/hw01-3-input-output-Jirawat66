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
    char FirstName1[50] ;
    char LastName1[50] ;
    printf("First Name : ") ;
    scanf( "%s", FirstName1 ) ;
    printf("Last Name : ") ;
    scanf("%s", LastName1 ) ;
    printf("%S %ss TC, RMUTL, Chiang Mai, Thailand\n ", FirstName1, LastName1) ;

    char FirstName2[50] ;
    char LastName2[50] ;
    printf("First Name : ") ;
    scanf( "%s", FirstName2 ) ;
    printf("Last Name : ") ;
    scanf("%s", LastName2 ) ;
    printf("%S %ss TC, RMUTL, Chiang Mai, Thailand\n ", FirstName2, LastName2) ;
    
    return 0 ;
}
