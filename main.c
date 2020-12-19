#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

//3-я аудиторка полностью
//
//1.Пользователь вводит целое число n, программа n раз выводит "Привет пользователь!\n".
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n;
//	printf("Введите число n : ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("Привет пользователь!\n");
//	}
//}
//2.Вывести числа от - 10 до 0. while
//
//void main() {
//	int a = -10;
//	while (a != 1) {
//		printf("%d\n", a);
//		a++;
//	}
//}
//3.Вывести числа от 100 до 90. do while
//
//void main() {
//	int a = 100;
//	while (a != 89) {
//		printf("%d\n", a);
//		a--;
//	}
//}
//4.Вывести чётные от - 100 до 100. for
//
//void main() {
//	int a = -100;
//	while (a != 101) {
//		if (a % 2 == 0)
//			printf("%d\n", a);
//		a++;
//	}
//}
//5.Пользователь вводит целое число n.Программа выводит строки вида :
//1
//1 2
//1 2 3
//...
//1 2 3 ... n
//
//пример : n = 5, вывод программы :
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n, j, i;
//	printf("Введите число n : ");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++) {
//		printf("\n");
//		for (j = 1; j <= i; j++) {
//			printf("%d ", j);
//		}
//	}
//}
//6.Пользователь вводит целые числа a, b.Программа выводит a в степени b.
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int a, b, i;
//	int c = 1;
//	printf("Введите число a : ");
//	scanf_s("%d", &a);
//	printf("Введите число b : ");
//	scanf_s("%d", &b);
//	for (i = 0; i < b; i++) {
//		c = c * a;
//	}
//	printf("%d", c);
//}
//7.Пользователь вводит целое число n от 1 до 1000000, программа выводит сумму цифр этого числа.
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n;
//	int sum = 0;
//	printf("Введите число n : ");
//	scanf_s("%d", &n);
//	if (0 < n < 1000000) {
//		while (n != 0) {
//			sum = sum + n % 10;
//			n=n/10 ;
//		}
//	}
//	printf("%d\n", sum);
//}
//4-я аудиторка полностью
//1.Пользователь вводит целое число n, затем вводит n вещественных чисел, программа
//выводит большее из этих чисел.
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n;
//	float num[30];
//	float max = 0.0;
//	printf("Введите число n : ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("Введите вещественное число : ");
//		scanf_s("%f", &num[i]);
//		if (num[i] > max)
//			max = num[i];
//	}
//	printf("Большее из этих чисел = %.3f", max);
//}
//2.Пользователь вводит целые числа a, b, c, подразумевая, что c == a в степени b, программа проверяет правильность
//вычисления возведения числа а в степень b и выводит "true" или "false".
//void main() {
//	setlocale(LC_ALL, "RU");
//	int a, b, c;
//	int res = 1;
//	printf("Введите число a : ");
//	scanf_s("%d", &a);
//	printf("Введите число b : ");
//	scanf_s("%d", &b);
//	printf("Введите число c : ");
//	scanf_s("%d", &c);
//	for (int i = 0; i < b; i++) {
//		res = res * a;
//	}
//	if (res == c)
//		printf("True");
//	else
//		printf("False");
//}
//3.Вывести таблицу ASCII(код символа - сам символ) в консоль.
// Cимволы с кодами от 0 до 255.
//void main() {
//    setlocale(LC_ALL, "RU");
//    int i;
//    for (i = 0; i < 256; i++) {
//        printf(" %d - %c", i, i);
//        if (i % 10 == 0) printf("\n");
//    }
//    printf("\n");
//
//}
//4.Пользователь вводит целое число n.Программа выводит строки вида :
//1
//2 1
//1 2 3
//4 3 2 1
//1 2 3 4 5
//6 5 4 3 2 1
//...
//до n
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n, j, i;
//	printf("Введите число n : ");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++) {
//		printf("\n");
//		if (i % 2 == 0) {
//			for (j = i; j >= 1; j--) {
//				printf("%d ", j);
//			}
//		}
//		else {
//			for (j = 1; j <= i; j++) {
//				printf("%d ", j);
//			}
//		}
//	}
//}
//5-ая аудиторка полностью
//1.Пользователь вводит вещественные числа a, b.
//Пользователь вводит символ операции(+, -, *, / , %, ^ -возведение в степень).
//Программа выполняет a операция b и выводит результат.
//void main() {
//	setlocale(LC_ALL, "RU");
//	float a, b;
//	int a1, b1, c1;
//	float c = 1;
//	char znak;
//	printf("Введите какую операцию выполнить : ");
//	scanf_s("%c", &znak, 1);
//	if (znak == '%') {
//		printf("Введите число a : ");
//		scanf_s("%d", &a1);
//		printf("Введите число b : ");
//		scanf_s("%d", &b1);
//		c1 = a1 % b1;
//		printf("%d\n", c1);
//		system("pause");
//	}
//	if ((znak == '+') || (znak == '-') || (znak == '*') || (znak == '/') || (znak == '^')) {
//		printf("Введите число a : ");
//		scanf_s("%f", &a);
//		printf("Введите число b : ");
//		scanf_s("%f", &b);
//		if (znak == '+')
//			c = a + b;
//		if (znak == '-')
//			c = a - b;
//		if (znak == '*')
//			c = a * b;
//		if (znak == '/')
//			c = a / b;
//		if (znak == '^') {
//			for (int i = 0; i < b; i++) {
//				c = c * a;
//			}
//		}
//		printf("%g\n", c);
//	}
//	else
//		printf("\nВыбранной операциии не существует");
//}
//2.Пользователь вводит два целых числа a, b.Программа выводит частное от деления a / b,
//затем пользователь вводит новые числа, и так бесконечно, работа программы прекращается,
//когда будут введены два нуля(a == 0 && b == 0).
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int a, b,c;
//	while (1) {
//		printf("\nВведите число a : ");
//		scanf_s("%d", &a);
//		printf("Введите число b : ");
//		scanf_s("%d", &b);
//		if (a != 0 && b != 0) {
//			c = a / b;
//			printf("\nОтвет : %d", c);
//		}
//		if (a == 0 && b == 0)
//			exit(0);
//	}
//}
//3.Задать массив целых чисел в коде.Вывести положительные числа из массива в консоль.
//void main() {
//	setlocale(LC_ALL, "RU");
//
//	int mass[10] = { 0,12,-24,23,155,1111,7,8,-9,-12452 };
//	for (int i = 0; i < 10; i++) {
//		if (mass[i] > 0)
//			printf("%d ", mass[i]);
//	}
//}
//4.Задать массив вещественных чисел в коде.Вывести наибольшее по модулю число в консоль.
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int max = 0;
//	int mass[10] = { 0,12,-24,23,155,1111,7,8,-9,-12452 };
//	for (int i = 0; i < 10; i++) {
//		if (abs(mass[i]) > 0)
//			max = mass[i];
//	}
//	printf("%d ", abs(max));
//}
//5.Пользователь вводит 10 вещественных чисел в консоль, программа сохраняет их в массив.
//Программа выводит среднее арифметическое введённых чисел.
//void main() {
//	setlocale(LC_ALL, "RU");
//	float mass[10];
//	float sum = 0;
//	for (int i = 0; i < 10; i++) {
//		scanf_s("%f", &mass[i]);
//	}
//	for (int i = 0; i < 10; i++) {
//		sum = sum + mass[i];
//	}
//	sum = sum / 10;
//	printf("Среднее арифметическое введённых чисел : %g", sum);
//}
//6-ая аудиторка полностью
//1.Считать из файла input.txt 10 целых чисел в массив, вывести числа в обратном порядке в консоль.
//void main() {
//	setlocale(LC_ALL, "RU");
//	int mass[10];
//	FILE* input;
//	fopen_s(&input, "input.txt", "r");
//	if (input != NULL) {
//		for (int i = 0; i < 10; i++) {
//			fscanf_s(input, "%d", &mass[i]);
//		}
//		for (int i = 9; i >= 0; i--) {
//			printf("%d ", mass[i]);
//		}
//		fclose(input);
//	}
//}
//2.Считать из файла input.txt 5 вещественных чисел в массив, записать наибольшее из чисел в файл output.txt.
//void main() {
//	setlocale(LC_ALL, "RU");
//	float mass[5];
//	float max = 0;
//	FILE* input;
//	FILE* output;
//	fopen_s(&input, "input.txt", "r");
//	if (input != NULL) {
//		for (int i = 0; i < 5; i++) {
//			fscanf_s(input, "%f", &mass[i]);
//			if (mass[i] > max)
//				max = mass[i];
//		}
//		fclose(input);
//		fopen_s(&output, "output.txt", "w");
//		if (output != NULL) {
//			fprintf_s(output, "Наибольшее из чисел = %g", max);
//			fclose(output);
//		}
//	}
//}
//3.Программа открывает файл input.txt, считывает содержимое, записывает всё в файл output.txt.

