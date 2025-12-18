#include <stdio.h>

int main() {
    int a, b, c;
    int r;
    int pgcd_ab;

    /* Lecture des données */
    printf("Entrer le premier nombre : ");
    scanf("%d", &a);

    printf("Entrer le deuxieme nombre : ");
    scanf("%d", &b);

    printf("Entrer le troisieme nombre : ");
    scanf("%d", &c);

    printf("\nCalcul du PGCD(a, b)\n");

    /* PGCD(a, b) : algorithme d'Euclide */
    while (b != 0) {
        r = a % b;
        printf("a = %d , b = %d => r = a %% b = %d\n", a, b, r);
        a = b;
        b = r;
    }

    pgcd_ab = a;
    printf("PGCD(a, b) = %d\n", pgcd_ab);

    printf("\nCalcul du PGCD(PGCD(a, b), c)\n");

    /* PGCD(PGCD(a, b), c) */
    a = pgcd_ab;
    b = c;

    while (b != 0) {
        r = a % b;
        printf("a = %d , b = %d => r = a %% b = %d\n", a, b, r);
        a = b;
        b = r;
    }

    /* Résultat final */
    printf("\nPGCD des trois nombres = %d\n", a);

    return 0;
}
