#include <stdio.h>                                  // นำเข้าไลบรารีสำหรับการใช้งานฟังก์ชัน printf
int main(){                                         // เริ่มต้นโปรแกรมหลัก

    char nameInitial = 'S';                         // ประกาศตัวแปร nameInitial เป็นตัวอักษรและกำหนดค่าเป็น 'S' (Identifier)
    int age = 19;                                   // ประกาศตัวแปร age เป็นจำนวนเต็มและกำหนดค่าเป็น 19 (Identifier)
    float weight = 63.5;                            // ประกาศตัวแปร weight เป็นเลขทศนิยมและกำหนดค่าเป็น 63.5 (Identifier)
    char gender[30] = "Male";                       //ประกาศตัวแปร gender เป็นอาร์เรย์ของตัวอักษรและกำหนดค่าเป็น "MAle" ขนาด30 (Identifier)

    printf("nameInitial = %c\n", nameInitial);      //แสดงตัวอักษร (Format specifier %c)
    printf("age = %d\n", age);                      //แสดงจำนวนเต็ม (Format specifier %d)
    printf("weight = %.1f\n", weight);              //แสดงเลขทศนิยมโดยมีตำแหน่งทศนิยม 1 ตำแหน่ง (Format specifier %.1f) 
    printf("gender = %s\n", gender);                //แสดงข้อความตัวอักษร

    return 0;                                       // จบโปรแกรมหลักและส่งค่ากลับ 0
}