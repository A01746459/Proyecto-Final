#include <iostream>
#include <string>
#include <vector>
#include "cliente.h"
using namespace std;

int main() {
  vector< pair<Producto,int> > ventas;
ventas.push_back(make_pair(Producto{1,"llaveroStarWars",100},1));
  vector<Pedido> pedidos;
  pedidos.push_back(Pedido{1,"Sebastian","satelite", "5513536199", ventas});
  cout << "El pedido se ha generado\n";
  Cliente cliente1{1, "JavierManzano"};
  cout << "Bien hecho\n"; 
  cliente1.agregarPedido(pedidos[0]);
  cliente1.eliminarUltimoPedido();
};
