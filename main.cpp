#include <iostream>
#include <cstdlib>
//#include "/lib/menu.h"

using namespace std;


string menu_list="MENU PRINCIPAL,PASAJES,HOTELES,INFROMES,CONSULTAS,CONFIGURACION,SALIR";
string  _pasajes_list="AGREGAR, MODIFICAR, ELIMINAR, LISTAR, BUSCAR";
string  _hotels_list="";
string  _info_list="";
string  _qries_list="";
string _config_list="";

//MENU PRINCIPAL

//PASAJES
void _m_pasajes();
    void _p_add(); //agregar
    void _p_mod(); //editar
    void _p_del(); // elimintar
    void _p_list(); //listar
    void _p_srch(); //buscar


//HOTELES
void _m_pasajes();
    void _h_add(); //agregar
    void _h_mod(); //editar
    void _h_del(); // elimintar
    void _h_list(); //listar
    void _h_srch(); //buscar


//INFORMES
void _m_informes();
    void _inf_rc_tp(); // por tipo
    void _inf_rc_ttl(); // recaudacion total
    void _inf_rc_dt(); // por destino
    void _inf_rc_fecha(); //por fecha
    void _inf_rc_tpy(); // tipo de pago
    void _inf_rc_its(); // hoteles y excursiones incluidas
    void _inf_rc_admin(); // por admin

//CONSULTAS
void _m_consultas(); 
    void _cs_vuelo(); //por vuelo
    void _cs_psgrs(); //pasajeros
    void _cs_ps_pasajero(); // pasajero
    void _cs_ps_destino(); // destino
    void _cs_ps_fecha(); // fecha
    void _cs_vuelo(); // vuelo

//CONFIGURACION
void _m_config();
    void c_cambiar_pass();
    void c_save_to_csv();

void a_admin(); //ADMIN
     void _admin_add(); //agregar registro 
    void _admin_del(); // eliminar 
    void _admin_mod(); // modificar 
    void _admin_srh(); //buscar

//TRANSPORTE //ADMIN!
void _m_transporte(){};
    void a_trs_add(){}; //nuevo registro
    void a_trs_mod(){}; //editar
    void a_trs_del(){}; // eliminar
    void a_trs_srch(){}; //buscar
    void a_trs_listby(){}; //listar
    void a_trs_disable(){}; // habilitar/deshhabilitar vehiculo

//DESTINOS //ADMIN!
void _m_destinos(){};
    void a_dst_add(){}; //agreagar
    void a_dst_mod(){}; //modifiar
    void a_dst_del(){}; //eliminar
    void a_dst_list(){} //listar
    void a_dst_search(){}; //buscar
