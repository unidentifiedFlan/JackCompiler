// JackCompiler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "JackAnalyser.h"

int main()
{

	std::string file;
	std::cout << "Please input a file or directory to compile:" << std::endl;
	std::cin >> file;

	try {
		JackAnalyser JackAnalyser(file);
	}
	catch (std::exception e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "Compiling complete." << std::endl;

	return 0;
}