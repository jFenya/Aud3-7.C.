#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

//3-� ��������� ���������
//
//1.������������ ������ ����� ����� n, ��������� n ��� ������� "������ ������������!\n".
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n;
//	printf("������� ����� n : ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("������ ������������!\n");
//	}
//}
//2.������� ����� �� - 10 �� 0. while
//
//void main() {
//	int a = -10;
//	while (a != 1) {
//		printf("%d\n", a);
//		a++;
//	}
//}
//3.������� ����� �� 100 �� 90. do while
//
//void main() {
//	int a = 100;
//	while (a != 89) {
//		printf("%d\n", a);
//		a--;
//	}
//}
//4.������� ������ �� - 100 �� 100. for
//
//void main() {
//	int a = -100;
//	while (a != 101) {
//		if (a % 2 == 0)
//			printf("%d\n", a);
//		a++;
//	}
//}
//5.������������ ������ ����� ����� n.��������� ������� ������ ���� :
//1
//1 2
//1 2 3
//...
//1 2 3 ... n
//
//������ : n = 5, ����� ��������� :
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n, j, i;
//	printf("������� ����� n : ");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++) {
//		printf("\n");
//		for (j = 1; j <= i; j++) {
//			printf("%d ", j);
//		}
//	}
//}
//6.������������ ������ ����� ����� a, b.��������� ������� a � ������� b.
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int a, b, i;
//	int c = 1;
//	printf("������� ����� a : ");
//	scanf_s("%d", &a);
//	printf("������� ����� b : ");
//	scanf_s("%d", &b);
//	for (i = 0; i < b; i++) {
//		c = c * a;
//	}
//	printf("%d", c);
//}
//7.������������ ������ ����� ����� n �� 1 �� 1000000, ��������� ������� ����� ���� ����� �����.
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n;
//	int sum = 0;
//	printf("������� ����� n : ");
//	scanf_s("%d", &n);
//	if (0 < n < 1000000) {
//		while (n != 0) {
//			sum = sum + n % 10;
//			n=n/10 ;
//		}
//	}
//	printf("%d\n", sum);
//}
//4-� ��������� ���������
//1.������������ ������ ����� ����� n, ����� ������ n ������������ �����, ���������
//������� ������� �� ���� �����.
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n;
//	float num[30];
//	float max = 0.0;
//	printf("������� ����� n : ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("������� ������������ ����� : ");
//		scanf_s("%f", &num[i]);
//		if (num[i] > max)
//			max = num[i];
//	}
//	printf("������� �� ���� ����� = %.3f", max);
//}
//2.������������ ������ ����� ����� a, b, c, ������������, ��� c == a � ������� b, ��������� ��������� ������������
//���������� ���������� ����� � � ������� b � ������� "true" ��� "false".
//void main() {
//	setlocale(LC_ALL, "RU");
//	int a, b, c;
//	int res = 1;
//	printf("������� ����� a : ");
//	scanf_s("%d", &a);
//	printf("������� ����� b : ");
//	scanf_s("%d", &b);
//	printf("������� ����� c : ");
//	scanf_s("%d", &c);
//	for (int i = 0; i < b; i++) {
//		res = res * a;
//	}
//	if (res == c)
//		printf("True");
//	else
//		printf("False");
//}
//3.������� ������� ASCII(��� ������� - ��� ������) � �������.
// C������ � ������ �� 0 �� 255.
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
//4.������������ ������ ����� ����� n.��������� ������� ������ ���� :
//1
//2 1
//1 2 3
//4 3 2 1
//1 2 3 4 5
//6 5 4 3 2 1
//...
//�� n
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n, j, i;
//	printf("������� ����� n : ");
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
//5-�� ��������� ���������
//1.������������ ������ ������������ ����� a, b.
//������������ ������ ������ ��������(+, -, *, / , %, ^ -���������� � �������).
//��������� ��������� a �������� b � ������� ���������.
//void main() {
//	setlocale(LC_ALL, "RU");
//	float a, b;
//	int a1, b1, c1;
//	float c = 1;
//	char znak;
//	printf("������� ����� �������� ��������� : ");
//	scanf_s("%c", &znak, 1);
//	if (znak == '%') {
//		printf("������� ����� a : ");
//		scanf_s("%d", &a1);
//		printf("������� ����� b : ");
//		scanf_s("%d", &b1);
//		c1 = a1 % b1;
//		printf("%d\n", c1);
//		system("pause");
//	}
//	if ((znak == '+') || (znak == '-') || (znak == '*') || (znak == '/') || (znak == '^')) {
//		printf("������� ����� a : ");
//		scanf_s("%f", &a);
//		printf("������� ����� b : ");
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
//		printf("\n��������� ��������� �� ����������");
//}
//2.������������ ������ ��� ����� ����� a, b.��������� ������� ������� �� ������� a / b,
//����� ������������ ������ ����� �����, � ��� ����������, ������ ��������� ������������,
//����� ����� ������� ��� ����(a == 0 && b == 0).
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int a, b,c;
//	while (1) {
//		printf("\n������� ����� a : ");
//		scanf_s("%d", &a);
//		printf("������� ����� b : ");
//		scanf_s("%d", &b);
//		if (a != 0 && b != 0) {
//			c = a / b;
//			printf("\n����� : %d", c);
//		}
//		if (a == 0 && b == 0)
//			exit(0);
//	}
//}
//3.������ ������ ����� ����� � ����.������� ������������� ����� �� ������� � �������.
//void main() {
//	setlocale(LC_ALL, "RU");
//
//	int mass[10] = { 0,12,-24,23,155,1111,7,8,-9,-12452 };
//	for (int i = 0; i < 10; i++) {
//		if (mass[i] > 0)
//			printf("%d ", mass[i]);
//	}
//}
//4.������ ������ ������������ ����� � ����.������� ���������� �� ������ ����� � �������.
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
//5.������������ ������ 10 ������������ ����� � �������, ��������� ��������� �� � ������.
//��������� ������� ������� �������������� �������� �����.
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
//	printf("������� �������������� �������� ����� : %g", sum);
//}
//6-�� ��������� ���������
//1.������� �� ����� input.txt 10 ����� ����� � ������, ������� ����� � �������� ������� � �������.
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
//2.������� �� ����� input.txt 5 ������������ ����� � ������, �������� ���������� �� ����� � ���� output.txt.
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
//			fprintf_s(output, "���������� �� ����� = %g", max);
//			fclose(output);
//		}
//	}
//}
//3.��������� ��������� ���� input.txt, ��������� ����������, ���������� �� � ���� output.txt.

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
//			if (mass[i] != '�') {
//				fprintf_s(output, "%c", mass[i]);
//			}
//		}
//		fclose(input);
//		fclose(output);
//	}
//}
//4.������� ���� output.txt �� ��������, �������� � ����� ����� ������ "\n new string".
//������� ����� 4
//void main() {
//	setlocale(LC_ALL, "RUS");
//	FILE* output;
//	fopen_s(&output, "output.txt", "a");{
//			fprintf(output,"\n new string");
//	}
//	fclose(output);
//}
//5.�������� ���������, ������� ������������ �������� �������� �������(1 - � ������� �������� � 2 - �, 3 - � � 4 - � � �.�.).
//���� ��������� �������� �����, �� ��������� ������� �������� �� ����� �����.������:
//�������� ������ : 4 5 3 4 2 3
//��������� ������������ : 5 4 4 3 3 2
//������� 5
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

