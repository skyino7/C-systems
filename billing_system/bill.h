#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct items{
    char item[20];
    float price;
    int quantity;
};

struct orders{
    char customer[50];
    char date[50];
    int numOfItems;
    struct items itm[50];
};


void generateBillHeader(char name[50], char date[30]);

void generateBillBody(char item[30], int quantity, float price);

void generateBillFooter(float total);