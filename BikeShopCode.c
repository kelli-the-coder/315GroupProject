#include <stdio.h>
#define USE_MATH_DEFINES
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h> //learned that I had to include this from geeksforgeeks.org

struct customer
{
    char custName[30]; //will hold their full name
    char paymentInfo[25]; //states customer's form of payment
    float amtOwed;
    char bikeMakeModel[50]; // might seperate this into two vars idk
    bool repairComplete;
    char partsNeeded[50];// might make this an array later
    double timeRequested; // this variable will keep track of what time this customer put in a request so they can be put in the queue accordingly

};

int main()
{
    printf("Hello denison.");
    return 0;
}
