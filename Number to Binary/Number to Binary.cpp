// Number to Binary.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include <math.h>



std::string translateUnaryToBinary(int integer)
{
   
    int temp = integer;
    std::string binaryNumber;
    for(int BinaryCounter = 30; BinaryCounter >= 0;BinaryCounter --)
    {
        int tempBinaryNumber = pow(2, BinaryCounter);

        if (tempBinaryNumber > temp)
        {
         binaryNumber = binaryNumber+"0";
         std::cout << tempBinaryNumber << "is Bigger than" << temp << std::endl;
        }
        else
        {
            binaryNumber = binaryNumber + "1";
            std::cout << tempBinaryNumber << "is Smaller than" << temp << std::endl;
            temp = temp - tempBinaryNumber;
        }

    }

    return binaryNumber;
}


int main()
{
    int Number;
    std::cout << "Enter a Integer"<<std::endl;
    std::cin >> Number;
    std::string Result = (translateUnaryToBinary(Number));
    std::cout << Result;
    
    
    return 0;
}



// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
