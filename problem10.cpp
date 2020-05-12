bool isMatch(char * s, char * p)
{
    int i = 0, j = 0;
    int memo[50][50] = {{0,},};
    int flag[50][50] = {{0,},};

    bool dp(int i, int j)
    {
        bool ret;
        if(flag[i][j]) return memo[i][j];
        if(!p[j]) return(!s[i]);
        bool first = s[i] && (p[j] == s[i] || p[j] == '.');
        if(p[j+1]== '*'){
            ret =  dp(i, j+2) || (first && dp(i+1, j));
        }
        else{
            ret = first && dp(i+1, j+1);
        }
        memo[i][j] = ret;
        flag[i][j] = 1;
        return ret;
    }
    
    return dp(0,0)

}