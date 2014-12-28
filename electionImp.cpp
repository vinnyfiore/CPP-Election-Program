/*
 * electionImp.cpp
 *
 *  Created on: Mar 18, 2014
 *      Author: vinnyfiore
 */

#include <iostream>
#include <fstream>
#include <iomanip>
#include "election.h"

using namespace std;


election::election()
{
	*candidatefName="";
	*candidatelName="";
	*votes=0;

	candidatefName = new string[3];
	candidatelName = new string[3];
	votes = new int[3];
}

void election::readData(int numOfCandidates, ifstream &inf)
{
	cout<<"READDATAHERERERER";
	string canfName;
	string canlName;
	int vtes;

	for (int i=0; i<numOfCandidates; i++)
	{
		inf >> canfName >> canlName >> vtes;
		canfName =candidatefName[i];
		canlName =candidatelName[i];
		vtes = votes[i];
	}



}

void election::sumVotes(int &voteTotal, int numOfCandidates)
{

}

void election::winnerIndex(int &winner, int numOfCandidates)
{

}

void election::print(ofstream& outf, int voteTotal, int winner, int numOfCandidates) const
{
	cout<<"HERERERER";
	outf<< "HERE";
	for (int i=0; i<numOfCandidates; i++)
		{
			outf << candidatefName[i] << candidatelName[i] << votes[i] <<endl;
		}

}

