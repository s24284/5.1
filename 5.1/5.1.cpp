// 5.1.cpp : 
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int rozmiartablicy, najwyższa = INT_MIN, indeksnaj;


    std::cout << "Stworze dla ciebie tablice liczb calkowitych. Podaj liczbe elementow, z ktorych ma sie skladac:\n";
    std::cin >> rozmiartablicy;

    std::vector<int> tabliczka(rozmiartablicy);

    for (int i = 0; i < rozmiartablicy; i++)
    {
        std::cout << "Podaj mi " << i + 1 << " liczbe, ktora trafi do tablicy:\n";
        std::cin >> tabliczka[i];

        if (tabliczka[i] > najwyższa)
        {
            najwyższa = tabliczka[i];
            indeksnaj = i;
        }

    }

    std::cout << "Najwieksza liczba z podanych do tablicy jest: " << najwyższa << "\n Znajduje sie ona w : " << indeksnaj << " indeksie tablicy"; 

    return 0;

}

