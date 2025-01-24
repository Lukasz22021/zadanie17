#include <stdio.h>
#include <math.h>

/*float cuboid_volume(float a, float b, float h) {
return(a*b*h);
       }


}
int main () {
    float a, b, h, ;

    printf("Podaj dlugosc prostopadloscianu: ");
    scanf("%f", &a);

  //  printf("Podaj szerokosc prostopadloscianu: ");
  //  scanf("%f", &b);

  //  printf("Podaj wysokosc prostopadloscianu: ");
  //  scanf("%f", &h);

   // printf("\n Objetosc prostopadloscianu: %f \n", cuboid_volume(a, b, h));
}
*/





float sphere_volume(float r){
    return ((4.0/3.0) * M_PI * (r*r*r));
}

int main() {
    float r;


    printf("Podaj promien kuli: ");
    scanf("%f", &r);



    printf("Objetosc kuli wynosi: %.2f\n", sphere_volume(r));

    return 0;
}













