#include <stdio.h>
#include <stdlib.h>

/* --------- Euclide étenduح --------- */
int euclide_etendu(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    }

    int x1, y1;
    int d = euclide_etendu(b, a % b, &x1, &y1);

    *x = y1;
    *y = x1 - (a / b) * y1;

    return d;
}

int main() {
    int a, b, c;
    int x0, y0, d;

    printf("Entrer a : ");
    scanf("%d", &a);

    printf("Entrer b : ");
    scanf("%d", &b);

    printf("Entrer c : ");
    scanf("%d", &c);

    int A = a, B = b;

    d = euclide_etendu(a, b, &x0, &y0);

    printf("PGCD(%d, %d) = %d\n", A, B, d);
    printf("Coefficients de Bezout : x0 = %d, y0 = %d\n", x0, y0);

    if (c % d != 0) {
        printf("Pas de solution entiere\n");
    } else {
        printf("Il existe des solutions entieres\n");

        /* Solution particulière */
        int k = c / d;
        int xp = x0 * k;
        int yp = y0 * k;

        printf("Solution particuliere : xp = %d, yp = %d\n", xp, yp);

        /* Solution générale */
        printf("Forme generale :\n");
        printf("x = %d + %d*t\n", xp, B / d);
        printf("y = %d - %d*t , t ∈ Z\n", yp, A / d);

        /* Exemples */
        for (int t = -2; t <= 2; t++) {
            int xk = xp + (B / d) * t;
            int yk = yp - (A / d) * t;
            printf("t = %d -> x = %d, y = %d\n", t, xk, yk);
        }
    }

    return 0;
}
