/****************************************************
TC1030 - Equipo 8
Proyecto Integrador
Video.hpp
*****************************************************/

#ifndef Video_hpp
#define Video_hpp

#include <iostream>
#include <string>
#include <vector>

class Video {
    protected: 
        // Atributos
        int id, duracion, calificacion;
        std::string genero, nombre;

    public: 
        // Metodos
        // Constructor
        Video();
        Video(int _id, int _duracion, int _calificacion, std::string _genero, std::string _nombre);

        // Setters
        int getID();
        std::string getNombre();
        int getDuracion();
        std::string getGenero();
        int getCalificacion();

        // Getters
        void setID(int _id);
        void setNombre(std::string _nombre);
        void setDuracion(int _duracion);
        void setGenero(std::string _genero);
        void setCalificacion(int _calificacion);
        void mostrarVideo();

        // Metodos adicionales
        virtual void imprimir(int _calificacion);
};

#endif /* Video_hpp */