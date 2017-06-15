//
// Created by lkq on 2017/6/14.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int exp;
    double coe;
    struct node* next;
}Polynomianl;

Polynomianl* createPolymial(Polynomianl* head, int k);
Polynomianl* plusPolynomial(Polynomianl* a, Polynomianl* b);

int solution(){
    int ka, kb;
    int cnt = 0;
    Polynomianl *a, *b, *c, *la, *lb;
    scanf("%d", &ka);
    la = createPolymial(a, kb);
}