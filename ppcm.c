code C et algorithme pour le calcule de ppcm de deux nbr a et b : 
     pour calculer le ppcm de a et b on calcule le pgcd(a,b) puis le produit de a et b 
            ( ppcm est le quotient de a × b sur pgcd(a,b)
                ppcm(a,b) = (a × b) / PGCD

       Exemple:
Si a = 12 et b = 18 
        •        PGCD = 6
        •        PPCM = (12 × 18) / 6 = 36

Algorithme en pseudo-code :

       Algorithme PPCM
Variables
    a, b, x, y, r, pgcd, ppcm : entier

Début
    Lire a, b

    x ← a
    y ← b

    Tant que y ≠ 0 faire
        r ← x mod y
        x ← y
        y ← r
    Fin Tant que

    pgcd ← x
    ppcm ← (a × b) / pgcd

    Afficher ppcm
Fin

Programme en C :

#include <stdio.h>

int main() {
    int a, b;
    int x, y, r;
    int pgcd, ppcm;

    printf("Entrez deux nombres : ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }

    pgcd = x;
    ppcm = (a * b) / pgcd;

    printf("Le PPCM de %d et %d est : %d\n", a, b, ppcm);

    return 0;
}
