/*
 * funcionesMemoria.h
 *
 *  Created on: 4/9/2015
 *      Author: utnso
 */

#ifndef FUNCIONESMEMORIA_H_
#define FUNCIONESMEMORIA_H_

#include <commons/string.h>
#include <commons/config.h>

#define PUERTO_ESCUCHA "PUERTO_ESCUCHA"
#define IP_SWAP "IP_SWAP"
#define PUERTO_SWAP "PUERTO_SWAP"
#define MAXIMO_MARCOS_POR_PROCESO "MAXIMO_MARCOS_POR_PROCESO"
#define CANTIDAD_MARCOS "CANTIDAD_MARCOS"
#define TAMANIO_MARCO "TAMANIO_MARCO"
#define ENTRADAS_TLB "ENTRADAS_TLB"
#define TLB_HABILITADA "TLB_HABILITADA"
#define RETARDO_MEMORIA "RETARDO_MEMORIA"

typedef struct{
	char* ipPlanificador;
	int puertoPlanificador;
	char* ipMemoria;
	int puertoMemoria;
	int cantidadDeHilos;
	int retardo;
}tipoConfigMemoria;

tipoConfigMemoria crearConfigMemoria();

void destruirConfigMemoria(tipoConfigMemoria* estructuraDeConfiguracion);

void cargarArchivoDeConfiguracionDeMemoria(t_config* archivoDeConfiguracion,tipoConfigMemoria* estructuraDeConfiguracion);



#endif /* FUNCIONESMEMORIA_H_ */