//7-�� ��������� ��������� 

//1.������ � ���� ������ ����� �����
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
//������� ������������, ����������� �� ����� � ���� output.txt
//2.������ � ���� ������ ��������, ������� ������� � �������� �������
//char name[] = { 'I','v','a','n',0 }; // �������� ���� ���
//������� ��� � �������� ������� // ������� � �������� ������� Ivan -> navI
//void main() {
//	char name[5] = { 'A','n','t','o','n' };
//	for (int i = 4; i >= 0; i--) {
//		printf("%c", name[i]);
//	}
//}
//3.� ����� input.txt �������� ����� ����� n, ������������ ��������� �������
//n ����� ����� � �������� �� � �������.
//
//// ������ ��������� ���������� ����� � ������� �� 0 �� 99

//int main() {
//	setlocale(LC_ALL, "RU");
//	FILE* input;
//	int n;
//	fopen_s(&input, "input.txt", "r");
//	fscanf_s(input,"%d", &n);
//	srand((unsigned int)time(0));
//	for (int i = 0; i < n; i++) {
//		int value = rand() % 1000;
//		printf("��������� ����� = %d\n", value);
//	}
//	system("pause");
//}
//4.������������� ��������� ������� �������� �������
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
//	printf("������ ��������:\n");
//	for (int i = 0; i < 10;i++) {
//		if (mass[i] % 2 == 0) {
//			printf("%d\n", mass[i]);
//			k++;
//		}
//	}
//	printf("����� ������ ��������� = %d", k);
//	system("pause");
//}
//������� ������ ��������, ������� ����� ������ ���������
//
//5.������� ���� output.txt, �������� � ������ ����� ����� 99\n, ������� ��������� ������ ����.
//int main() {
//	setlocale(LC_ALL, "RU");
//	FILE* output;
//	int k = 0;
//	char mass[255];
//		fopen_s(&output, "output.txt", "r+");
//		if (output != NULL) {
//		for (int i = 0; i < 255; i++) {
//			fscanf_s(output, "%c", &mass[i]);
//			if (mass[i]!='�') {
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