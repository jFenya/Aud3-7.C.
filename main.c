#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

//3-я аудиторная
//
//1.Ïîëüçîâàòåëü ââîäèò öåëîå ÷èñëî n, ïðîãðàììà n ðàç âûâîäèò "Ïðèâåò ïîëüçîâàòåëü!\n".
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n;
//	printf("Ââåäèòå ÷èñëî n : ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("Ïðèâåò ïîëüçîâàòåëü!\n");
//	}
//}
//2.Âûâåñòè ÷èñëà îò - 10 äî 0. while
//
//void main() {
//	int a = -10;
//	while (a != 1) {
//		printf("%d\n", a);
//		a++;
//	}
//}
//3.Âûâåñòè ÷èñëà îò 100 äî 90. do while
//
//void main() {
//	int a = 100;
//	while (a != 89) {
//		printf("%d\n", a);
//		a--;
//	}
//}
//4.Âûâåñòè ÷¸òíûå îò - 100 äî 100. for
//
//void main() {
//	int a = -100;
//	while (a != 101) {
//		if (a % 2 == 0)
//			printf("%d\n", a);
//		a++;
//	}
//}
//5.Ïîëüçîâàòåëü ââîäèò öåëîå ÷èñëî n.Ïðîãðàììà âûâîäèò ñòðîêè âèäà :
//1
//1 2
//1 2 3
//...
//1 2 3 ... n
//
//ïðèìåð : n = 5, âûâîä ïðîãðàììû :
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n, j, i;
//	printf("Ââåäèòå ÷èñëî n : ");
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++) {
//		printf("\n");
//		for (j = 1; j <= i; j++) {
//			printf("%d ", j);
//		}
//	}
//}
//6.Ïîëüçîâàòåëü ââîäèò öåëûå ÷èñëà a, b.Ïðîãðàììà âûâîäèò a â ñòåïåíè b.
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int a, b, i;
//	int c = 1;
//	printf("Ââåäèòå ÷èñëî a : ");
//	scanf_s("%d", &a);
//	printf("Ââåäèòå ÷èñëî b : ");
//	scanf_s("%d", &b);
//	for (i = 0; i < b; i++) {
//		c = c * a;
//	}
//	printf("%d", c);
//}
//7.Ïîëüçîâàòåëü ââîäèò öåëîå ÷èñëî n îò 1 äî 1000000, ïðîãðàììà âûâîäèò ñóììó öèôð ýòîãî ÷èñëà.
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n;
//	int sum = 0;
//	printf("Ââåäèòå ÷èñëî n : ");
//	scanf_s("%d", &n);
//	if (0 < n < 1000000) {
//		while (n != 0) {
//			sum = sum + n % 10;
//			n=n/10 ;
//		}
//	}
//	printf("%d\n", sum);
//}
//4-ая аудиторная
//1.Ïîëüçîâàòåëü ââîäèò öåëîå ÷èñëî n, çàòåì ââîäèò n âåùåñòâåííûõ ÷èñåë, ïðîãðàììà
//âûâîäèò áîëüøåå èç ýòèõ ÷èñåë.
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n;
//	float num[30];
//	float max = 0.0;
//	printf("Ââåäèòå ÷èñëî n : ");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("Ââåäèòå âåùåñòâåííîå ÷èñëî : ");
//		scanf_s("%f", &num[i]);
//		if (num[i] > max)
//			max = num[i];
//	}
//	printf("Áîëüøåå èç ýòèõ ÷èñåë = %.3f", max);
//}
//2.Ïîëüçîâàòåëü ââîäèò öåëûå ÷èñëà a, b, c, ïîäðàçóìåâàÿ, ÷òî c == a â ñòåïåíè b, ïðîãðàììà ïðîâåðÿåò ïðàâèëüíîñòü
//âû÷èñëåíèÿ âîçâåäåíèÿ ÷èñëà à â ñòåïåíü b è âûâîäèò "true" èëè "false".
//void main() {
//	setlocale(LC_ALL, "RU");
//	int a, b, c;
//	int res = 1;
//	printf("Ââåäèòå ÷èñëî a : ");
//	scanf_s("%d", &a);
//	printf("Ââåäèòå ÷èñëî b : ");
//	scanf_s("%d", &b);
//	printf("Ââåäèòå ÷èñëî c : ");
//	scanf_s("%d", &c);
//	for (int i = 0; i < b; i++) {
//		res = res * a;
//	}
//	if (res == c)
//		printf("True");
//	else
//		printf("False");
//}
//3.Âûâåñòè òàáëèöó ASCII(êîä ñèìâîëà - ñàì ñèìâîë) â êîíñîëü.
// Cèìâîëû ñ êîäàìè îò 0 äî 255.
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
//4.Ïîëüçîâàòåëü ââîäèò öåëîå ÷èñëî n.Ïðîãðàììà âûâîäèò ñòðîêè âèäà :
//1
//2 1
//1 2 3
//4 3 2 1
//1 2 3 4 5
//6 5 4 3 2 1
//...
//äî n
//void main() {
//	setlocale(LC_ALL, "RU");
//	int n, j, i;
//	printf("Ââåäèòå ÷èñëî n : ");
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
//5-ая аудиторная
//1.Ïîëüçîâàòåëü ââîäèò âåùåñòâåííûå ÷èñëà a, b.
//Ïîëüçîâàòåëü ââîäèò ñèìâîë îïåðàöèè(+, -, *, / , %, ^ -âîçâåäåíèå â ñòåïåíü).
//Ïðîãðàììà âûïîëíÿåò a îïåðàöèÿ b è âûâîäèò ðåçóëüòàò.
//void main() {
//	setlocale(LC_ALL, "RU");
//	float a, b;
//	int a1, b1, c1;
//	float c = 1;
//	char znak;
//	printf("Ââåäèòå êàêóþ îïåðàöèþ âûïîëíèòü : ");
//	scanf_s("%c", &znak, 1);
//	if (znak == '%') {
//		printf("Ââåäèòå ÷èñëî a : ");
//		scanf_s("%d", &a1);
//		printf("Ââåäèòå ÷èñëî b : ");
//		scanf_s("%d", &b1);
//		c1 = a1 % b1;
//		printf("%d\n", c1);
//		system("pause");
//	}
//	if ((znak == '+') || (znak == '-') || (znak == '*') || (znak == '/') || (znak == '^')) {
//		printf("Ââåäèòå ÷èñëî a : ");
//		scanf_s("%f", &a);
//		printf("Ââåäèòå ÷èñëî b : ");
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
//		printf("\nÂûáðàííîé îïåðàöèèè íå ñóùåñòâóåò");
//}
//2.Ïîëüçîâàòåëü ââîäèò äâà öåëûõ ÷èñëà a, b.Ïðîãðàììà âûâîäèò ÷àñòíîå îò äåëåíèÿ a / b,
//çàòåì ïîëüçîâàòåëü ââîäèò íîâûå ÷èñëà, è òàê áåñêîíå÷íî, ðàáîòà ïðîãðàììû ïðåêðàùàåòñÿ,
//êîãäà áóäóò ââåäåíû äâà íóëÿ(a == 0 && b == 0).
//
//void main() {
//	setlocale(LC_ALL, "RU");
//	int a, b,c;
//	while (1) {
//		printf("\nÂâåäèòå ÷èñëî a : ");
//		scanf_s("%d", &a);
//		printf("Ââåäèòå ÷èñëî b : ");
//		scanf_s("%d", &b);
//		if (a != 0 && b != 0) {
//			c = a / b;
//			printf("\nÎòâåò : %d", c);
//		}
//		if (a == 0 && b == 0)
//			exit(0);
//	}
//}
//3.Çàäàòü ìàññèâ öåëûõ ÷èñåë â êîäå.Âûâåñòè ïîëîæèòåëüíûå ÷èñëà èç ìàññèâà â êîíñîëü.
//void main() {
//	setlocale(LC_ALL, "RU");
//
//	int mass[10] = { 0,12,-24,23,155,1111,7,8,-9,-12452 };
//	for (int i = 0; i < 10; i++) {
//		if (mass[i] > 0)
//			printf("%d ", mass[i]);
//	}
//}
//4.Çàäàòü ìàññèâ âåùåñòâåííûõ ÷èñåë â êîäå.Âûâåñòè íàèáîëüøåå ïî ìîäóëþ ÷èñëî â êîíñîëü.
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
//5.Ïîëüçîâàòåëü ââîäèò 10 âåùåñòâåííûõ ÷èñåë â êîíñîëü, ïðîãðàììà ñîõðàíÿåò èõ â ìàññèâ.
//Ïðîãðàììà âûâîäèò ñðåäíåå àðèôìåòè÷åñêîå ââåä¸ííûõ ÷èñåë.
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
//	printf("Ñðåäíåå àðèôìåòè÷åñêîå ââåä¸ííûõ ÷èñåë : %g", sum);
//}
//6-ая аудитория 
//1.Ñ÷èòàòü èç ôàéëà input.txt 10 öåëûõ ÷èñåë â ìàññèâ, âûâåñòè ÷èñëà â îáðàòíîì ïîðÿäêå â êîíñîëü.
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
//2.Ñ÷èòàòü èç ôàéëà input.txt 5 âåùåñòâåííûõ ÷èñåë â ìàññèâ, çàïèñàòü íàèáîëüøåå èç ÷èñåë â ôàéë output.txt.
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
//			fprintf_s(output, "Íàèáîëüøåå èç ÷èñåë = %g", max);
//			fclose(output);
//		}
//	}
//}
//3.Ïðîãðàììà îòêðûâàåò ôàéë input.txt, ñ÷èòûâàåò ñîäåðæèìîå, çàïèñûâàåò âñ¸ â ôàéë output.txt.

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
//			if (mass[i] != 'Ì') {
//				fprintf_s(output, "%c", mass[i]);
//			}
//		}
//		fclose(input);
//		fclose(output);
//	}
//}
//4.Îòêðûòü ôàéë output.txt íà äîçàïèñü, çàïèñàòü â êîíåö ôàéëà ñòðîêó "\n new string".
//Çàäàíèå íîìåð 4
//void main() {
//	setlocale(LC_ALL, "RUS");
//	FILE* output;
//	fopen_s(&output, "output.txt", "a");{
//			fprintf(output,"\n new string");
//	}
//	fclose(output);
//}
//5.Íàïèøèòå ïðîãðàììó, êîòîðàÿ ïåðåñòàâëÿåò ñîñåäíèå ýëåìåíòû ìàññèâà(1 - é ýëåìåíò ïîìåíÿòü ñ 2 - ì, 3 - é ñ 4 - ì è ò.ä.).
//Åñëè ýëåìåíòîâ íå÷åòíîå ÷èñëî, òî ïîñëåäíèé ýëåìåíò îñòàåòñÿ íà ñâîåì ìåñòå.Ïðèìåð:
//Èñõîäíûé ìàññèâ : 4 5 3 4 2 3
//Ðåçóëüòàò ïåðåñòàíîâêè : 5 4 4 3 3 2
//Çàäàíèå 5
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

//7-ая аудиторна

//1.Çàäàòü â êîäå ìàññèâ öåëûõ ÷èñåë
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
//Âûâåñòè ìàêñèìàëüíîå, ìèíèìàëüíîå èç ÷èñåë â ôàéë output.txt
//2.Çàäàòü â êîäå ìàññèâ ñèìâîëîâ, âûâåñòè ñèìâîëû â îáðàòíîì ïîðÿäêå
//char name[] = { 'I','v','a','n',0 }; // çàïèñàòü âàøå èìÿ
//âûâåñòè èìÿ â îáðàòíóþ ñòîðîíó // ñèìâîëû â îáðàòíîì ïîðÿäêå Ivan -> navI
//void main() {
//	char name[5] = { 'A','n','t','o','n' };
//	for (int i = 4; i >= 0; i--) {
//		printf("%c", name[i]);
//	}
//}
//3.Â ôàéëå input.txt çàïèñàíî öåëîå ÷èñëî n, ñãåíåðèðóéòå ñëó÷àéíûì îáðàçîì
//n öåëûõ ÷èñåë è âûâåäèòå èõ â êîíñîëü.
//
//// ïðèìåð ãåíåðàöèè ðàíäîìíîãî ÷èñëà â îòðåçêå îò 0 äî 99

//int main() {
//	setlocale(LC_ALL, "RU");
//	FILE* input;
//	int n;
//	fopen_s(&input, "input.txt", "r");
//	fscanf_s(input,"%d", &n);
//	srand((unsigned int)time(0));
//	for (int i = 0; i < n; i++) {
//		int value = rand() % 1000;
//		printf("Ðàíäîìíîå ÷èñëî = %d\n", value);
//	}
//	system("pause");
//}
//4.Ñãåíåðèðîâàòü ñëó÷àéíûì îáðàçîì ýëåìåíòû ìàññèâà
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
//	printf("×åòíûå ýëåìåíòû:\n");
//	for (int i = 0; i < 10;i++) {
//		if (mass[i] % 2 == 0) {
//			printf("%d\n", mass[i]);
//			k++;
//		}
//	}
//	printf("×èñëî ÷åòíûõ ýëåìåíòîâ = %d", k);
//	system("pause");
//}
//âûâåñòè ÷¸òíûå ýëåìåíòû, âûâåñòè ÷èñëî ÷¸òíûõ ýëåìåíòîâ
//
//5.Îòêðûòü ôàéë output.txt, çàïèñàòü â íà÷àëî ôàéëà ÷èñëî 99\n, ñäâèíóâ îñòàëüíûå ñòðîêè âíèç.
//int main() {
//	setlocale(LC_ALL, "RU");
//	FILE* output;
//	int k = 0;
//	char mass[255];
//		fopen_s(&output, "output.txt", "r+");
//		if (output != NULL) {
//		for (int i = 0; i < 255; i++) {
//			fscanf_s(output, "%c", &mass[i]);
//			if (mass[i]!='Ì') {
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
