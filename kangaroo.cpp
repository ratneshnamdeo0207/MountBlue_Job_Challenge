//https://www.hackerrank.com/contests/mountblue-technologies/challenges/kangaroo/submissions/code/1393679712
string kangaroo(int x1, int v1, int x2, int v2) {
    if(v1 == v2)
        return (x1 == x2)?"YES":"NO";
    //x1 + v1 * n = x2 + v2 * n
    //x1 - x2 = (v2 - v1) * n
    int num = x1 - x2;
    int den = v2 - v1;
    if(den != 0 && num % den == 0 && num / den > 0)
        return "YES";
    
    return "NO";
}
