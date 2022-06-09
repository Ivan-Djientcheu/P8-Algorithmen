#include <stdio.h>
#include <stdlib.h>


// Dieses Programm berechnet die Summe von 1 bis zu ein ausgewählte Zahl N

int main()
{   
	int summe, i, N;
	printf("Das Programm berechnet die Summe von 1 bis zu eine Zahl ihre Wahl.\n Geben Sie bitte ein Zahl: N = ");
	scanf("%d", &N); // Speicherung die Angabe des Nutzers in der Variable N
	summe = 0; // initialisierung der Variable summe
        for (i=1; i<=N; i++){
        summe = summe + i;
        }
                              
	 printf("die Summe alle Zähle von 1 bis N=%d  ist %d", N, summe); // Ausgabe der Berechnung
return 0;

}	
