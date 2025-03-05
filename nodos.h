#ifndef __NODOS_H__
#define __NODOS_H__
#include <stdbool.h>

typedef int DATO;

typedef struct _Nodo{
    DATO dato;
    struct _Nodo* sig;
} Nodo;

Nodo* crear_nodo();
bool borra_nodo(Nodo*);
Nodo* asignar_dato(Nodo*, DATO);
DATO obtener_dato(Nodo*);
Nodo* asignar_referencia(Nodo*, Nodo*);
Nodo* obtener_ref(Nodo*);

#endif

