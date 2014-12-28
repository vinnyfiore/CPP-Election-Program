#ifndef H_election
#define H_election

#include <fstream>
#include <string>

using namespace std;

class election
{
public:
	void readData(int numOfCandidates, ifstream& inf);
	void sumVotes(int& voteTotal, int numOfCandidates);
	void winnerIndex(int& winner, int numOfCandidates);
	void print(ofstream& outf, int voteTotal, int winner, int numOfCandidates) const;
	election();

private:
	string *candidatefName;
      string *candidatelName;
 	int *votes;
};
#endif
