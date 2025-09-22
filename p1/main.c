#include <stdio.h>
#include <math.h>
#include <io.h>
#include <fcntl.h>


int main() {
    _setmode(_fileno(stdout), _O_U16TEXT);

    double alpha;
    double z1, z2;

    wprintf(L"Введіть значення X: ");
    scanf("%lf", &alpha);

    z1 = (pow(alpha,2) + 2 * alpha - 3 + (alpha + 1) * sqrt(pow(alpha,2) - 9))/(pow(alpha,2) - 2 * alpha - 3 + (alpha - 1) * sqrt(pow(alpha,2) - 9));
    z2 = sqrt((alpha+3)/(alpha-3));

    wprintf(L"z1 = %.10lf\n", z1);
    wprintf(L"z2 = %.10lf\n", z2);

    return 0;
}