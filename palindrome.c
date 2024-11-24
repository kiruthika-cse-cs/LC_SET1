bool isPalindrome(int x) {
    int re=0,rem,i=0,temp=x;
    while(x>0){
        rem=x%10;
        re=re*10+rem;
        x=x/10;
        i++;
    }
    if(temp==re&&temp>0){
        return true;
}   else{
    return false;}
return 0;}
