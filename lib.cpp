bool funzione1 (char n){
    if (n>=65 && n<=90 ) {
    n=(n+32);

    } else if (n>=97 && n<=122){
        n=(n-32);
    } else {
        return false;
    }
}
