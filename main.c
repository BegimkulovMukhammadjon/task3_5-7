#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void prog5() {
    int a, b = 0,i=2;
    printf("Ââĺäčňĺ ÷čńëî ");
    scanf("%d", &a);
    printf("\n\n Îňâĺň:  1 ");
    while (a > 1) {
        if (a % i == 0) {
            a = a / i;
            printf(" %d ", i);
        }
        else {
            i++;
        }


    }
}
void prog7() {
    int a, b = 1,d=0;
    printf("Ââĺäčňĺ ÷čńëî ");
    scanf("%d", &a);

    while (a > b) {
       // printf(" %d ",b);
        if ( (a | b) == a ) {
            d++;
        }
        b = b * 2;


    }
    printf("Îňâĺň %d ",d);
}

int main()
{
    int q = -1;

    while (q != 0) {
        printf("\n\n\n1)  Íŕďĺ÷ŕňŕňü ňŕáëčöó çíŕ÷ĺíčé ôóíęöčč íŕ îňđĺçęĺ [ŕ, b] ń řŕăîě h.\nÔóíęöčţ ďđčäóěŕňü ńŕěčě, îíŕ äîëćíŕ čěĺňü đŕçđűâ íŕ îňđĺçęĺ[ŕ, b].");
        printf("\n3) Âű÷čńëčňü ńóěěó đ˙äŕ Ěŕđęĺëîíŕ");
        printf("\n5) Âűâĺńňč čç ęŕęčő ďđîńňűő ÷čńĺë ńîńňîčň ÷čńëî");
        printf("\n7) ęîë-âî ĺäčíčö â äâîč÷íîé çŕďčńč äŕííîăî ÷čńëŕ");

        printf("\nÂâĺäčňĺ ÷čńëî ");
        scanf_s("%d", &q);
        switch (q) {
        case 5: {
            prog5();
            break;
        }
        case 7: {
            prog7();
            break;
        }
        }


    }
    return 0;
}
