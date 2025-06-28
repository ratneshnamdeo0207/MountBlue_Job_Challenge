//https://www.hackerrank.com/contests/mountblue-technologies/challenges/staircase/submissions/code/1393680256
void staircase(int n) {
    for(int i = 1;i <= n;i++)
    {
        for(int j = n - i; j >= 1;j--)
        {
            cout<<" ";
        }
        for(int k = 1;k <= i;k++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
}
