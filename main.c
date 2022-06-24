#include <stdio.h>
#include <stdbool.h>

#include "main.h"

int main(int argc, char** argv) {
    UE ue1 = creerUE("HAI103", "MAth", 5);
    UE ue2 = creerUE("HAI103", "Algo", 5);

    int verifDoublon = doublonUE(ue1, ue2);
    if (verifDoublon) {
        printf("Ce sont des doublons\n");
    } else {
        printf("Ils ne sont pas doublons\n");
    }

    UE *listeUE[] = {&ue1, &ue2};

    _Bool existUe = existeUE(listeUE, "HAI103", 2);
    printf("%d\n", existUe);

    for (int i = 1; i < argc; ++i) {
        printf("%s\n", argv[i]);
    }
    return 0;
}

/**
 *
 * @param code
 * @param intitule
 * @param ects
 * @return
 */
UE creerUE (char* code, char* intitule, int ects) {
    UE ue = {code, intitule, ects};
    return ue;
}

/**
 *
 * @param ue1
 * @param ue2
 * @return
 */
int doublonUE (UE ue1, UE ue2) {
    if (ue1.code == ue2.code) return 1;
    return 0;
}

/**
 *
 * @param listeUE -> Tableau de UE
 * @param code -> Identifiant d'un UE
 * @return Bool
 */
_Bool existeUE (UE **listeUE, char* code, int size) {
    for (int i = 0; i < size ; ++i) {
        if (listeUE[i]->code == code) return true;
    }
    return false;
}