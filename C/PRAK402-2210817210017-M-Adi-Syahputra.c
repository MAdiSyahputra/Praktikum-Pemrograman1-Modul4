#include <stdio.h>

int main(void) 
{
    int angka,n;

    scanf("%d",&angka);
    for (n=1; n<=angka; n++) {
        if (n%2==1) {
            printf("%d", n);
        }
        else{}
    }
    printf("\n");
    for (n=angka; n>=1; n--) {
        if (n%2==0) {
            printf("%d",n);
        }
        else{}
    }
}
