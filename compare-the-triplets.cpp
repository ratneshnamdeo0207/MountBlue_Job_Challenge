//https://www.hackerrank.com/contests/mountblue-technologies/challenges/compare-the-triplets/submissions/code/1393681110
vector<int> compareTriplets(vector<int> a, vector<int> b) {

        vector<int> ans;
        ans.push_back(0);
        ans.push_back(0);

        for(int i = 0;i < 3;i++)
        {
            if(a[i] > b[i])
            {
                ans[0]++;
            }
            else if(a[i]< b[i])
                ans[1]++;
        }
    return ans;
}
