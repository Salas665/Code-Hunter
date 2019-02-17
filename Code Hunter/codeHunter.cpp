#include <iostream>
#include <string>
 
using namespace std;

int main()
{
	//Setting up Variables 
	string textToAnalyze;
	//int foo = 0; // This is not needed (extra credit) 
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	//int bar = 0; This is not needed (extra credit)
	// Gives an introdution to the user
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	//Gets the string that the user inputs
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);
	// we are looping through each char of this string to analyze it 
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		//This goes through the string and checks for vowles
		//if it finds one, it adds 1 to the var 'vowles'
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels; //fixed a bug that subrtracted the vowels instead adding 
		}
		//This is for every other char that is not a vowel. 
		//If it's not a vowel, this runs and adds 1 to the var 'constants'
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))
		{
			++consonants; // Fixed this to code start counting, it was a comment before
		}
		// This goes through the string and checks for numbers
		// If it's a number it adds 1 to the var 'digits'
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		//This goes through the string and checks for whitespaces
		//If it's a whitespace it adds one to the var 'spaces'
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		//This catches everything that is not a vowel, a constant, a digit, nor a whitespace
		//If it's an unidentifiable characters, it adds one to the var 'unknownCharacters'
		else
		{
			++unknownCharacters;
		}
	}
	// This assigns the legnth of the string to the var 'lengthOfStringSubmittedForAnalysis'
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	// This adds up all of the variables into one 'checkSum'
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;
	// Displaying the variables
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;
	// This verifies that the length of the string is the same as all the variables added up
	// which is 'checkSum'
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	// This displays if the length of the string is NOT the same as all the variables added up
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}
	system("pause");
	return 0;
}