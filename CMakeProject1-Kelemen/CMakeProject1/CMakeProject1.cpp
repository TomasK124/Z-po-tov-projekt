
#include "CMakeProject1.h"
#include "vypocet.h"

using namespace std;

int main()
{
	const char* vystupnysubor = "databáza.txt";
	FILE* vystup;

	int volba;
	double a, b, c, d, r, va;
	printf("***Vypocet Obvodu, Obsahu, Povrchu a Objemu***\n\n ");
	printf("1.Obvod a obsah\n ");
	printf("2.Povrch a Objem\n ");
	printf("3.Historia vypoctov\n ");
	printf("4.Vymazat historiu\n\n ");

	printf("Zvol operaciu: ");
	scanf_s("%d", &volba);
	switch (volba)
	{
	case 1:
		
		if (fopen_s(&vystup, vystupnysubor, "a"))
		{
			(printf("Subor sa nepodarilo otvoriť\n\n"));
			return -1;
		}
		
		printf("1.Stvorec\n ");
		printf("2.Obdlznik\n ");
		printf("3.Kruh\n ");
		printf("4.Trojuholnik\n ");
		printf("5.Rovnobeznik\n ");
		printf("6.Lichobeznik\n ");
		printf("Vyber objekt: ");
		scanf_s("%d", &volba);
		switch (volba)
		{
		case 1:
			printf("Stvorec\n");
			printf("Zadaj a: ");
			scanf_s("%lf", &a);
			printf("Obvod stvorca je: %lf\n", obvodstvorec(a));
			printf("Obsah stvorca je: %lf\n", obsahstvorec(a));
			fprintf(vystup,"\nObvod stvorca je: %lf\n", obvodstvorec(a));
			fprintf(vystup,"Obsah stvorca je: %lf\n", obsahstvorec(a));
			break;
		case 2:
			printf("Obdlznik\n");
			printf("Zadaj a: ");
			scanf_s("%lf", &a);
			printf("Zadaj b: ");
			scanf_s("%lf", &b);
			printf("Obvod obdlznika je: %lf\n", obvodobdlznik(a,b));
			printf("Obsah obdlznika je: %lf", obsahobdlznik(a,b));
			fprintf(vystup,"\nObvod obdlznika je: %lf\n", obvodobdlznik(a, b));
			fprintf(vystup,"Obsah obdlznika je: %lf", obsahobdlznik(a, b));
			fclose(vystup);
			break;
		case 3:
			printf("Kruh\n");
			printf("Zadaj r: ");
			scanf_s("%lf", &r);
			printf("Obvod kruhu je: %lf\n",obvodkruh(r));
			printf("Obsah kruhu je: %lf", obsahkruh(r));
			fprintf(vystup,"\nObvod kruhu je: %lf\n", obvodkruh(r));
			fprintf(vystup,"Obsah kruhu je: %lf", obsahkruh(r));
			break;
		case 4:
			printf("Trojuholnik\n");
			printf("Zadaj a: ");
			scanf_s("%lf", &a);
			printf("Zadaj b: ");
			scanf_s("%lf", &b);
			printf("Zadaj c: ");
			scanf_s("%lf", &c);
			printf("Zadaj va: ");
			scanf_s("%lf", &va);
			printf("Obvod trojuholnika je: %lf\n", obvodtrojuholnik(a,b,c));
			printf("Obsah trojuholnika je: %lf", obsahtrojuholnik(a,va));
			fprintf(vystup,"\nObvod trojuholnika je: %lf\n", obvodtrojuholnik(a, b, c));
			fprintf(vystup,"Obsah trojuholnika je: %lf", obsahtrojuholnik(a, va));
			break;
		case 5:
			printf("Rovnobeznik\n");
			printf("Zadaj a: ");
			scanf_s("%lf", &a);
			printf("Zadaj b: ");
			scanf_s("%lf", &b);
			printf("Zadaj va: ");
			scanf_s("%lf", &va);
			printf( "\nObvod rovnobeznika je: %lf\n", obvodrovnobeznik(a, b));
			printf( "Obsah rovnobeznika je: %lf", obsahrovnobeznik(a, va));
			fprintf(vystup, "\nObvod rovnobeznika je: %lf\n", obvodrovnobeznik(a,b));
			fprintf(vystup, "Obsah rovnobeznika je: %lf", obsahrovnobeznik(a,va));
			break;
		case 6:
			printf("Lichobeznik\n");
			printf("Zadaj a: ");
			scanf_s("%lf", &a);
			printf("Zadaj b: ");
			scanf_s("%lf", &b);
			printf("Zadaj c: ");
			scanf_s("%lf", &c);
			printf("Zadaj d: ");
			scanf_s("%lf", &d);
			printf("Zadaj va: ");
			scanf_s("%lf", &va);
			printf("Obvod lichobeznika je: %lf\n", obvodlichobeznik(a,b,c,d));
			printf("Obsah lichobeznika je: %lf", obsahlichobeznik(a,c,va));
			fprintf(vystup,"\nObvod lichobeznika je: %lf\n", obvodlichobeznik(a, b, c, d));
			fprintf(vystup,"Obsah lichobeznika je: %lf", obsahlichobeznik(a, c, va));
			break;
		default:
			break;
		}
		break;


	case 2:

		printf("1.Kocka\n ");
		printf("2.Kvader\n ");
		printf("3.Gula\n ");
		printf("4.Valec\n ");
		printf("5.Ihlan\n ");
		printf("6.Kuzel\n ");
		printf("Vyber objekt: ");
		scanf_s("%d", &volba);
		switch (volba)
		{
		case 1:
			printf("Kocka\n");
			printf("Zadaj a: ");
			scanf_s("%lf", &a);
			printf("Povrch kocky je: %lf\n", povrchkocka(a));
			printf("Objem kocky je: %lf\n", objemkocka(a));
			fprintf(vystup,"\nPovrch kocky je: %lf\n", povrchkocka(a));
			fprintf(vystup,"Objem kocky je: %lf\n", objemkocka(a));
			
			break;
		case 2:
			printf("Kvader\n");
			printf("Zadaj a: ");
			scanf_s("%lf", &a);
			printf("Zadaj b: ");
			scanf_s("%lf", &b);
			printf("Zadaj c: ");
			scanf_s("%lf", &c);
			printf("Povrch kvadra je: %lf\n", povrchkvader(a,b,c));
			printf("Objem kvadra je: %lf", objemkvader(a,b,c));
			fprintf(vystup,"\nPovrch kvadra je: %lf\n", povrchkvader(a, b, c));
			fprintf(vystup,"Objem kvadra je: %lf", objemkvader(a, b, c));
		
			break;
		case 3:
			printf("Gula\n");
			printf("Zadaj r: ");
			scanf_s("%lf", &r);
			printf("Povrch gule je: %lf\n", povrchgula(r));
			printf("objem gule je: %lf", objemgula(r));
			fprintf(vystup,"\nPovrch gule je: %lf\n", povrchgula(r));
			fprintf(vystup,"objem gule je: %lf", objemgula(r));
			
			break;
		case 4:
			printf("Valec\n");
			printf("Zadaj r: ");
			scanf_s("%lf", &r);
			printf("Zadaj v: ");
			scanf_s("%lf", &va);
			printf("Povrch valca je: %lf\n", povrchvalec(r,va));
			printf("Objem valca je: %lf", objemvalec(r,va));
			fprintf(vystup,"\nPovrch valca je: %lf\n", povrchvalec(r, va));
			fprintf(vystup,"Objem valca je: %lf", objemvalec(r, va));
			
			break;
		case 5:
			printf("Ihlan\n");
			printf("Zadaj a: ");
			scanf_s("%lf", &a);
			printf("Zadaj va: ");
			scanf_s("%lf", &va);
			printf("Povrch ihlanu je: %lf\n", povrchihlan(a,va));
			printf("Objem ihlanu je: %lf", objemihlan(a,va));
			fprintf(vystup,"Povrch ihlanu je: %lf\n", povrchihlan(a, va));
			fprintf(vystup,"Objem ihlanu je: %lf", objemihlan(a, va));
			
			break;
		case 6:
			printf("Kuzel\n");
			printf("Zadaj r: ");
			scanf_s("%lf", &r);
			printf("Zadaj va: ");
			scanf_s("%lf", &va);
			printf("Povrch kuzela je: %lf\n", povrchkuzel(r,va));
			printf("Objem kuzela je: %lf", objemkuzel(r,va));
			fprintf(vystup,"Povrch kuzela je: %lf\n", povrchkuzel(r, va));
			fprintf(vystup,"Objem kuzela je: %lf", objemkuzel(r, va));
			
			break;
		default:
			break;
			
		}
		break;
		
	case 3:
		if (fopen_s(&vystup, vystupnysubor, "r"))
		{
			(printf("Subor sa nepodarilo otvoriť\n\n"));
			return -1;
		}
		char myString[100];
		while (fgets(myString, 100, vystup)) {
			printf("%s", myString);
		}
		fclose(vystup);

		break;
	case 4: 
		if (fopen_s(&vystup, vystupnysubor, "w"))
		{
			(printf("Subor sa nepodarilo otvoriť\n\n"));
			return -1;
		}
		break;
		fclose(vystup);
		return 0;
	}
}
	