//void main() {
//	setlocale(LC_ALL, "RU");
//	char mass[128];
//	int i;
//	FILE* input;
//	FILE* output;
//	fopen_s(&input, "input.txt", "r");
//	fopen_s(&output, "output.txt", "w");
//	if (input != NULL && output != NULL) {
//		for (i = 0; i < 128; i++) {
//			fscanf_s(input, "%c", &mass[i]);
//			if (mass[i] != 'М') {
//				fprintf_s(output, "%c", mass[i]);
//			}
//		}
//		fclose(input);
//		fclose(output);
//	}
//}
//4.Открыть файл output.txt на дозапись, записать в конец файла строку "\n new string".
//Задание номер 4
//void main() {
//	setlocale(LC_ALL, "RUS");
//	FILE* output;
//	fopen_s(&output, "output.txt", "a");{
//			fprintf(output,"\n new string");
//	}
//	fclose(output);
//}
//5.Напишите программу, которая переставляет соседние элементы массива(1 - й элемент поменять с 2 - м, 3 - й с 4 - м и т.д.).
//Если элементов нечетное число, то последний элемент остается на своем месте.Пример:
//Исходный массив : 4 5 3 4 2 3
//Результат перестановки : 5 4 4 3 3 2
//Задание 5
//void main() {
//	setlocale(LC_ALL,"RUS");
//	int n;
//	int a;
//	scanf_s("%d", &n);
//	int i;
//	int mass[10];
//	for (i = 0; i < n; i++) {
//		scanf_s("%d", &mass[i]);
//	}
//	for (i = 1; i < n; i = i + 2) {
//		a = mass[i];
//		mass[i] = mass[i - 1];
//		mass[i - 1] = a;
//	}
//	for (i = 0; i < n; i++) {
//		printf("%d ", mass[i]);
//	}
//	system("pause");
//}

