#include <stdio.h>
int main() {
    float principal, rate, interest, balance;
    int years, i;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Number of Years: ");
    scanf("%d", &years);

    balance = principal;

    for(i = 1; i <= years; i++) {
        interest = (balance * rate) / 100;
        balance = balance + interest;
    }
    printf("Final Balance After %d Years = %.2f\n", years, balance);
    return 0;
}
