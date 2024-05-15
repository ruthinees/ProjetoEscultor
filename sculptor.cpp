#include "sculptor.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

//Definindo construtor da classe
Sculptor::Sculptor(int _nx, int _ny, int _nz){
  //Valores iniciais de nx, ny e nz
  nx = _nx;
  ny = _ny;
  nz = _nz;

  //Valores iniciais de r, g, b, a
  this -> r = 0;
  this -> g = 0;
  this -> b = 0;
  this -> a = 0;

  //Verificando se _nx, _ny e _nz são maiores que 0

  if(nx <= 0 || ny <= 0 || nz <= 0){
      throw std::runtime_error("Dimensões incorretas");
  }
  
  if(nx > 0 && ny >0 && nz >0){
    //Alocando dinamicamente a matrix 3D
    v = new Voxel**[_nx];

    //Alocando o bloco as linhas
    for(int i = 0; i < _nx; i++){
      v[i] = new Voxel*[_ny];
      //Alocando as colunas
      for(int j = 0; j < _ny; j++){
        v[i][j] = new Voxel[_nz];
        //Inicializando os voxels
        for(int k = 0; k < _nz; k++){
          this -> v[i][j][k].r = 0;
          this -> v[i][j][k].g = 0;
          this -> v[i][j][k].b = 0;
          this -> v[i][j][k].a = 0;
          this -> v[i][j][k].show = false;
        }
      }
    }
  }
}

//Definindo destrutor da classe
Sculptor::~Sculptor(){
  for(int i = 0; i < nx; i++){
    for(int j = 0; j < ny; j++){
      //Destruindo as colunas
      delete [] v[i][j];
    }
    //Destruindo as linhas
    delete [] v[i];
  }
  //Destruindo a matrix
  delete [] v;
}

//Definindo método de atribuição de cor
void Sculptor::setColor(float r_, float g_, float b_, float a_){
  //Definindo os valores de r, g, b e a
  r = r_;
  g = g_;
  b = b_;
  a = a_;
}

//Definindo método desenhar um voxel
void Sculptor::putVoxel(int x, int y, int z){

  //Se x<0, recebe nx. Caso contrário, x recebe x;
  x = (x < 0) ? nx: x;
  //Se y<0, recebe ny. Caso contrário, y recebe y;
  y = (y < 0) ? ny: y;
  //Se z<0, recebe nz. Caso contrário, z recebe z;
  z = (z < 0) ? nz: z;
  
  this -> v[x][y][z].show = true;
  this -> v[x][y][z].r = r;
  this -> v[x][y][z].g = g;
  this -> v[x][y][z].b = b;
  this -> v[x][y][z].a = a;
}

//Definindo método de apagar voxel
void Sculptor::cutVoxel(int x, int y, int z){
  v[x][y][z].show = false;
}

//Definindo método de desenhar caixa
void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){

  //Se x0 < 0, recebe 0. Senão, recebe x0
  x0 = (x0 < 0) ? 0 : x0;
  //Se x1 > nx, recebe nx. Senão, recebe x1
  x1 = (x1 > nx) ? nx : x1;
  //Se y0 < 0, recebe 0. Senão, recebe y0
  y0 = (y0 < 0) ? 0 : y0;
  //Se y1 > ny, recebe ny. Senão, recebe y1
  y1 = (y1 > ny) ? ny : y1;
  //Se z0 < 0, recebe 0. Senão, recebe z0
  z0 = (z0 < 0) ? 0 : z0;
  //Se z1 > nz, recebe nz. Senão, recebe z1
  z1 = (z1 > nz) ? nz : z1;
  
  for(int i = x0; i <= x1; i++){
    for(int j = y0; j <= y1; j++){
      for(int k = z0; k <= z1; k++){
        this -> putVoxel(i, j, k);
      }
    }
  }
  
}

