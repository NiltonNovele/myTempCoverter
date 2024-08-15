#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\n Is the temperature in (F) OR (c)?");
    scanf("%c",&unit);

    unit == toupper(unit); //make the input uppercase

    if(unit == 'C'){
    printf("Please enter the temperature in degrees celcius.\n");
    scanf("%f",&temp);
    temp = (temp * 9 /5) + 32;
    printf("\nThe current temperature in degrees Farenheit is: %.0f",temp);
    }
    else if(unit == 'F'){
        printf("Please enter the temperature in degrees farenheit.\n");
        scanf("%f",&temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe current temperature in degrees celcius is: %.0f",temp);
    }
    else{
        printf("Please enter a valid input.");
    }

    return 0;
}