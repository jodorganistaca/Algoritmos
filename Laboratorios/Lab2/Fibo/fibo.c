#include<stdio.h>

short fiboS(short n){
    short a = 0, b = 1, f = 0,i;
    if(n<2)return n;
    for(i = 1; i<n; i++){
        f = a+b;
        a = b;
        b = f;
    }
    return f;
}

int fiboI(int n){
    int a = 0, b = 1, f = 0,i;
    if(n<2)return n;
    for(i = 1; i<n; i++){
        f = a+b;
        a = b;
        b = f;
    }
    return f;
}

float fiboF(float n){
    float a = 0, b = 1, f = 0,i;
    if(n<2)return n;
    for(i = 1; i<n; i++){
        f = a+b;
        a = b;
        b = f;
    }
    return f;
}

long fiboL(long n){
    long a = 0, b = 1, f = 0, i;
    if(n<2)return n;
    for(i = 1; i<n; i++){
        f = a+b;
        a = b;
        b = f;
    }
    return f;
}

long long fiboLl(long long n){
    long long a = 0, b = 1, f = 0,i;
    if(n<2)return n;
    for(i = 1; i<n; i++){
        f = a+b;
        a = b;
        b = f;
    }
    return f;
}

double fiboD(double n){
    double a = 0, b = 1, f = 0,i;
    if(n<2)return n;
    for(i = 1; i<n; i++){
        f = a+b;
        a = b;
        b = f;
    }
    return f;
}

long double fiboLD(long double n){
    long double a = 0, b = 1, f = 0,i;
    if(n<2)return n;
    for(i = 1; i<n; i++){
        f = a+b;
        a = b;
        b = f;
    }
    return f;
}

int main(){
    printf("n: %i, fiboShort: %i\n", 24, fiboS(24));
    printf("n: %i, fiboInt: %i\n", 47, fiboI(47));
    printf("n: %i, fibo: %f\n", 37, fiboF((float)37));
    printf("n: %d, fibo: %d\n", 47, fiboL(47));
    printf("n: %d, fibo: %d\n", 47, fiboLl(47));
    printf("n: %d, fibo: %i\n", 50, fiboD(46));
    printf("n: %L, fibo: %L\n", 50, fiboLD(46));
}
