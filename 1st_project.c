#include <stdio.h>

int main( void)
{
    // initialising 3 int type variables
    int date;
    int month;
    int year;

    // taking inputs for variables
    printf("enter date: ");
    scanf("%d", &date);
    printf("enter month: ");
    scanf("%d", &month);
    printf("enter year: ");
    scanf("%d", &year);

    // printing date
    printf("today is %d/%d/%d\n", date, month, year);
}
