// GeneratorTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include "SpaceGenerator.h"
#include "RandomGen.h"
#include "GeneratedElement.h"
#include "Galaxy.h"
#include <ctime>
#include <string>
#include <vector>

int main()
{
	std::string name = "Orion";
	Galaxy galaxy(name, 2000000);
	/*for (int i = 0; i < galaxy.getElementsCount(); i++)
	{
		std::cout << i <<" "<< galaxy.getSeedAt(i) << std::endl;
	}*/
	std::cout << "end" << std::endl;
	system("pause");
    return 0;
}

