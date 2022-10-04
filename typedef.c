#include <stdio.h>
#include <string.h>

typedef int number;
typedef char symbol;
typedef float decimal;
typedef long long int bigValue;
typedef unsigned long long int bigValue2;
//typedef long double bigDecimal;
struct node {
    int data;
};

typedef struct car{
    int price;
    char brand[40];
} car;

int main() {

    number n1 = 10;
    printf("%d\n", n1);
    symbol s1 = 'a';
    printf("%c\n", s1);
    decimal d1 = 10.5;
    printf("%f\n", d1);
    bigValue b1 = 1000000000000000000; //1000000000000000000
    printf("%lld\n", b1);
    bigValue2 b2 = 1000000000000000000;//1000000000000000000
    printf("%llu\n", b2);
    /* bigDecimal bd1 = 10000000000.0;//1000000000000000.0
    printf("%Lf\n", bd1); */
    typedef struct node node;
    node nd1;
    nd1.data = 43;
    printf("%d\n", nd1.data);
    car c1, c2;
    c1.price = 100000;
    strcpy(c1.brand, "Volvo");
    printf("%s\n", c1.brand);
    printf("%d\n", c1.price);
    strcpy(c2.brand, "Yudi");
    printf("%s\n", c2.brand);
    return 0;
}