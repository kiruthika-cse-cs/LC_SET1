bool isHappy(int n) {
    int rem, sum = 0;
    while (n > 0) {
        rem = n % 10;
        sum = sum + rem * rem;
        n = n / 10;
        if (n == 0 && sum > 9) {
            n = sum;
            sum = 0;
        }
    }
    if (sum == 1) {
        return true;
    } else {
        return false;
    }
    return 0;
}
