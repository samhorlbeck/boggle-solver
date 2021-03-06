#ifndef SOLVER_H
#define SOLVER_H

#include "hashset.h"

typedef struct _lnode {
    void *value;
    struct _lnode *next;
} ListNode;

void solver_start_add();
void solver_add(char c);
Hashset solver_solve();

#endif