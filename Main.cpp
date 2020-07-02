#include <iostream>
#include <ctime>
using namespace std;
void ArrayTest(int IntArray[], const int size);
void randomIntArray(int IntArray2[], const int size, int minRan, int maxRan);
int SearchMethod(int IntArray3[], const int size, int searchValue);
void ArrayToText(char charArray[], const int size);
char FindAndReplace(char charArray[], const int size, char findValue, char replaceValue);

int main()
{

	int data1[] = { 42, 90, 991, 345, 334 };
	int data2[] = { 6, 9, 20, 13, 54, 9 };
	char charArray[] = { 'd', 'o', 'n', 'n', 'y' };
	srand(time(0));
	const int NO_OF_ITEMS = 6;
	int IntArray[NO_OF_ITEMS];
	int IntArray3[10];
	//ArrayTest(data1, 6);
	//randomIntArray(IntArray, 6, 1, 9);
	int Occurrences = 0;
	//SearchMethod(data2, 6, 9);
	//ArrayToText(charArray, 5);
	FindAndReplace(charArray, 5, 'd', 'o');
	system("pause");
	return 0;
}

void ArrayTest(int IntArray[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Index" << i << ": " << IntArray[i] << "\n";

	}

}
void randomIntArray(int IntArray2[], const int size, const int minRan, const int maxRan)
{
	srand((int)time(NULL));
	const int range = maxRan - minRan;
	for (int i = 0; i < size; i++)
	{
		IntArray2[i] = minRan + (rand() % range);
	}
	for (int i = 0; i < size; i++)
	{
		cout << "Index" << i << ": " << IntArray2[i] << "\n";
	}



}
int SearchMethod(int IntArray3[], const int size, int searchValue)
{
	int Occurrences = 0;
	for (int i = 0; i < size; i++)
	{
		if (IntArray3[i] == searchValue)
		{
			Occurrences = Occurrences + 1;
			cout << "Found the value " << searchValue << " at position " << i << " . \n";
			cout << "Number of occurrences is now " << Occurrences << " . \n";
		}
		else
		{
			cout << "Not found at position " << i << " . \n";
		}
		
	 

	}
	return Occurrences;
}
void ArrayToText(char charArray[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "" << charArray[i] << "";
	}

}
char FindAndReplace(char charArray[], const int size, char findValue, char replaceValue)
{
	int Changes = 0;
	for (int i = 0; i < size; i++)
	{
		if (charArray[i] == findValue)
		{
			charArray[i] == replaceValue;
			Changes = Changes + 1;
			cout << "Change made at position " << i << " " << findValue << " to " << replaceValue << " .";
		}
		else {
			cout << "No action necessary \n";
		}
	}
	return Changes;
}