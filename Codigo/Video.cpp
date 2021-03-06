/****************************************************
TC1030 - Equipo 8
Proyecto Integrador
Video.hpp
*****************************************************/

#include "Video.hpp"

Video::Video() {
    id = 0;
    duracion = 0;
    calificacion = 0;
    genero = " ";
    nombre = " ";
}

Video::Video(int _id, int _duracion, int _calificacion, std::string _genero, std::string _nombre) {
    id = _id;
    duracion = _duracion;
    calificacion = _calificacion;
    genero = _genero;
    nombre = _nombre;
}

// Setters
int Video::getID() {
    return id;
}

std::string Video::getNombre() {
    return nombre;
}

int Video::getDuracion() {
    return duracion;
}

std::string Video::getGenero() {
    return genero;
}

int Video::getCalificacion() {
    return calificacion;
}

// Getters
void Video::setID(int _id) {
    id = _id;
}

void Video::setNombre(std::string _nombre) {
    nombre = _nombre;
}

void Video::setDuracion(int _duracion) {
    duracion = _duracion;
}

void Video::setGenero(std::string _genero) {
    genero = _genero;
}

void Video::setCalificacion(int _calificacion) {
    calificacion = _calificacion;
}

void Video::mostrarVideo() {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Duración: " << duracion << std::endl;
    std::cout << "Género: " << genero << std::endl;
    std::cout << "Calificación: " << calificacion << std::endl;
}

void Video::imprimir(int _calificacion) {
    if (calificacion == _calificacion) {
        mostrarVideo();
    }
}