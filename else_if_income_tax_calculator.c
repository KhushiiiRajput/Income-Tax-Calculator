#include <stdio.h>

int main() {
    float income, tax;

    // Prompt the user to enter their income
    printf("Enter your annual income: ");
    scanf("%f", &income);

    // Initialize tax to 0
    tax = 0;

    // Calculate tax based on income
    if (income <= 250000) {
        // No tax for income up to 250,000
        tax = 0;
    } else if (income <= 500000) {
        // 5% tax for income between 250,001 and 500,000
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        // 5% tax for the first 250,000 and 10% tax for income between 500,001 and 1,000,000
        tax = (250000 * 0.05) + (income - 500000) * 0.10;
    } else {
        // 5% tax for the first 250,000, 10% tax for the next 500,000, and 15% tax for income above 1,000,000
        tax = (250000 * 0.05) + (500000 * 0.10) + (income - 1000000) * 0.15;
    }

    // Print the calculated tax
    printf("Your tax is: %.2f\n", tax);

    return 0;
}
