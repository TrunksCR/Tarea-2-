cmake_minimum_required(VERSION 3.10)
project(tarea)

set(CMAKE_CXX_STANDARD 11)

# Ruta a la carpeta de SFML (ajusta según tu instalación)
set(SFML_DIR "C:/Users/jjdua/Desktop/bibliotecas/SFML-2.6.0")

# Encontrar las bibliotecas de SFML
find_package(SFML 2.6 COMPONENTS graphics window system REQUIRED)

# Agregar el ejecutable
add_executable(tarea main.cpp)

# Vincular las bibliotecas de SFML
target_link_libraries(TareaExtraclase2 ${SFML_LIBRARIES})