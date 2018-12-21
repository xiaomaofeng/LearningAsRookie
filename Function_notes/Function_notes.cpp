#include<vector>
#include<iostream>
using namespace std;


class Solution {
public:
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int>> ret;
		ret.push_back({});
		int size = nums.size();
		int subsize = pow(2, size);
		int hash = 1;
		while (hash<subsize) {
			vector<int> temp;
			for (int k = 0; k<size; k++) {
				int a = 1 << k;
				if (a&hash) {
					temp.push_back(nums[k]);
				}
			}
			ret.push_back(temp);
			hash++;
		}
		return ret;
	}
};

int main()
{
	vector<vector<int>>res;
	vector<int>nums;
	int a[] = { 1,2,5};
	for (int i = 0; i < sizeof(a)/sizeof(int); i++)
	{
		nums.push_back(a[i]);
	}
	Solution obj;
	res=obj.subsets(nums);
	cout << "hello world";

	system("pause");
}