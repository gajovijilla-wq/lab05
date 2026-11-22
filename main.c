#include <stdio.h>
#include <math.h>

int main() {
const double a = 3;
const double b = 4;

double c = sqrt(a * a + b * b);
double P = a + b + c;

printf("Perimeter = %.2f\n", P);
printf("Hypotenuse = %.2f\n", c);
return 0;
}
