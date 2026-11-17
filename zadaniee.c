
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <windows.h>

struct uchastok {
    int nomer;
    float ploshad;
    char pochva[50];
    int derevya;
    int teplitsa;
};

typedef struct uchastok Uchastok;

Uchastok InputUchastok();
int check(Uchastok uch);
void OutputUchastok(Uchastok uch);

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    Uchastok uch1, uch2, uch3;

    printf("=== Информация о садовых участках ===\n");

    printf("\nЗапись 1:\n");
    uch1 = InputUchastok();

    printf("\nЗапись 2:\n");
    uch2 = InputUchastok();

    printf("\nЗапись 3:\n");
    uch3 = InputUchastok();

    printf("\n=== Результаты проверки участков ===\n");

    if (check(uch1) == 1) {
        printf("\nУчасток, подходящий под условия:\n");
        OutputUchastok(uch1);
    }

    if (check(uch2) == 1) {
        printf("\nУчасток, подходящий под условия:\n");
        OutputUchastok(uch2);
    }

    if (check(uch3) == 1) {
        printf("\nУчасток, подходящий под условия:\n");
        OutputUchastok(uch3);
    }

    if (check(uch1) == 0 && check(uch2) == 0 && check(uch3) == 0) {
        printf("\nПодходящих участков нет.\n");
    }

    return 0;
}

Uchastok InputUchastok() {

    Uchastok uch;

    printf("Введите номер участка: ");
    scanf("%d", &uch.nomer);

    printf("Введите площадь (кв. м): ");
    scanf("%f", &uch.ploshad);

    printf("Введите тип почвы: ");
    scanf(" %[^\n]", uch.pochva);

    printf("Введите количество плодовых деревьев: ");
    scanf("%d", &uch.derevya);

    printf("Есть ли теплица? (1 - да, 0 - нет): ");
    scanf("%d", &uch.teplitsa);

    return uch;
}

int check(Uchastok uch) {

    if (uch.ploshad >= 600 && (uch.derevya > 5 || uch.teplitsa == 1)) {
        return 1;
    }
    else {
        return 0;
    }
}

void OutputUchastok(Uchastok uch) {

    printf("Номер: %d\n", uch.nomer);
    printf("Площадь: %.2f кв. м\n", uch.ploshad);
    printf("Почва: %s\n", uch.pochva);
    printf("Плодовые деревья: %d\n", uch.derevya);

    if (uch.teplitsa == 1) {
        printf("Теплица: имеется\n");
    }
    else {
        printf("Теплица: отсутствует\n");
    }
}
