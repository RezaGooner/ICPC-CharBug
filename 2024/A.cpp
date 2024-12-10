#include <bits/stdc++.h>

int main(){
    int num ;
    std::vector<bool> result ;
    std::cin >> num ;

    for(int i = 0 ; i < num ; i++){
        int n ;
        std::cin >> n ;
        if (n % 2 == 0)
            if ((n/2) % 4 == 0) {
                result.push_back(true);
                continue;
            }
        result.push_back(false);
    }

    for (bool i : result)
        i ? std::cout << "YES\n" : std::cout << "NO\n" ;

    return 0 ;
}
