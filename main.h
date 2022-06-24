//
// Created by Nathael Bonnal on 24/06/2022.
//

#ifndef TEST_MAIN_H
#define TEST_MAIN_H

#endif //TEST_MAIN_H

typedef struct UE {
    char* code;
    char* intitule;
    int ects;
} UE;

typedef struct listeUE {
    UE** ue;
} listeUE;

UE creerUE (char* code, char* intitule, int ects);
int doublonUE (UE ue1, UE ue2);
_Bool existeUE (UE** listeUE, char* code, int size);

