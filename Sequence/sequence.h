#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <iostream> // strlen, strcpy
#include <stdio.h>  // printf
using namespace std;


class Sequence
{
	private:
		char* name;
		char* seq;
		int size;

	public:
		// Constructors
		Sequence();
		Sequence(const char* seq);

		// Print
		void print() const;
		void printARN() const;
		void printReverseComplement() const;
		void lenght() const;
		void countBases() const;

		// Read files
		void readFASTA(const F file);
		
		/*
		// Setter
		void setSequence(const char* seq);
		
		// Print
		void printADN() const;
		void printARN() const;

		// Utils
		void countBases() const;

		// Data
		void compress(const FILE* file) const;
		void extract(const FILE* file) const;
		*/
};

#endif