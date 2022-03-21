#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main(){
    float  i , a ,b , c;
    int faktöriyel = 1;
    int x = 3, n;

        for (n = 1 ; n <= 5 ; n++)
        {
            a = pow ((-1) , n);
            printf("a = %f\n",a);
            b = pow (x ,(2*n));
            printf("b = %f\n",b);
            i += a * b/ 2*faktöriyel;
            printf("%d. adım sonucu = %f",n,i);
            printf("\n");
        }
    for ( c=1;c<= n;c++){
        faktöriyel *= c;
        printf ("faktöriyel = %d\n", faktöriyel);}
        printf("\n işlem sonucu = %f",i);
}