//Definindo método de apagar caixa
void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){

  //Se x0 < 0, recebe 0. Senão, recebe x0
  x0 = (x0 < 0) ? 0 : x0;
  //Se x1 > nx, recebe nx. Senão, recebe x1
  x1 = (x1 > nx) ? nx : x1;
  //Se y0 < 0, recebe 0. Senão, recebe y0
  y0 = (y0 < 0) ? 0 : y0;
  //Se y1 > ny, recebe ny. Senão, recebe y1
  y1 = (y1 > ny) ? ny : y1;
  //Se z0 < 0, recebe 0. Senão, recebe z0
  z0 = (z0 < 0) ? 0 : z0;
  //Se z1 > nz, recebe nz. Senão, recebe z1
  z1 = (z1 > nz) ? nz : z1;

  
  for(int i = x0; i <= x1; i++){
    for(int j = y0; j <= y1; j++){
      for(int k = z0; k <= z1; k++){
        cutVoxel(i, j, k);
      }
    }
  }
}

//Definindo método de desenhar esfera
void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius){
  
  int x0, x1, y0, y1, z0, z1;

  //Garantindo que os valores não ultrapassem os limites da esfera

  //Se xcenter - radius < 0, x0 recebe 0. Senão, x0 recebe xcenter - radius
  x0 = (xcenter - radius < 0) ? 0 : xcenter - radius;
  
  //Se xcenter + radius > nx, x1 recebe nx. Senão, x1 recebe xcenter + radius
  x1 = (xcenter + radius > nx) ? nx : xcenter + radius;
  
  //Se ycenter - radius < 0, y0 recebe 0. Senão, y0 recebe ycenter - radius
  y0 = (ycenter - radius < 0) ? 0 : ycenter - radius;
  
  //Se ycenter + radius > ny, y1 recebe ny. Senão, y1 recebe ycenter + radius
  y1 = (ycenter + radius > ny) ? ny : ycenter + radius;

  //Se zcenter - radius < 0, z0 recebe 0. Senão, z0 recebe zcenter - radius
  z0 = (zcenter - radius < 0) ? 0 : zcenter - radius;

  //Se zcenter + radius > nz, z1 recebe nz. Senão, z1 recebe zcenter + radius
  z1 = (zcenter + radius > nz) ? nz : zcenter + radius;

  for(int i = x0; i <= x1; i++){
    for(int j = y0; j <= y1; j++){
      for(int k = z0; k <= z1; k++){
        //Verifica se o voxel está dentro da esfera
        if(i*i + j*j + k*k <= radius*radius){
          putVoxel(i, j, k);
        }
      }
    }
  }
}

//Definindo método de apagar esfera
void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius){

   int x0, x1, y0, y1, z0, z1;
  
  //Garantindo que os valores não ultrapassem os limites da esfera

  //Se xcenter - radius < 0, x0 recebe 0. Senão, x0 recebe xcenter - radius
  x0 = (xcenter - radius < 0) ? 0 : xcenter - radius;

  //Se xcenter + radius > nx, x1 recebe nx. Senão, x1 recebe xcenter + radius
  x1 = (xcenter + radius > nx) ? nx : xcenter + radius;

  //Se ycenter - radius < 0, y0 recebe 0. Senão, y0 recebe ycenter - radius
  y0 = (ycenter - radius < 0) ? 0 : ycenter - radius;

  //Se ycenter + radius > ny, y1 recebe ny. Senão, y1 recebe ycenter + radius
  y1 = (ycenter + radius > ny) ? ny : ycenter + radius;

  //Se zcenter - radius < 0, z0 recebe 0. Senão, z0 recebe zcenter - radius
  z0 = (zcenter - radius < 0) ? 0 : zcenter - radius;

  //Se zcenter + radius > nz, z1 recebe nz. Senão, z1 recebe zcenter + radius
  z1 = (zcenter + radius > nz) ? nz : zcenter + radius;

  for(int i = x0; i <= x1; i++){
    for(int j = y0; j <= y1; j++){
      for(int k = z0; k <= z1; k++){
        //Verifica se o voxel está dentro da esfera
        if(i*i + j*j + k*k <= radius*radius){
          cutVoxel(i, j, k);
        }
      }
    }
  }
}

