#include "civilizacion.h"

Civilizacion::Civilizacion(){
    //Constructor
}

void Civilizacion::setNombre(string &nombre){
    this->nombre = nombre;
}
string Civilizacion::getNombre() const{
    return nombre;
}

void Civilizacion::setUbicacionX(size_t ubicacion_x){
    this->ubicacion_x = ubicacion_x;
}
size_t Civilizacion::getUbicacionX() const{
    return ubicacion_x;
}

void Civilizacion::setUbicacionY(size_t ubicacion_y){
    this->ubicacion_y = ubicacion_y;
}
size_t Civilizacion::getUbicacionY() const{
    return ubicacion_y;
}

void Civilizacion::setPuntuacion(float puntuacion){
    this->puntuacion = puntuacion;
}
float Civilizacion::getPuntuacion() const{
    return puntuacion;
}