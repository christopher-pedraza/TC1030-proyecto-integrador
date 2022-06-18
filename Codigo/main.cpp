#include "Peliculas.hpp"
#include "Series.hpp"
#include <fstream>
#include <iostream>

std::vector<Pelicula> peliculas;
std::vector<Serie> series;
std::vector<Video> videos;



void consultarPelicula() {
    int id = 0;
    std::cout << "Introduce el ID de la pelicula:" << std::endl;
    std::cin >> id;
    if (id <= peliculas.size() && id > 0) {
        peliculas[id-1].mostrarVideo();
        std::cout << std::endl;
    } else {
        std::cout << "ID inválido" << std::endl;
    }
}

void consultarSerie() {
    int id = 0;
    std::cout << "Introduce el id de la serie:" << std::endl;
    std::cin >> id;
    std::cout << std::endl;

    if (id <= series.size() && id > 0) {
        series[id-1].mostrarVideo();
        std::cout << "\n"<<"Episodios: "<<std::endl;
        series[id-1].mostrarEpisodios();
        std::cout << std::endl;
    } else {
        std::cout << "ID inválido" << std::endl;
    }
}

void consultarSerieCalificacion() {
    int calificacion = 0;
    std::cout << "Introduce la calificacion deseada para consultar:" << std::endl;
    std::cin >> calificacion;

    for (int i = 0; i < series.size(); i++) {
        series[i].imprimir(calificacion);
    }
}

void consultarPeliculaCalificacion() {
    int calificacion = 0;
    std::cout << "Introduce la calificacion deseada para consultar:" << std::endl;
    std::cin >> calificacion;

    for (int i = 0; i < peliculas.size(); i++) {
        peliculas[i].imprimir(calificacion);
    }
}

void consultarVideoCalificacion() {
    int calificacion = 0;
    std::cout << "Introduce la calificacion deseada para consultar:" << std::endl;
    std::cin >> calificacion;

    for (int i = 0; i < videos.size(); i++) {
        videos[i].imprimir(calificacion);
    }
}


void agregarVideos() {
    
    Video video1 = Video(1, 20, 2, "Terror", "Básicos de Electromagnetismo");
    videos.push_back(video1);
}


void menu() {
    // Se declara la variable de las opciones
    int opcion = -1;

    do {
        // Se despliega el menu de opciones
        std::cout << "\n\n•••••••••••••••••••••••••••••••••••" <<
            "\nMenu de opciones" <<
            "\n1)  Consultar pelicula" <<
            "\n2)  Consultar serie" <<
            "\n3)  Consultar serie por calificación" <<
            "\n4)  Consultar película por calificación" <<
            "\n5)  Consultar video por calificación" <<
            "\n6)  cargar archivo de datos" <<
            "\n0) Salir del programa" <<
            "\nIntroduce la opción que desea desplegar: ";

        // Se pide al usuario que introduzca un numero
        std::cin >> opcion;

        std::cout << "•••••••••••••••••••••••••••••••••••\n\n" << std::endl;

        switch(opcion) {
            case 0: { // Opcion para salir
                std::cout << std::endl << "Gracias por usar el programa!\n";
                break;
            }
            case 1: {
                consultarPelicula();
                break;
            }
            case 2: {
                consultarSerie();
                break;
            }
            case 3: {
                consultarSerieCalificacion();
                break;
            }
            case 4: {
                consultarPeliculaCalificacion();
                break;
            }
            case 5: {
                consultarVideoCalificacion();
                break;
            } 
            case 6: {
                Series data;
                Peliculas data1;
                std::string nombreseries,nombreepisodios,nombrePeliculas;
                std::cout<<"cual es el nombre del archivo de series?"<<std::endl;
                std::cin>>nombreseries;
                std::cout<<"cual es el nombre del archivo de episodios?"<<std::endl;
                std::cin>>nombreepisodios;
                std::cout<<"cual es el nombre del archivo de Peliculas?"<<std::endl;
                std::cin>>nombrePeliculas;
               
                data.leerArchivo(nombreseries,nombreepisodios);
                data1.leerArchivo(nombrePeliculas);

                series = data.getSeries();
                peliculas = data1.getPeliculas();
                break;
            }          
            default: { // Ninguna de las anteriores
				std::cout << std::endl << "Opcion invalida" << std::endl;
				break;
			}
        }
    } while (opcion != 0);
}

int main() {

    agregarVideos();
    menu(); // Se mantiene en ciclo en esta funcion
    return 0;
} 

