#include <stdio.h>

int main(void)
{
    int angka1,angka2,n1,n2;

    scanf("%d %d",&angka1, &angka2);
n1=angka1;
n2=angka2;
    if (angka1>angka2) {
        while (n1>=angka2) {
            printf("%d %d",n1,n2);
            n1--;
            n2++;
            printf("-");
    }
}
    else {
        while (n1<=angka2) {
        printf("%d %d - ",n1,n2);
        n1++;
        n2--;
        }
    }
}
    
