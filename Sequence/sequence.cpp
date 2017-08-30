#include "Sequence.h"

Sequence::Sequence()
{
	name=NULL;
	seq=NULL;
	size=0;
}

Sequence::Sequence(const char *s)
{
	size = strlen(s);
	this->seq = new char[size+1]; strcpy(seq,s); //strdup hace esta dos cosas
	name=NULL;
}

/*
Sequence::Sequence(const char *n, const char *s)
{
	size = strlen(s);
	seq  = new char[size+1]; strcpy(mens,m); //strdup hace esta dos cosas
	seq  = new char[size+1]; strcpy(mens,m); //strdup hace esta dos cosas
}
*/

void Sequence::print() const
{
	printf("%s\n",seq);
}

void Sequence::lenght() const
{
	printf("%d\n",size);
}

void Sequence::printARN() const
{
	for (int i=0; i<size; ++i)
	{
		if (seq[i]=='T')
			putc('U', stdout);
		else
			putc(seq[i], stdout);
	}
	putc('\n', stdout);
}

void Sequence::printReverseComplement() const
{
	for (int i=size-1; i>=0; --i)
	{
		switch(seq[i])
		{
			case 'A': putc('T', stdout); break;
			case 'C': putc('G', stdout); break;
			case 'G': putc('C', stdout); break;
			case 'T': putc('A', stdout); break;
		}
	}
	putc('\n', stdout);
}

void Sequence::countBases() const
{
	int A=0, C=0, G=0, T=0;

	for (int i=0; i<size; ++i)
	{
		switch(seq[i])
		{
			case 'A': A++; break;
			case 'C': C++; break;
			case 'G': G++; break;
			case 'T': T++; break;
		}
	}

	printf("%i %i %i %i\n", A, C, G, T);
}


void Sequence::readFASTA(const FILE* file)
{
	FastaEntry f = null;
	string line;

	while ((line = fastaFile.ReadLine()) != null)
	{
		// ignore comment lines
		if (line.StartsWith(";"))
			continue;

		if (line.StartsWith(">"))
		{
			if (f != null)
				yield return f;
			f = new FastaEntry { Name = line.Substring(1), Sequence = new StringBuilder() };
		}
		else if (f != null)
			f.Sequence.Append(line);
	}
		yield return f;
}


/* 
void Sequence::setSequence(const char *s) 
{
     hour = h;
     minute = m;
     second = s;     
}		
 
void Sequence::print() const
{
     cout << setw(2) << setfill('0') << hour << ":"
	<< setw(2) << setfill('0') << minute << ":"
 	<< setw(2) << setfill('0') << second << "\n";	
 
}
 
bool Sequence::equals(const Sequence &otherSequence)
{
     if(hour == otherSequence.hour 
          && minute == otherSequence.minute 
          && second == otherSequence.second)
          return true;
     else
          return false;
}

void Sequence::write(const char *newSeq)
{
	//limpio mi mens
    if(mens != NULL)
    {
        delete[] mens;
        mens=NULL;
    }

    //asigno el nuevo mensaje (si es null, ya he puesto mi mens a null)
    if(m != NULL)
    {
        mens = new char[strlen(m)+1];   //strdup hace esta dos cosas
        strcpy(mens,m);
    }
}
*/