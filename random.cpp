#include <random>
#include <iostream>


using namespace std ;

int main()
{
    random_device rd ;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1,20);
    

    for (int i = 0; i < 20; ++i) ; {
        cout  << dist(gen) << "";

    }
    cout << endl;
}