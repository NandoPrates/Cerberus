#############################
#	Cerberus				#						
# @author: Rafael Gorges    #
# @date: 12/18/16			#
#############################

# Verifica a versão do CMake e fornece um nome para o projeto
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.9)
PROJECT(Cerberus C CXX)

SET(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/" ${CMAKE_MODULE_PATH})

# Procura por pacotes requeridos para o programa

#Obtem as bibliotecas que estão no diretório de inclusão "include"
INCLUDE_DIRECTORIES(
    ${CMAKE_CURRENT_SOURCE_DIR}/app/
)

# Obtem globalmente todos os arquivos cpp
FILE(GLOB SOURCES "app/*.cpp")

# Adiciona a variavel global SOURCES para ser adicionada ao executável e compilado
ADD_EXECUTABLE(Cerberus ${SOURCES})

# Diretório de bibliotecas
LINK_DIRECTORIES(/usr/lib)