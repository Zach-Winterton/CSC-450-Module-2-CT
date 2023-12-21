//============================================================================
// Name        : CSC 450 Module 2 CT.cpp
// Author      : Zach Winterton
// Date        : 12/21/2023
// Description : Simple C++ console application that will take two string inputs from a user three times for varying string lengths.
//  The program concatenates each of the two string inputs and then prints the resulting output to the screen. Three separate new strings will print in total.
//============================================================================

// Necessary header files
#include <iostream>
#include <string>

using namespace std;

// Function to concatenate the strings together using append()
std::string concatenateStrings(const std::string& str1, const std::string& str2) {
	std::string result = str1; // Initialize result with str1
	result.append(str2); // Append str2 to result
	return result; // Return the concatenated string
}

// Main function
int main() {
	// For loop to take user's input three times
	for (int i=0; i <3; ++i) {
		// Prompt user for first string input
		std::cout << "Please enter a string: ";
		std::string input1;
		std::getline(std::cin, input1); // Read input1 allowing spaces

		// Prompt user for second string input
		std::cout << "Please enter another string: ";
		std::string input2;
		std::getline(std::cin, input2); // Read input2 allowing spaces

		// Concatenate the strings using function
		std:: string result = concatenateStrings(input1, input2);

		// Print the concatenated result
		std::cout << "Your concatenated string result: " << result << "\n\n";

	}
	return 0;
}
