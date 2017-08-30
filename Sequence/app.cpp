#include "sequence.h"

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	Sequence sequence("ACCGGGTTTT");

	sequence.print();
	sequence.printARN();
	sequence.lenght();
	sequence.countBases();
	sequence.printReverseComplement();

	return 0;
}