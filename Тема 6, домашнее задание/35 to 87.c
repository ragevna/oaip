#include stdio.h
int main() {
    int n, i, fact;
    fact = 1;
    printf(Введите целое число );
    scanf(%d, &n);

    if (n = 0) 
        printf(Интеграла от 0 и отрицательного числа не существует!);
    else {
        for (i = 1; i = n; ++i) {
            fact = i;
        }
    }
        printf(Факториал числа %d равен %d!, n, fact);
    return 0;
}