//Definindo método de desenhar elipse
void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
  
  float x0, x1, y0, y1, z0, z1;

  //Garantindo que os valores não ultrapassem os limites da elipse

  //Se xcenter - rx < 0, x0 recebe 0. Senão, x0 recebe xcenter - rx
  x0 = (xcenter - rx < 0) ? 0 : xcenter - rx;

  //Se xcenter + rx > nx, x1 recebe nx. Senão, x1 recebe xcenter + rx
  x1 = (xcenter + rx > nx) ? nx : xcenter + rx;

  //Se ycenter - ry < 0, y0 recebe 0. Senão, y0 recebe ycenter - ry
  y0 = (ycenter - ry < 0) ? 0 : ycenter - ry;

  //Se ycenter + ry > ny, y1 recebe ny. Senão, y1 recebe ycenter + ry
  y1 = (ycenter + ry > ny) ? ny : ycenter + ry;

  //Se zcenter - rz < 0, z0 recebe 0. Senão, z0 recebe zcenter - rz
  z0 = (zcenter - rz < 0) ? 0 : zcenter - rz;

  //Se zcenter + rz > nz, z1 recebe nz. Senão, z1 recebe zcenter + rz
  z1 = (zcenter + rz > nz) ? nz : zcenter + rz;

  //Variáveis que representam rx, ry e rz ao quadrado
  //São usadas para evitar repetições de cálculos no loop
  //Uso de long long int para evitar overflow
  long long int _rx = rx*rx;
  long long int _ry = ry*ry;
  long long int _rz = rz*rz;
  
  for(int i = x0; i <= x1; i++){
      for(int j = y0; j <= y1; j++){
        for(int k = z0; k <= z1; k++){
          //Verifica se o voxel está dentro da esfera
          if((i * i) / _rx + (j * j) / _ry + (k * k) / _rz <= 1){
            putVoxel(i, j, k);
        }
      }
    }
  }
}

//Definindo método de apagar elipse
void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){

  int x0, x1, y0, y1, z0, z1;

  //Garantindo que os valores não ultrapassem os limites da elipse

  //Se xcenter - rx < 0, x0 recebe 0. Senão, x0 recebe xcenter - rx
  x0 = (xcenter - rx < 0) ? 0 : xcenter - rx;

  //Se xcenter + rx > nx, x1 recebe nx. Senão, x1 recebe xcenter + rx
  x1 = (xcenter + rx > nx) ? nx : xcenter + rx;

  //Se ycenter - ry < 0, y0 recebe 0. Senão, y0 recebe ycenter - ry
  y0 = (ycenter - ry < 0) ? 0 : ycenter - ry;

  //Se ycenter + ry > ny, y1 recebe ny. Senão, y1 recebe ycenter + ry
  y1 = (ycenter + ry > ny) ? ny : ycenter + ry;

  //Se zcenter - rz < 0, z0 recebe 0. Senão, z0 recebe zcenter - rz
  z0 = (zcenter - rz < 0) ? 0 : zcenter - rz;

  //Se zcenter + rz > nz, z1 recebe nz. Senão, z1 recebe zcenter + rz
  z1 = (zcenter + rz > nz) ? nz : zcenter + rz;

  //Variáveis que representam rx, ry e rz ao quadrado
  //São usadas para evitar repetições de cálculos no loop
  //Uso de long long int para evitar overflow
  long long int _rx = rx*rx;
  long long int _ry = ry*ry;
  long long int _rz = rz*rz;

  for(int i = x0; i <= x1; i++){
      for(int j = y0; j <= y1; j++){
        for(int k = z0; k <= z1; k++){
          //Verifica se o voxel está dentro da esfera
          if((i * i) / _rx + (j * j) / _ry + (k * k) / _rz <= 1){
            cutVoxel(i, j, k);
        }
      }
    }
  }
}

