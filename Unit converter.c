
#include <stdio.h>

int main()
{
    int choice;
    float value, result;

    printf("===== UNIT CONVERTER =====\n");
    printf("1. Kilometers to Meters\n");
    printf("2. Meters to Kilometers\n");
    printf("3. Meters to Centimeters\n");
    printf("4. Centimeters to Meters\n");
    printf("5. Kilograms to Grams\n");
    printf("6. Grams to Kilograms\n");
    printf("7. Celsius to Fahrenheit\n");
    printf("8. Fahrenheit to Celsius\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value: ");
    scanf("%f", &value);

    switch (choice)
    {
        case 1:
            result = value * 1000;
            printf("%.2f km = %.2f m\n", value, result);
            break;

        case 2:
            result = value / 1000;
            printf("%.2f m = %.2f km\n", value, result);
            break;

        case 3:
            result = value * 100;
            printf("%.2f m = %.2f cm\n", value, result);
            break;

        case 4:
            result = value / 100;
            printf("%.2f cm = %.2f m\n", value, result);
            break;

        case 5:
            result = value * 1000;
            printf("%.2f kg = %.2f g\n", value, result);
            break;

        case 6:
            result = value / 1000;
            printf("%.2f g = %.2f kg\n", value, result);
            break;

        case 7:
            result = (value * 9 / 5) + 32;
            printf("%.2f C = %.2f F\n", value, result);
            break;

        case 8:
            result = (value - 32) * 5 / 9;
            printf("%.2f F = %.2f C\n", value, result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
