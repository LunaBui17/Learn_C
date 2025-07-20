#include<stdio.h>

int sum(int a, int b){
    return a+b;
}



int main(){
    int A[3][2]={1,2,3,4,8,9};
    int B[4]= {4,6,8,2};
    for(int i = 0; i<3;i++)
    for(int j = 0; j<2; j++){
        printf("A[%d][%d]= %d\n", i, j, A[i][j]);
    }
    int *p;
    p=B;
    for(int i = 0; i<4; i++){
        printf("gia tri B[%d] = %d\n",i, *(p+i));
    }


    int a;
    scanf("%d", &B[2]);
    printf("gia tri B[2] = %d\n", B[2]);


    printf("sum = %d", sum(3,4));
    return 0;
}
