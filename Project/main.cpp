#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int idx = 0;

bool cmp(const string& a, const string& b)
{
	if (a[idx] == b[idx])
		return a < b;
	return a[idx] < b[idx];
}

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer;
	idx = n;
	sort(strings.begin(), strings.end(), cmp);
	answer = strings;
	return answer;
}

void main()
{
	//test
	//auto ret = solution({"sun", "bed", "car"});
}