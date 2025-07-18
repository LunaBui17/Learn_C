#include <stdio.h>

int main()
{
    // khai bao con tro void
    //  * là khai báo con trỏ
    // void *ptr = NULL;
    // khai bao bien int a = 11
    int a = 11;
    // gán giá trị con trỏ bằng địa chỉ biến a
    // & là lấy địa chỉ của biến
    // ptr = &a;
    void *ptr = &a;

    printf("kich thuoc cua con tro: %d\n", sizeof(ptr));
    // %p là in địa chỉ và (giá trị con trỏ)
    // * là lấy giá trị con trỏ
    printf("dia chi con tro : %p", *((int *)ptr));
    return 0;
}