//Definindo método de escrever o arquivo OFF do desenho
void Sculptor::writeOFF(const char* filename){

  std::ofstream myFile(filename);

  //Verificando se o arquivo foi aberto corretamente
  if(!myFile.is_open()){
    std::cout << "Erro ao abrir o arquivo" << std::endl;
    exit(1);
  }

  //Variável que representa o número de voxels visíveis
  int nVoxels = 0;

  for(int i = 0; i < nx; i++){
    for(int j = 0; j < ny; j++){
      for(int k = 0; k < nz; k++){
        if(v[i][j][k].show){
          nVoxels++;
        }
      }
    }
  }
  
  myFile << "OFF" << std::endl;
  myFile << nVoxels * 8 << " " << nVoxels * 6 << " 0" << std::endl;

  //Escrevendo os vértices dos voxels desenhados
  for(int i = 0; i < nx; i++){
    for(int j = 0; j < ny; j++){
      for(int k = 0; k < nz; k++){
        if(v[i][j][k].show){
          
          myFile << i - 0.5 << " " << j + 0.5 << " " << k - 0.5 << std::endl;
          myFile << i - 0.5 << " " << j - 0.5 << " " << k - 0.5 << std::endl;
          myFile << i + 0.5 << " " << j - 0.5 << " " << k - 0.5 << std::endl;
          myFile << i + 0.5 << " " << j + 0.5 << " " << k - 0.5 << std::endl;
          myFile << i - 0.5 << " " << j + 0.5 << " " << k + 0.5 << std::endl;
          myFile << i - 0.5 << " " << j - 0.5 << " " << k + 0.5 << std::endl;
          myFile << i + 0.5 << " " << j - 0.5 << " " << k + 0.5 << std::endl;
          myFile << i + 0.5 << " " << j + 0.5 << " " << k + 0.5 << std::endl;
        }
      }
    }
  }

  //Variável que representa o índice do voxel atual
  //Cada voxel possui 8 vértices, essa variável ajuda a representar no arquivo onde está cada vértice
  int contVoxel = 0;
  
  //Escrevendo a quantidade de vértices da face e as seguintes propriedades da face:
  //Posição dos vértices, r, g e b e a transparência
  for(int i = 0; i < nx; i++){
    for(int j = 0; j < ny; j++){
      for(int k = 0; k < nz; k++){
        if(v[i][j][k].show){
          
          myFile << "4 " << contVoxel * 8 + 0 << " " << contVoxel * 8 + 3 << " " << contVoxel * 8 + 2 << " " << contVoxel * 8 + 1 << " " << v[i][j][k].r << ".0 " << v[i][j][k].g << ".0 " << v[i][j][k].b << ".0 " << v[i][j][k].a << ".0 " << std::endl;
          
          myFile << "4 " << contVoxel * 8 + 4 << " " << contVoxel * 8 + 5 << " " << contVoxel * 8 + 6 << " " << contVoxel * 8 + 7 << " " << v[i][j][k].r << ".0 " << v[i][j][k].g << ".0 " << v[i][j][k].b << ".0 " << v[i][j][k].a << ".0 " << std::endl;

          myFile << "4 " << contVoxel * 8 + 0 << " " << contVoxel * 8 + 1 << " " << contVoxel * 8 + 5 << " " << contVoxel * 8 + 4 << " " << v[i][j][k].r << ".0 " << v[i][j][k].g << ".0 " << v[i][j][k].b << ".0 " << v[i][j][k].a << ".0 " << std::endl;

          myFile << "4 " << contVoxel * 8 + 0 << " " << contVoxel * 8 + 4 << " " << contVoxel * 8 + 7 << " " << contVoxel * 8 + 3 << " " << v[i][j][k].r << ".0 " << v[i][j][k].g << ".0 " << v[i][j][k].b << ".0 " << v[i][j][k].a << ".0 " << std::endl;

          myFile << "4 " << contVoxel * 8 + 3 << " " << contVoxel * 8 + 7 << " " << contVoxel * 8 + 6 << " " << contVoxel * 8 + 2 << " " << v[i][j][k].r << ".0 " << v[i][j][k].g << ".0 " << v[i][j][k].b << ".0 " << v[i][j][k].a << ".0 " << std::endl;

          myFile << "4 " << contVoxel * 8 + 1 << " " << contVoxel * 8 + 2 << " " << contVoxel * 8 + 6 << " " << contVoxel * 8 + 5 << " " << v[i][j][k].r << ".0 " << v[i][j][k].g << ".0 " << v[i][j][k].b << ".0 " << v[i][j][k].a << ".0 " << std::endl;

          contVoxel++;
        }
      }
    }
  }

  //Fechar arquivo

  myFile.close();
  
}




