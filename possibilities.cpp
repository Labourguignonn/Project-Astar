#include <bits/stdc++.h>
#include <cstdlib> // Para a função rand()
#include <ctime>
using namespace std;
typedef pair<int,float> Parint;
typedef vector<pair<Parint, string>> pstr;
//typedef pair<Parint, string> pstrfront;

// Cria o grafo do mapa do metrô
vector<pstr> subway() {
  vector<pstr> realStations(15); 
  // Conexões Azuis
  realStations[1].push_back({{2, 10.0}, "Azul"});
  realStations[2].push_back({{1, 10.0}, "Azul"});

  realStations[2].push_back({{3, 8.5}, "Azul"});
  realStations[3].push_back({{2, 8.5}, "Azul"});

  realStations[3].push_back({{4, 6.3}, "Azul"});
  realStations[4].push_back({{3, 6.3}, "Azul"});

  realStations[4].push_back({{5, 13.0}, "Azul"});
  realStations[5].push_back({{4, 13.0}, "Azul"});

  realStations[5].push_back({{6, 3.0}, "Azul"});
  realStations[6].push_back({{5, 3.0}, "Azul"});

  // Conexões Amarelas
  realStations[2].push_back({{9, 10.0}, "Amarela"});
  realStations[9].push_back({{2, 10.0}, "Amarela"});

  realStations[2].push_back({{10, 3.5}, "Amarela"});
  realStations[10].push_back({{2, 3.5}, "Amarela"});

  realStations[5].push_back({{7, 2.4}, "Amarela"});
  realStations[7].push_back({{5, 2.4}, "Amarela"});

  realStations[5].push_back({{8, 30.0}, "Amarela"});
  realStations[8].push_back({{5, 30.0}, "Amarela"});

  realStations[8].push_back({{9, 9.6}, "Amarela"});
  realStations[9].push_back({{8, 9.6}, "Amarela"});

  // Conexões Verdes
  realStations[4].push_back({{8, 15.4}, "Verde"});
  realStations[8].push_back({{4, 15.4}, "Verde"});

  realStations[4].push_back({{13, 12.8}, "Verde"});
  realStations[13].push_back({{4, 12.8}, "Verde"});

  realStations[8].push_back({{12, 6.4}, "Verde"});
  realStations[12].push_back({{8, 6.4}, "Verde"});

  realStations[13].push_back({{14, 5.1}, "Verde"});
  realStations[14].push_back({{13, 5.1}, "Verde"});

  // Conexões Vermelhas
  realStations[3].push_back({{9, 9.4}, "Vermelha"});
  realStations[9].push_back({{3, 9.4}, "Vermelha"});

  realStations[9].push_back({{11, 12.2}, "Vermelha"});
  realStations[11].push_back({{9, 12.2}, "Vermelha"});

  realStations[3].push_back({{13, 18.7}, "Vermelha"});
  realStations[13].push_back({{3, 18.7}, "Vermelha"});

  return realStations;
} 

pair<int, int> pairTest() {
    vector <int> v = {1,2,3,4,5,6, 7, 8, 9, 10,11, 12, 13, 14};
    srand(static_cast<unsigned int>(time(nullptr)));

    int indiceAleatorio = rand() % v.size();
    int indiceAleatorio2 = rand() % v.size();
    int numeroAleatorio = v[indiceAleatorio];
    int numeroAleatorio2 = v[indiceAleatorio2];

    return {numeroAleatorio2, numeroAleatorio};
}


vector<string> colorTest(int start,vector<pstr> realStations) {
    vector <string> vtest;
    bool stringRepetida = false; // iterar para ver se ja existe e evitar repeticao
    for (auto it = realStations[start].begin(); it != realStations[start].end(); it++){
        if(it-> second )
        vtest.push_back(it->second);
    }
    vector <string> v = {"Azul", "Amarela", "Verde", "Vermelha"};
    srand(static_cast<unsigned int>(time(nullptr)));

    int indiceAleatorio = rand() % v.size();
    string corAleatoria = v[indiceAleatorio];

    return vtest;
}

int main() {
  int t = pairTest().first;
  int t2 = pairTest().second;
  cout << t  << " " << t2<< endl;
  vector <pstr> realStations = subway();
  vector<string> color = colorTest(2, realStations);
  //cout << color << endl;
  for(int i = 0; i < color.size(); i++) {
      cout << color[i] << endl;
  }
  return 0;
}
