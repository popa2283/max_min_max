
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> nams = { -4,-2,-1,-1,0,1,2,3 };
	for (size_t i = 0; i < nams.size(); i++)
	{
		if (nams[i] < 0) {
			nams[i] = nams[i] * -1;
		}
	}
	sort(begin(nams), end(nams));
	for (size_t i = 0; i < nams.size(); i++)
	{
		if (i==nams.size()-1) {
			cout << nams[i] << endl;
		}
	}
}

