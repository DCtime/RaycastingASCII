#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

const string asciiCharacters = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/|()1{}[]?-_+~<>i!lI;:,^. ";

void updateASCiiOnScreen(int xAxisCharacterQuantity, int yAxisCharacterQuantity, string asciiCharacters, int delayMiliSeconds, bool testing);
// clears the screen and print out the map given
// TODO: add showASCiiMap parameter
// , yAxisCharacterQuantity: the size of the showASCiiMap
void showASCiiOnScreen(int xAxisCharacterQuantity, int yAxisCharacterQuantity, string asciiCharacters, int testingIndex, int delayMiliSeconds);
// sub function of updateASCiiOnScreen, called when updateASCiiOnScreen's testing is true


int main()
{
    updateASCiiOnScreen(100, 30, asciiCharacters, 40, true); //the screen which
}

void updateASCiiOnScreen(int xAxisCharacterQuantity, int yAxisCharacterQuantity, string asciiCharacters, int delayMiliSeconds, bool testing = false)
{
    if (testing == true)
    {
        for (int testingIndex = 0; testingIndex < asciiCharacters.length(); testingIndex++)
        {
            system("CLS");
            showASCiiOnScreen(100, 30, asciiCharacters, testingIndex, delayMiliSeconds);
        }
    }


}

void showASCiiOnScreen(int xAxisCharacterQuantity, int yAxisCharacterQuantity, string asciiCharacters, int testingIndex, int delayMiliSeconds)
{
    string printBuffer = "";
    for (int yAxisCounter = 0; yAxisCounter < yAxisCharacterQuantity; yAxisCounter++)
    {
        for (int xAxisCounter = 0; xAxisCounter < xAxisCharacterQuantity; xAxisCounter++)
        {
            printBuffer += asciiCharacters[testingIndex];
        }
        printBuffer += "\n";
    }
    cout << printBuffer;
    Sleep(delayMiliSeconds);
}
