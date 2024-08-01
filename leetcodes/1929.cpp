#include <iostream>
#include <vector>

using namespace std;

int main() {
	int i;
	vector<int> nums;

	while (cin >> i) {
		nums.push_back(i);
	}

	vector<int> ans(nums);
	for (int i : nums) {
		ans.push_back(i);
	}

	for (int j : ans) {
		cout << j;
	}

}