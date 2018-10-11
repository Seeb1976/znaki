#include <stdio.h> /*dolaczenie biblioteki standardowej input-output */

/* y=f(x) */
/* f()=>0 */
int main() /* funkcja glowna programu */
{
/* int->typ zwracanej wartosci (int-wartosc calkowita) */
	puts("Pierwszy program"); /* puts-funkcja z biblioteki standardowej */
				  /* puts -> put string */
				  /* wyswietlajaca ciag znakow */
				  /* automatycznie przechodzi do nowej linii */
	putchar('g');
	putchar('\n'); /*znak końca linii*/
	putchar('\t'); /*tabulator*/
/*	putchar('\r'); */ /*kursor powraca na początek linii - powrót karetki */
	putchar('\\'); /*wypisuje znak*/
	return 0;

}
