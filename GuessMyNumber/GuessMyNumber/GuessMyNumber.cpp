//Zexi Li Li
#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    int num = rand() % 100 + 1, guess, tries = 0;   // num és un nombre entre 1 a 100 i tries comença en 0
    cout << "Welcome to Guess My Number! \n";
    do  // comença bucle do-while
    {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;    // cada vegada que el jugador escriu un número el nombre de tries puja
        if (guess > num) { cout << "Too high! \n"; }  // si el nombre escrit és superior a número que s'ha d'endevinar, indicarà que el número és massa gran
        else if (guess < num) { cout << "Too low! \n"; } // si el nombre escrit és inferior a número que s'ha d'endevinar, indicarà que el número és massa petit
        else if (guess == num) { cout << "Correct! You got it " << tries << " in guesses!"; } // si el nombre escrit és el nombre que s'ha d'endevinar, et dirà que és correcte i en quants intents (tries) ho has fet
    } while (guess != num); // mentre guess NO sigui el nombre random, tanca bucle do-while
    return 0;
}
