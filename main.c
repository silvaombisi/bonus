/*calculation of net bonus based on years of service
Mon Feb 11 '24*/

#include <stdio.h>

int main() {
    double salary, bonus, net_bonus;
    int years_of_service;

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    printf("Enter your years of service: ");
    scanf("%d", &years_of_service);

    if (years_of_service > 5) {
        bonus = 0.05 * salary;
    } else {
        bonus = 0;
    }

    net_bonus = bonus;

    printf("Net bonus amount: %.2lf\n", net_bonus);

    return 0;
}