//7-ая аудиторка полностью 

//1.Задать в коде массив целых чисел
//void main() {
//	int mass[10] = { -7,5,0,3,4,5,2,11,55,32 };
//	int max = 0;
//	int min = 10000;
//	FILE* output;
//	fopen_s(&output, "output.txt", "w");
//	for (int i = 0; i < 10; i++) {
//		if (max < mass[i])
//			max = mass[i];
//		if (min > mass[i])
//			min = mass[i];
//	}
//	printf("Max = %d Min = %d", max, min);
//	fprintf_s(output, "Max = %d Min = %d", max,min);
//}
//Вывести максимальное, минимальное из чисел в файл output.txt
//2.Задать в коде массив символов, вывести символы в обратном порядке
//char name[] = { 'I','v','a','n',0 }; // записать ваше имя
//вывести имя в обратную сторону // символы в обратном порядке Ivan -> navI
//void main() {
//	char name[5] = { 'A','n','t','o','n' };
//	for (int i = 4; i >= 0; i--) {
//		printf("%c", name[i]);
//	}
//}
//3.В файле input.txt записано целое число n, сгенерируйте случайным образом
//n целых чисел и выведите их в консоль.
//
//// пример генерации рандомного числа в отрезке от 0 до 99

//int main() {
//	setlocale(LC_ALL, "RU");
//	FILE* input;
//	int n;
//	fopen_s(&input, "input.txt", "r");
//	fscanf_s(input,"%d", &n);
//	srand((unsigned int)time(0));
//	for (int i = 0; i < n; i++) {
//		int value = rand() % 1000;
//		printf("Рандомное число = %d\n", value);
//	}
//	system("pause");
//}
//4.Сгенерировать случайным образом элементы массива
//int main() {
//	setlocale(LC_ALL, "RU");
//	int mass[10];
//	int k = 0;
//	srand((unsigned int)time(0));
//	for (int i = 0; i < 10; i++) {
//		int value = rand() % 1000;
//		mass[i] = value;
//
//	}
//	printf("Четные элементы:\n");
//	for (int i = 0; i < 10;i++) {
//		if (mass[i] % 2 == 0) {
//			printf("%d\n", mass[i]);
//			k++;
//		}
//	}
//	printf("Число четных элементов = %d", k);
//	system("pause");
//}
//вывести чётные элементы, вывести число чётных элементов
//
//5.Открыть файл output.txt, записать в начало файла число 99\n, сдвинув остальные строки вниз.
//int main() {
//	setlocale(LC_ALL, "RU");
//	FILE* output;
//	int k = 0;
//	char mass[255];
//		fopen_s(&output, "output.txt", "r+");
//		if (output != NULL) {
//		for (int i = 0; i < 255; i++) {
//			fscanf_s(output, "%c", &mass[i]);
//			if (mass[i]!='М') {
//				k++;
//			}
//		}
//		fseek(output, 0, SEEK_SET);
//		fprintf_s(output, "99\n");
//		for (int i = 0; i < k; i++) {
//			fprintf_s(output, "%c", mass[i]);
//		}
//		fclose(output);
//	}
//}