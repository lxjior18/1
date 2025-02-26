#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int nums;

    printf("\t Деление числа на разряды \n");
    printf("\n");
    printf("Введи пятизначное число: ");
    scanf("%5d", &nums); //ограничил ввод до пятизначного числа

    int arr[5];
    int size = 0;

    while (nums > 0) { //разбивает число на цифры
        arr[size++] = nums % 10;
        nums /= 10;
    }
    for (int i = 0; i < size / 2; i++) { //перевернул число
        int mass = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = mass;
    }

    printf("\n1 цифра равна %d\n", arr[0]);
    printf("2 цифра равна %d\n", arr[1]);
    printf("3 цифра равна %d\n", arr[2]);
    printf("4 цифра равна %d\n", arr[3]);
    printf("5 цифра равна %d\n", arr[4]);

    return 0;
}