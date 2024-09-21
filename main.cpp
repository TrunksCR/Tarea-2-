#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>
#include <fstream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace std::chrono;

// ... (Estructuras de datos: SortedLinkedList, BinarySearchTree)
// ... (Algoritmos de Ordenamiento: bubbleSort, selectionSort, mergeSort)
// ... (Generación de datos de prueba: generateRandomData, generateWorstCaseData, generateBestCaseData)
// ... (Medición de tiempos de ejecución: measureTime)
// ... (Funciones auxiliares para búsqueda y ordenamiento: searchLinkedList, searchBST)
// ... (Función para dibujar una gráfica: drawGraph)

int main() {
    // ... (Parámetros de la prueba, Resultados)

    // ... (Realizar pruebas y guardar resultados en outputFile)

    // Visualización de resultados (ejemplo para Bubble Sort)
    sf::RenderWindow window(sf::VideoMode(800, 600), "Gráfica de Bubble Sort");

    vector<long long> worstCaseTimes, bestCaseTimes, averageCaseTimes;
    // ... (Cargar datos desde outputFile para worstCaseTimes, bestCaseTimes, averageCaseTimes)

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        drawGraph(window, inputSizes, worstCaseTimes, bestCaseTimes, averageCaseTimes, "Bubble Sort");
    }

    // ... (Repetir visualización para otros algoritmos y estructuras de datos)

    return 0;
}