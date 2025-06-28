//https://www.hackerrank.com/contests/mountblue-technologies/challenges/breaking-best-and-worst-records/submissions/code/1393678337
vector<int> breakingRecords(vector<int> scores) {
    
    int l, h, lc = 0, hc = 0;
    vector<int> a;
    for(int i = 0; i < (int)scores.size();i++)
    {
        if(i == 0)
        {
            l = scores[0];
            h = scores[0];
            continue;
        }
        if(h < scores[i])
        {
            h = scores[i];
            hc++;
        }
        if(l > scores[i])
        {
            l = scores[i];
            lc++;
        }
    }
    a.push_back(hc);
    a.push_back(lc);
    return a;
}
