#include "../logicaDeDatos/estructuras.h"
#include "crearConexion.h"
#include "../logicaDeNegocio/fechas.h"
#ifndef getData
#define getData

extern int numFilas;
Usuario **getListaUsuarios();

//Devuelve el numero de filas que hay en una tabla de la BD.
int getNumFilas(char *tabla);

//Devuelve un 1 si los datos de acceso son correctos, o un 0 si no lo son.
int comprobarUsuario(char *usuario, char *contrasenya);

//Devuelve un 1 si los datos de acceso son correctos, o un 0 si no lo son.
int comprobarAdministrador(char *usuario, char *contrasenya);

//Devuelve un 0 si la fecha para un torneo esta libre, o un 1 si esta cogida.
int fechaCogida(Fecha fecha);

//Devuelve un puntero al usuario cuyo username es el provisto como parametro.
Usuario *getUsuario(char* nomUsuario);

//Devuelve un 1 si ningun usuario de la pareja esta apuntado al torneo y un 0 en caso contrario.
int parejaLibre(Fecha fecTorn, Usuario usu1, Usuario usu2);

//Devuelve las reservas que se han realizado hasta el momento
int*  getreservas(char* pista,char* fecha,char*hora);

//Devuelve el tamanyo del array de articulos

int tamanyoLista(int COD_TIPO_ART);

//Devueve un array de articulos

ListaArticulos *getArticulo(int COD_TIPO_ART, int tamanyo);

//Devuelve el numero de pistas de un tipo especifico disponibles en la fecha y hora indicadas por el usuario.
int getNumPistas(char *pista, char *fecha, char *hora);

//Imprime los torneos cuyo periodo de inscripcion esta abierto.
int imprimirProximosTorneos();

//Devuelve un 1 si las inscripciones del torneo estan abiertas y un 0 si estan cerradas.
int inscripcionesAbiertas(int codTorneo);

//Devuelve el codigo de pareja de los usuario provistos si la pareja esta registrada, y un 0 si no lo esta.
int getCodigoPareja(Usuario usuario1, Usuario usuario2);

//Devuelve el numero de parejas inscritas al torneo provisto como parametro.
int getNumInscripciones(int codTorneo);

//Devuelve un array con los codigos de las parejas inscritas al torneo provisto como parametro.
int *getInscripciones(int codTorneo);

//Devuelve un 0 si el torneo esta cerrado pero no tiene un ganador asignado, y un 1 en caso contrario.
int ganadorAsignado(int codTorneo);

//Imprime los torneos cuyo periodo de inscripcion esta cerrado, pero no tienen un ganador asignado.
int imprimirTorneosCerrados();

//Devuelve un 1 si la pareja esta inscrita al torneo, y un 0 si no lo esta.
int ganadorValido(int codTorneo, int codPareja);

//Devuelve un 1 si el jugador esta inscrito al torneo, y un 0 si no lo esta.
int estaInscrito(int codTorneo, Usuario usuario);

//Imprime la informacion de los proximos torneos, e indica si el usuario esta apuntado o no.
int imprimirSiguientesTorneos(Usuario usuario);

//Devuelve un 1 si el usuario esta libre, y un 0 si ya esta en uso.
int usuarioLibre(char *nomUsuario);

//Devuelve el tamaño de el registro de la lista de compras
int tamanyoListaCompra();

//Devuelve una lista con el registro de las compras
ListaCompra *getCompras(int tamanyo);

//Devuelve un informe con las reservas
void getReservas( char* fecha);

#endif