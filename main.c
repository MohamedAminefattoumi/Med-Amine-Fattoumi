#include <stdio.h>
#include <stdlib.h>

int main()
{
   const float pi =3.14;
   int r;
   printf("Geben Sie den Messwert für den Radius eines Kreises an  : ");
   scanf("%d", &r);
   while (r<=0){
    printf("Geben Sie den Messwert für den Radius eines Kreises an : ");
   scanf("%d", &r);
   }
   float s;
   s= r*r*pi;
   printf ("Die fläche des Kreises ist:%.2f\n", s);


    return 0;
}
