#include <iostream>
using namespace std;

int main() {
  vector<float> list;
  vector<float> aux;
  float n;
  float sum = 0.0;
  float result = 0.0;
  
  while(cin >> n and n != 0) {
    list.push_back(n);
  }

  for(int i = 0; i < list.size(); i++) {
    if(list[i] != 4) {
      aux.push_back((list[i]*2))
    }
    else {
      sum += 4;
    }
  }

  for(int j = 0; j < aux.size(); j++) {
    result += aux[j];
  }
  result += sum;
  cout << result << endl;
  return 0;
}

// exemplo de entrada: 1 -> 14 pela linha azul
'''
10
8.5
6.3
4 (não multiplica por dois mas soma no fim)
12.8
5.1
0 (encerra)
89.4 (output)
  '''
