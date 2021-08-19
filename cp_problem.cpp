#include <string>

bool isInterleaveUtil(string a, string b, string c, int n1, int n2, int n3){

    //If all the strings become empty, then return true.
    if(n1==0 && n2==0 && n3==0) {
        return true;
    }

    //If the length of "c" is not equal to the sum of the length of "a" and "b", then return false.
    if(n1 + n2 != n3) {
        return false;
    }
 
    if(n1 > 0 && n2 > 0 && n3 > 0 && a[n1 - 1] == c[n3 - 1] && b[n2 - 1] == c[n3 - 1]){
        return isInterleaveUtil(a, b, c, n1 - 1, n2, n3 - 1) || isInterleaveUtil(a, b, c, n1, n2 - 1, n3 - 1);
    }

    else if(n1 > 0 && n3 > 0 && a[n1 - 1] == c[n3 - 1]){
        return isInterleaveUtil(a, b, c, n1 - 1, n2, n3 - 1);
    }

    else if(n2 > 0 && n3 > 0 && b[n2 - 1] == c[n3 - 1]){
        return isInterleaveUtil(a, b, c, n1, n2 - 1, n3 - 1);
    }

    //If the last character of "c" matches neither with the last character of "a" nor with the last character of "b", then we simply return false.
    else{
        return false;
    }
}


bool isInterleave(string a, string b, string c){

    int n1 = a.length(), n2 = b.length(), n3 = c.length();

    //Call the util function passing each string along with their lengths as arguments.
    return isInterleaveUtil(a, b, c, n1, n2, n3);
}