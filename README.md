
# Домашнее задание к работе 11

## Условие задачи
<img width="763" height="271" alt="Снимок экрана 2026-11-16 124423" src="https://github.com/user-attachments/assets/acaf9368-22be-49b1-b2ba-91fba2da1f91" />


## Алгоритм и блок-схема

### Алгоритм

1. Начало программы.
2. Объявить структуру `Uchastok`, содержащую характеристики садового участка.
3. Последовательно заполнить три структурные переменные с помощью функции `InputUchastok()`.
4. Проверить каждую запись функцией `check()`, передавая ей соответствующую структуру.
5. Функция `check()` определяет, подходит ли участок под условия: площадь не менее 600 кв. м и количество плодовых деревьев больше 5 либо наличие теплицы.
6. Если проверка пройдена, вывести информацию об участке с помощью `OutputUchastok()`.
7. Если ни одна из трёх записей не прошла проверку, вывести сообщение об отсутствии подходящих участков.
8. Конец программы.

### Блок-схема
<img width="547" height="887" alt="Диаграмма без названия drawio" src="https://github.com/user-attachments/assets/bd2e4c4b-8e2b-4040-ae66-68648f46ae42" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D0%94%D0%B8%D0%B0%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B0%20%D0%B1%D0%B5%D0%B7%20%D0%BD%D0%B0%D0%B7%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F.drawio.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22TC_RHr7S6aYsA9xm-Aef%22%3E5Vpbj5s6EP41kdqHE%2FmCCXlsNpuePlSttKrO6aMLbkBLcOQ4TdJfXwN2uIUNBXeXdPPgtYcZbOabbwZ7meC7zfG9oNvwIw9YPEEgOE7wcoIQBBioP6nklEtcgHLBWkSBVioED9FPZiy1dB8FbFdRlJzHMtpWhT5PEubLiowKwQ9Vte88rs66pWvWEDz4NG5K%2F4sCGeZSD80K%2Bb8sWodmZujO8ysbapT1k%2BxCGvBDSYTvJ%2FhOcC7z3uZ4x%2BLUecYvud2q5ep5YYIlsovBrmmg77GTJ%2FO4ykR5Vg0WhzCS7GFL%2FfTKQYGrZKHcxGoEVfd7FMd3POYis8Or7KfkOyn4IytdAdkvteCJbJNr3KGjxvmaftB4r9c0WYLJfJm2CzBRk3sz01ftImvvtRETkh1Lz6Y98Z7xDZPipFTCEliE5GaHAljoabT0XVS85mMdvgZMqsNqfb5z4XnV0c6%2FDESUdEFChcs27SotGscs5mtBNy%2BFC27FJWsXSKOQto7S0p0CpqVpFXyLrCWZmuqgrM36c1i9hKtwqz40JkryrjSpWpqrFg%2FThX9Itnv5xQ%2FpTvLHN297hYbbDA3k1EIDV0MDQjI8NoILtG7Ghgj55tt%2BN6po8EPmP77Z%2ByF8m8KnZKkYqFWseiEwB00EUA0Bp0ZOG%2BzknRAYPzs%2F7WWZBhoYO1myDgQhNSAcC0AE6OapgF6MCti1kIx4JwRukQro2aiAPRtVAd88FfCLUYFAG1WhEwK3SAX8bFQg2EZVcG6ACug3XpBAOkAu3Wwzo6JjXmdbqkl3O1yz60m98%2FttGXJS4x4iFchdG2Uo4X8H97L90qqyU8p3O3XJKmvnmcQbsCMqb72IVnsmrrtzC8CzLriP9sSiDEYZA9cWBtfOKjxiId9S7XEWNM7JmqjwvfANHZtAqTs86CEXMuRrntD4vpAuBN8nAUsnBlXoWBK8S8%2Fy1PBbzP3HXLSKYqPQjmF%2BxRzdwSk54yWpWDP9APmRTBMBwWIqox%2FVJx%2FkTtTPnebM6Eb8GbREtH1%2F4n7%2BDC4kktH4sy3vqAcSp%2F%2FT6acQzI3gayZwZma8POoF5qNTefSZiUj5mAktbCJnjj%2Fq2cwc5nWHVWelf8AUQddthzq7nXIfPZUUtjxK5K4RCec5uwWH84qC4wIJ0WUoGy8Ez8FT0g8KPmYo2DGSOR3N6Ot5Is1UWGVpS7YcisIVCuk7f04FBTHd2usCxqSMaEOfgCf1VSdfQW%2B2uj3ZikYcIh1SOfBwLZV7llJ5C%2F%2BHpHLo2g7D8%2FGMDisHgqfDsKEPp47dQJy9okC8kI3wiMqG17NsjBkKa2UDj6FsON4VvoIn9Yezdd6TrXjEIdJlB1ArGgBZqhot9B%2B0AcDme5k%2FVjYIufL20tCfTa9YzIZboCm0G%2BzmKV5FtF9Iec6IahPseTTGx4yFteLkjKE4ufjayyR5St8CX3ue95lAH2WMdOer%2BdfN8GLyxwrHDCHLkPc9kvw7IGdjytA9DwBN2I4SClsZmo0hQXv1j5Zr%2Bma30KL%2Fu2xVw%2BKD61y9%2BGwd3%2F8C%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## Реализация программы

Программа написана на языке C.

```c

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

```

## Результат работы программы

```
=== Информация о садовых участках ===

Запись №1:
Введите номер участка: 1
Введите площадь (кв. м): 700
Введите тип почвы: Чернозем
Введите количество плодовых деревьев: 8
Есть ли теплица? (1 - да, 0 - нет): 0

Запись №2:
Введите номер участка: 2
Введите площадь (кв. м): 500
Введите тип почвы: Песчаная
Введите количество плодовых деревьев: 10
Есть ли теплица? (1 - да, 0 - нет): 1

Запись №3:
Введите номер участка: 3
Введите площадь (кв. м): 650
Введите тип почвы: Суглинистая
Введите количество плодовых деревьев: 3
Есть ли теплица? (1 - да, 0 - нет): 1

=== Результаты проверки участков ===

Участок, подходящий под условия:
Номер: 1
Площадь: 700.00 кв. м
Почва: Чернозем
Плодовые деревья: 8
Теплица: отсутствует

Участок, подходящий под условия:
Номер: 3
Площадь: 650.00 кв. м
Почва: Суглинистая
Плодовые деревья: 3
Теплица: имеется
```

## Информация о разработчике

```
Имя: Страхова Виктория
Группа: БИЦТ-261
Вариант: 27
```
