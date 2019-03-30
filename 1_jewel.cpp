//https://leetcode.com/problems/jewels-and-stones/
// Time:O(n)
//Space:O(n)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string J, string S) {
    
        int count=0;
        vector<bool>cnt_vec(128,false);
        for(int i=0;i<J.length();i++)
        {
            cnt_vec[J[i]]=true;
        }
        
        for(int j=0;j<S.length();j++)
        {
            if (cnt_vec[S[j]])
                count++;
        }
    return count;
    }
};