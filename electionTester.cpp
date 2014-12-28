/*
 * electionTester.cpp
 *
 *  Created on: Mar 19, 2014
 *      Author: vinnyfiore
 */

#include <iostream>
#include <fstream>
#include <iomanip>
#include "election.h"
using namespace std;

int main()

{
	cout<<"HERE";
	int age;
	cin>>age;
	cout<<"HERE2";
	int numOfCandidates = 3;
	int voteTotal =0;
	int winner =0;

	election elect;
	ifstream inf;
	inf.open("Election.txt");
	ofstream outf;
	outf.open("ElectionOut.txt");

	if(!inf)
	{
		cout << " *** Input file does not exist! ***" << endl;
		return 1;
	}

	outf << "Vincent Fiore CUS 1151 Project #3 " << endl
		<< endl <<endl << endl;

	outf << "Candidate" << setw(10) << "Votes" << setw(10) << "% of Votes" << endl;

	outf<< "The total vote count is " << endl;
	outf<< "The winner is " << endl;


	while (!inf.eof() )
	{
		elect.readData(numOfCandidates, inf);
		elect.print(outf, voteTotal, winner, numOfCandidates);

	}

	inf.close();
	outf.close();
	return 0;

}


