class Solution {
public:
    string removeKdigits(string num, int k) {
        string res="";
        int n=num.size(), keep=n-k;
        for(auto c:num){
            while(k>0&&res.size()&&res.back()>c){
                k--;
                res.pop_back();
            }
            res.push_back(c);
        }
        res.resize(keep);
        while(!res.empty()&&res[0]=='0') res.erase(res.begin());
        return res.empty()?"0":res;
    }
};