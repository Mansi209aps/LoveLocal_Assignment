// 2. Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int count = n / 3;
    vector<pair<int, int>> vp;
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }
    for (auto x : mp)
    {
        vp.push_back(make_pair(x.second, x.first));
    }
    for (int i = 0; i < vp.size(); i++)
    {
        if (vp[i].first > count)
            v.push_back(vp[i].second);
    }
    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> ans = majorityElement(nums);
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}