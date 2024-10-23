#include <stdio.h>
// function Prototype
int averageTemperature(int arrayIndeksNummer);
// Global Array variable
static float t[] = { 10.3,15.4,21.8,22.5,25.1,
				  27.4,28.8,27.9,20.1,22,
				  19.4,14.2 };

int main() {	

	// udskrive funktioner
	printf("Intast ArrayIndeks Nummer mellem tal 0 - 12 Eller -1 for slut Program:");
	// Tage input fra tastatur ( det er funktioner i C vi kalder scanf_s)
	int arrayIndeksNummer;
	scanf_s("%d", &arrayIndeksNummer); // & menner memory address of variabler
	// sentinel loop for køre program infinite times

	if (arrayIndeksNummer >= 0 && arrayIndeksNummer < 12) {
		while (arrayIndeksNummer != -1)
		{
			float avgTemp = averageTemperature(arrayIndeksNummer);
			printf("%.2f\n", avgTemp);
			// Tage input igen
			printf("Intast ArrayIndeks Nummer mellem tal 0 - 12 Eller -1 for slut Program:");
			// Tage input fra tastatur ( det er funktioner i C vi kalder scanf_s)		
			scanf_s("%d", &arrayIndeksNummer); // & menner memory address of variabler
		}
	}
	else
	{
		printf("undskyld I har intast forkerte nummer, det kun mellem 0 -12");
	}

	printf("\n\n");

	return 0;
	
}

int averageTemperature(int arrayIndeksNummer) {
	return t[arrayIndeksNummer];
}



