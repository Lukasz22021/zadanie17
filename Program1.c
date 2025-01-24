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



#include <stdio.h>
#include <math.h>



int main() {
    float R, V;


    printf("Podaj promien kuli: ");
    scanf("%f", &R);

    V = (4.0/3.0) * 3.14 * pow(R, 3);


    printf("Objetosc kuli o promieniu %.2f wynosi: %.2f\n", R, V);

    return 0;
}





