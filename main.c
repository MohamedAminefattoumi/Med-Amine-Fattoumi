#include <stdio.h>
#include <stdlib.h>

int main()
{
   const float pi =3.14;
   int r;
   printf("donner la mesure du rayon de cercle: ");
   scanf("%d", &r);
   while (r<=0){
    printf("donner la mesure du rayon de cercle: ");
   scanf("%d", &r);
   }
   float s;
   s= r*r*pi;
   printf ("l'aire du cercle est:%.2f\n", s);


    return 0;
}
