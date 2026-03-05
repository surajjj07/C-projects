#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

vector<int>TwoSum1(vector<int>& nums,int target){
    vector<int> res;
    for (int i = 0; i < nums.size();i++){
        for (int j = i+1; j < nums.size();j++){
            int sum = nums[i] + nums[j];
            if(sum==target){
                res.push_back(i);
                res.push_back(j);
                break;
            }
        }
    }
    return res;
}

// Optimal Approach
vector<int> TwoSum2(vector<int>&nums,int target){

    unordered_map<int, int> mp;
    vector<int> res;
    for (int i = 0; i < nums.size();i++){
        int first = nums[i];
        int second = target - nums[i];
        if(mp.find(second) != mp.end()){
            res.push_back(mp[second]);
            res.push_back(i);
            return res;
        }
        mp[first] = i;
    }

}

int main (){

    vector<int> num = {2, 5, 3, 4, 6, 7};
    int target = 12;

    vector<int> res = TwoSum2(num, target);
    for (int i = 0; i < res.size();i++){
        cout << res[i] << "\n";
    }

    return 0;
}