#include "stdio.h"
#include "stdlib.h" 

int main()
{
	int year, month, day, days, February;

	printf("��J�A���~��:");
	scanf("%d", &year);

	printf("��J�A�����:");
	scanf("%d", &month);

	printf("��J�A�����:");
	scanf("%d", &day);

	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))

		February = 29;

	else
		February = 28;


	switch (month) {
	case 1:
		days = 0;
		printf("%d�~%d��%d��O�@�~������%d�ѡI", year, month, day, days + day);
		break;
	case 2:
		days = 31;
		printf("%d�~%d��%d��O�@�~������%d�ѡI", year, month, day, days + day);
		break;
	case 3:
		days = 31 + February;
		printf("%d�~%d��%d��O�@�~������%d�ѡI", year, month, day, days + day);
		break;
	case 4:
		days = 62 + February;
		printf("%d�~%d��%d��O�@�~������%d�ѡI", year, month, day, days + day);
		break;
	case 5:
		days = 92 + February;
		printf("%d�~%d��%d��O�@�~������%d�ѡI", year, month, day, days + day);
		break;
	case 6:
		days = 123 + February;
		printf("%d�~%d��%d��O�@�~������%d�ѡI", year, month, day, days + day);
		break;
	case 7:
		days = 153 + February;
		printf("%d�~%d��%d��O�@�~������%d�ѡI", year, month, day, days + day);
		break;
	case 8:
		days = 184 + February;
		printf("%d�~%d��%d��O�@�~������%d�ѡI", year, month, day, days + day);
		break;
	case 9:
		days = 215 + February;
		printf("%d�~%d��%d��O�@�~������%d�ѡI", year, month, day, days + day);
		break;
	case 10:
		days = 245 + February;
		printf("%d�~%d��%d��O�@�~������%d�ѡI", year, month, day, days + day);
		break;
	case 11:
		days = 276 + February;
		printf("%d�~%d��%d��O�@�~������%d�ѡI", year, month, day, days + day);
		break;
	case 12:
		days = 306 + February;
		printf("%d�~%d��%d��O�@�~������%d�ѡI", year, month, day, days + day);
		break;

	default:
		printf("�A��J������~!");
		break;
	}
	system("pause");
	return 0;
}
