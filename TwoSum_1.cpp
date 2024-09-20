// Here I have already given input for target and the content of the vector, 
// take user input for both target and nums
// it will work for sure

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    int target=9; // take user input
    vector <int> nums({2,7,11,15}); // take user input for the content of the vector

    unordered_map<int,int> ans;
    int n=nums.size();

    for(int i=0;i<n;i++){
        int comp=target-nums[i];
        if(ans.count(comp)){
            cout<<ans[comp]<<i;
        }
        ans[nums[i]]=i;
    }
    return 0;
}