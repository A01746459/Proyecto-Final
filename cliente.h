#ifndef CLIENTE_C
#define CLIENTE_C

#include <string>
#include <vector>
#include <iostream>
#include "pedido.h"
#include <vector>
class Cliente{
private:
    int idCliente;
    string nombreCliente;
    vector <Pedido> historialPedidos;

public:
    Cliente() = default;
    Cliente(int idCliente, string nombreCliente){
      this -> idCliente = idCliente;
      this -> nombreCliente = nombreCliente;
    }
    int getId() {
        return idCliente;
    }
    string getnombreCliente() {
        return nombreCliente;
    }
    vector <Pedido> gethistorialPedidos() {
        return historialPedidos;
    }
    void agregarPedido(Pedido nombre_variable_pedido){
      historialPedidos.push_back(nombre_variable_pedido);
    }
    void eliminarUltimoPedido(){
      historialPedidos.pop_back();
    }
};
#endif