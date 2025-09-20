#include "../include/replace.h"


std::string replace(std::string str, int n, char old_value, char new_value){
    int size_str = str.length();
    if (n <= 0 || old_value == new_value){
        return str;
    } else {
        int k = 0;
        for (int i = 0; i < size_str; i++){
            if (str[i] == old_value){
                k++;
                if (k == n){
                    str[i] = new_value;
                    k = 0;
                }
            }
        }
        return str;
    }
}