// Function_notes.cpp: 定义控制台应用程序的入口点。
//



#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
//
//int atoi(const char *nptr)
//{
//	int c;
//	int total;
//	int sign;
//
//	while (isspace((int)(unsigned char)*nptr))
//		++nptr;
//	c = (int)(unsigned char)*nptr++;
//	sign = c;
//	if (c == '-' || c == '+')
//		c = (int)(unsigned char)*nptr++;
//	total = 0;
//	while (isdigit(c)) {
//		total = 10 * total + (c - '0');
//		c = (int)(unsigned char)*nptr++;
//	}
//	if (sign == '-')
//		return -total;
//	else
//		return total;
//}
template <class BidirectionalIterator> void reverse1(BidirectionalIterator first, BidirectionalIterator last)

{

	while ((first != last) && (first != --last))

	{

		std::iter_swap(first, last);

		++first;

	}

}

class Solution {
public:
	int reverse(int x) {
		string strIntResult;
		double StrResult;
		string tempStr;
		char a[100];
		cin >> x;
		sprintf_s(a, "%d", x);
		strIntResult = a;
		if (strIntResult[0] == '-')
		{
			tempStr = strIntResult.substr(1, string::npos);

			reverse1(tempStr.begin(), tempStr.end());
			if (tempStr[0] - 48 == 0)
			{
				tempStr.erase(0, 1);
			}
			strIntResult = '-' + tempStr;
		}
		else
		{
			reverse1(strIntResult.begin(), strIntResult.end());
			if (strIntResult[0] - 48 == 0)
			{
				strIntResult.erase(0, 1);
			}

		}
		strcpy_s(a, strIntResult.c_str());
		StrResult = atoi(a);
		if (StrResult<-2 ^ 31 || StrResult>2 ^ 31)
		{
			return 0;
		}
		//StrResult=stringToInteger(strIntResult);

		return StrResult;

	}


};

int stringToInteger(string input) {
	return stoi(input);
}

int main() {
	int p = 121331;
	int *a = &p;
	string line;
	while (getline(cin, line)) {
		int x = stringToInteger(line);

		int ret = Solution().reverse(x);

		string out = to_string(ret);
		cout << out << endl;
	}
	return 0;
}