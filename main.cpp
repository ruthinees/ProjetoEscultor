#include "sculptor.hpp"

int main() {
  // cria um escultor cuja matriz tem 30x30x10 voxels
  Sculptor eva01(30, 30, 10);

  
  //Primeira linha
  eva01.setColor(0.0,0.0,0.0,1.0); //Preto
  for(int i = 0; i < 3; i++){
    eva01.putVoxel(i, 0, 0);
  }

  eva01.setColor(0.0,0.0,0.0,1.0); //Preto
  for(int i = 19; i < 22; i++){
    eva01.putVoxel(i, 0, 0);
  }

  
  //Secunda linha
  for(int i = 0; i < 10; i++){
    eva01.putVoxel(i, 1, 0);
  }

  eva01.putVoxel(19, 1, 0);

  eva01.setColor(0.26, 1.0, 0.03, 1.0); //Verde

  eva01.putVoxel(20, 1, 0);

  eva01.setColor(0.0,0.0,0.0,1.0); //Preto

  eva01.putVoxel(21, 1, 0);

  
  //Terceira linha
  for(int i = 0; i < 2; i++){
    eva01.putVoxel(i, 2, 0);
  }

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  for(int i = 2; i < 5; i++){
    eva01.putVoxel(i, 2, 0);
  }

  eva01.setColor(1.0, 0.96, 0.26, 1.0); //Amarelo

  eva01.putVoxel(5, 2, 0);

  eva01.setColor(0.0,0.0,0.0,1.0); //Preto

  eva01.putVoxel(6, 2, 0);

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  eva01.putVoxel(7, 2, 0);

  eva01.setColor(1.0, 0.96, 0.26, 1.0); //Amarelo

  eva01.putVoxel(8, 2, 0);

  eva01.setColor(0.0,0.0,0.0,1.0); //Preto

  eva01.putVoxel(9, 2, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(18, 2, 0);

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  eva01.putVoxel(19, 2, 0);

  eva01.setColor(0.26, 1.0, 0.03, 1.0); //Verde

  eva01.putVoxel(20, 2, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0);

  eva01.putVoxel(21, 2, 0);

  
  //Quarta linha
  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  eva01.putVoxel(0, 3, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(1, 3, 0); 

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  eva01.putVoxel(2, 3, 0); 

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 3; i < 6; i++){
    eva01.putVoxel(i, 3, 0);
  }

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  for(int i = 6; i < 8; i++){
    eva01.putVoxel(i, 3, 0);
  }

  eva01.setColor(1.0, 0.96, 0.26, 1.0); //Amarelo

  eva01.putVoxel(8, 3, 0);

  eva01.setColor(0.0,0.0,0.0,1.0); //Pre

  eva01.putVoxel(9, 3, 0);

  eva01.setColor(0.0,0.0,0.0,1.0); //Preto

  eva01.putVoxel(17, 3, 0);

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  eva01.putVoxel(18, 3, 0);

  eva01.setColor(0.26, 1.0, 0.03, 1.0); //Verde

  for(int i = 19; i < 21; i++){
    eva01.putVoxel(i, 3, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(21, 3, 0);

  
  //Quinta linha
  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 0; i < 2; i++){
    eva01.putVoxel(i, 4, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 2; i < 5; i++){
    eva01.putVoxel(i, 4, 0);
  }

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  for(int i = 5; i < 7; i++){
    eva01.putVoxel(i, 4, 0);
  }

  eva01.setColor(1.0, 0.96, 0.26, 1.0); //Amarelo

  eva01.putVoxel(7, 4, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 8; i < 10; i++){
    eva01.putVoxel(i, 4, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(17, 4, 0);

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  eva01.putVoxel(18, 4, 0);

  eva01.setColor(0.26, 1.0, 0.03, 1.0); //Verde

  eva01.putVoxel(19, 4, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(20, 4, 0);
  
  //Sexta linha
  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 0; i < 2; i++){
    eva01.putVoxel(i, 5, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(2, 5, 0);

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  for(int i = 3; i < 6; i++){
    eva01.putVoxel(i, 5, 0);
  }

  eva01.setColor(1.0, 0.96, 0.26, 1.0); //Amarelo

  for(int i = 6; i < 8; i++){
    eva01.putVoxel(i, 5, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(8, 5, 0);

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  eva01.putVoxel(9, 5, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(10, 5, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(16, 5, 0);

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  for(int i = 17; i < 21; i++){
    eva01.putVoxel(i, 5, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(20, 5, 0);
  

  //Sétima linha
  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 0; i < 2; i++){
    eva01.putVoxel(i, 6, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 2; i < 4; i++){
    eva01.putVoxel(i, 6, 0);
  }

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  for(int i = 4; i < 6; i++){
    eva01.putVoxel(i, 6, 0);
  }

  eva01.setColor(1.0, 0.96, 0.26, 1.0); //Amarelo

  for(int i = 6; i < 8; i++){
    eva01.putVoxel(i, 6, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(8, 6, 0);

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  for(int i = 9; i < 11; i++){
    eva01.putVoxel(i, 6, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(11, 6, 0);

  eva01.putVoxel(15, 6, 0);

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  for(int i = 16; i < 20; i++){
    eva01.putVoxel(i, 6, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(20, 6, 0);

  
  //Oitava linha
  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 0; i < 3; i++){
    eva01.putVoxel(i, 7, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 3; i < 5; i++){
    eva01.putVoxel(i, 7, 0);
  }

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  eva01.putVoxel(5, 7, 0);

  eva01.setColor(1.0, 0.96, 0.26, 1.0); //Amarelo

  eva01.putVoxel(6, 7, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 7; i < 9; i++){
    eva01.putVoxel(i, 7, 0);
  }

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  for(int i = 9; i < 12; i++){
    eva01.putVoxel(i, 7, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(12, 7, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 14; i < 16; i++){
    eva01.putVoxel(i, 7, 0);
  }

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  eva01.putVoxel(16, 7, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(17, 7, 0);

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  eva01.putVoxel(18, 7, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 19; i < 21; i++){
    eva01.putVoxel(i, 7, 0);
  }

  
  //Nona linha
  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 0; i < 3; i++){
    eva01.putVoxel(i, 8, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto
  
  for(int i = 3; i < 5; i++){
    eva01.putVoxel(i, 8, 0);
  }

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  eva01.putVoxel(5, 8, 0);

  eva01.setColor(1.0, 0.96, 0.26, 1.0); //Amarelo

  eva01.putVoxel(6, 8, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(7, 8, 0);

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  for(int i = 8; i < 11; i++){
    eva01.putVoxel(i, 8, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(11, 8, 0);

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  eva01.putVoxel(12, 8, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(13, 8, 0);

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  for(int i = 14; i < 16; i++){
    eva01.putVoxel(i, 8, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(16, 8, 0);

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  eva01.putVoxel(17,8,0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(18, 8, 0);

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  eva01.putVoxel(19,8,0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(20, 8, 0);

  //Décima linha
  eva01.setColor(0.62, 0.21, 0.82, 1.0); //Roxo claro

  eva01.putVoxel(0, 9, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 1; i < 4; i++){
    eva01.putVoxel(i, 9, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 4; i < 6; i++){
    eva01.putVoxel(i, 9, 0);
  }

  eva01.setColor(1.0, 0.96, 0.26, 1.0); //Amarelo

  eva01.putVoxel(6, 9, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(7, 9, 0);

  eva01.setColor(1.0, 0.7, 0.26, 1.0); //Laranja

  eva01.putVoxel(8, 9, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 9; i < 11; i++){
    eva01.putVoxel(i, 9, 0);
  }

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  for(int i = 11; i < 13; i++){
    eva01.putVoxel(i, 9, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 13; i < 16; i++){
    eva01.putVoxel(i, 9, 0);
  }

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  for(int i = 16; i < 20; i++){
    eva01.putVoxel(i, 9, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(20,9,0);

  
  //Décima primeira linha
  eva01.setColor(0.62, 0.21, 0.82, 1.0); //Roxo claro

  for(int i = 0; i < 2; i++){
    eva01.putVoxel(i, 10, 0);
  }

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 2; i < 5; i++){
    eva01.putVoxel(i, 10, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 5; i < 11; i++){
    eva01.putVoxel(i, 10, 0);
  }

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  for(int i = 11; i < 13; i++){
    eva01.putVoxel(i, 10, 0);
  }

  eva01.setColor(0.26, 1.0, 0.03, 1.0); //Verde

  for(int i = 13; i < 15; i++){
    eva01.putVoxel(i, 10, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 15; i < 22; i++){
    eva01.putVoxel(i, 10, 0);
  }

  //Décima Segunda Linha
  eva01.setColor(0.62, 0.21, 0.82, 1.0); //Roxo claro

  for(int i = 0; i < 2; i++){
    eva01.putVoxel(i, 11, 0);
  }

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 2; i < 6; i++){
    eva01.putVoxel(i, 11, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(6, 11, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 7; i < 9; i++){
    eva01.putVoxel(i, 11, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 9; i < 11; i++){
    eva01.putVoxel(i, 11, 0);
  }

  eva01.setColor(0.26, 1.0, 0.03, 1.0); //Verde

  for(int i = 11; i < 14; i++){
    eva01.putVoxel(i, 11, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(14, 11, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  eva01.putVoxel(15, 11, 0);

  eva01.setColor(0.61, 0.0, 0.03, 1.0); //Rosa Avermelhado Saturado

  eva01.putVoxel(16, 11, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 17; i < 21; i++){
    eva01.putVoxel(i, 11, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(21, 11, 0);

  
  //Décima Terceira Linha
  eva01.setColor(0.62, 0.21, 0.82, 1.0); //Roxo claro

  for(int i = 0; i < 3; i++){
    eva01.putVoxel(i, 12, 0);
  }

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 3; i < 5; i++){
    eva01.putVoxel(i, 12, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 5; i < 7; i++){
    eva01.putVoxel(i, 12, 0);
  }

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 7; i < 9; i++){
    eva01.putVoxel(i, 12, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(9, 12, 0);

  eva01.setColor(0.26, 1.0, 0.03, 1.0); //Verde

  for(int i = 10; i < 13; i++){
    eva01.putVoxel(i, 12, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(13, 12, 0);

  eva01.setColor(0.61, 0.0, 0.03, 1.0); //Rosa Avermelhado Saturado

  eva01.putVoxel(14, 12, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  eva01.putVoxel(15, 12, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 16; i < 21; i++){
    eva01.putVoxel(i, 12, 0);
  }

  
  //Décima Quarta Linha
  eva01.setColor(0.62, 0.21, 0.82, 1.0); //Roxo claro

  for(int i = 0; i < 4; i++){
    eva01.putVoxel(i, 13, 0);
  }

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  eva01.putVoxel(4, 13, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(5, 13, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 6; i < 10; i++){
    eva01.putVoxel(i, 13, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 10; i < 13; i++){
    eva01.putVoxel(i, 13, 0);
  }

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 13; i < 15; i++){
    eva01.putVoxel(i, 13, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(15, 13, 0);

  eva01.setColor(1.0, 1.0, 1.0, 1.0); //Branco

  for(int i = 16; i < 18; i++){
    eva01.putVoxel(i, 13, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 18; i < 22; i++){
    eva01.putVoxel(i, 13, 0);
  }
  
  
  //Décima Quinta Linha
  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(0, 14, 0);

  eva01.setColor(0.62, 0.21, 0.82, 1.0); //Roxo claro

  for(int i = 1; i < 4; i++){
    eva01.putVoxel(i, 14, 0);
  }

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  eva01.putVoxel(4, 14, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(5, 14, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 6; i < 14; i++){
    eva01.putVoxel(i, 14, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(14, 14, 0);

  eva01.setColor(1.0, 1.0, 1.0, 1.0); //Branco

  for(int i = 15; i < 17; i++){
    eva01.putVoxel(i, 14, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 17; i < 19; i++){
    eva01.putVoxel(i, 14, 0);
  }

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 19; i < 22; i++){
    eva01.putVoxel(i, 14, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(22, 14, 0);


  //Décima Sexta Linha
  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(1, 15, 0);

  eva01.setColor(0.62, 0.21, 0.82, 1.0); //Roxo claro

  for(int i = 2; i < 4; i++){
    eva01.putVoxel(i, 15, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(4, 15, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 5; i < 9; i++){
    eva01.putVoxel(i, 15, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 9; i < 11; i++){
    eva01.putVoxel(i, 15, 0);
  }

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 11; i < 14; i++){
    eva01.putVoxel(i, 15, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 14; i < 18; i++){
    eva01.putVoxel(i, 15, 0);
  }

  eva01.setColor(0.61, 0.0, 0.03, 1.0); //Rosa Avermelhado Saturado

  eva01.putVoxel(18, 15, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  eva01.putVoxel(19, 15, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 20; i < 22; i++){
    eva01.putVoxel(i, 15, 0);
  }

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  eva01.putVoxel(22, 15, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(23, 15, 0);


  //Décima Sétima Linha
  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 2; i < 4; i++){
    eva01.putVoxel(i, 16, 0);
  }

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 4; i < 7; i++){
    eva01.putVoxel(i, 16, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 7; i < 9; i++){
    eva01.putVoxel(i, 16, 0);
  }

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  for(int i = 9; i < 11; i++){
    eva01.putVoxel(i, 16, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(11, 16, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 12; i < 19; i++){
    eva01.putVoxel(i, 16, 0);
  }

  eva01.setColor(0.61, 0.0, 0.03, 1.0); //Rosa Avermelhado Saturado

  eva01.putVoxel(19, 16, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(20, 16, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(22, 16, 0);

  eva01.setColor(0.26, 1.0, 0.03, 1.0); //Verde

  eva01.putVoxel(23, 16, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(24, 16, 0);


  //Décima Oitava Linha
  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 0; i < 3; i++){
    eva01.putVoxel(i, 17, 0);
  }

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 3; i < 6; i++){
    eva01.putVoxel(i, 17, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(6, 17, 0);

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  for(int i = 7; i < 11; i++){
    eva01.putVoxel(i, 17, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(11, 17, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 12; i < 19; i++){
    eva01.putVoxel(i, 17, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(19, 17, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(23, 17, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  eva01.putVoxel(24, 17, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(25, 17, 0);


  //Décima Nona Linha
  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(0, 18, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 1; i < 5; i++){
    eva01.putVoxel(i, 18, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(5, 18, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(7, 18, 0);

  eva01.setColor(0.1, 0.21, 1.0, 1.0); //Azul

  for(int i = 8; i < 10; i++){
    eva01.putVoxel(i, 18, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(10, 18, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 11; i < 16; i++){
    eva01.putVoxel(i, 18, 0);
  }

  eva01.setColor(0.62, 0.21, 0.82, 1.0); //Roxo claro

  for(int i = 16; i < 19; i++){
    eva01.putVoxel(i, 18, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(19, 18, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(24, 18, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  eva01.putVoxel(25, 18, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(26, 18, 0);


  //Vigésima Linha
  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(1, 19, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 2; i < 4; i++){
    eva01.putVoxel(i, 19, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(4, 19, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 8; i < 10; i++){
    eva01.putVoxel(i, 19, 0);
  }

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  for(int i = 10; i < 12; i++){
    eva01.putVoxel(i, 19, 0);
  }

  eva01.setColor(0.62, 0.21, 0.82, 1.0); //Roxo claro

  for(int i = 12; i < 17; i++){
    eva01.putVoxel(i, 19, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 17; i < 19; i++){
    eva01.putVoxel(i, 19, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(25, 19, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro
  
  eva01.putVoxel(26, 19, 0);

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(27, 19, 0);


  //Vigésima Primeira Linha
  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 2; i < 4; i++){
    eva01.putVoxel(i, 20, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  eva01.putVoxel(8, 20, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  eva01.putVoxel(9, 20, 0);

  eva01.setColor(0.62, 0.21, 0.82, 1.0); //Roxo claro

  for(int i = 10; i < 13; i++){
    eva01.putVoxel(i, 20, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 1.0); //Preto

  for(int i = 13; i < 18; i++){
    eva01.putVoxel(i, 20, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 0.1); //Preto

  for(int i = 26; i < 28; i++){
    eva01.putVoxel(i, 20, 0);
  }


  //Vigésima Segunda Linha
  eva01.setColor(0.0, 0.0, 0.0, 0.1); //Preto

  eva01.putVoxel(7, 21, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  eva01.putVoxel(8, 21, 0);

  eva01.setColor(0.62, 0.21, 0.82, 1.0); //Roxo claro

  for(int i = 9; i < 15; i++){
    eva01.putVoxel(i, 21, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 0.1); //Preto

  eva01.putVoxel(15, 21, 0);

  //Vigésima Terceira Linha
  eva01.setColor(0.0, 0.0, 0.0, 0.1); //Preto

  eva01.putVoxel(6, 22, 0);

  eva01.setColor(0.44, 0.0, 0.67, 0.1); //Roxo escuro

  eva01.putVoxel(7, 22, 0);

  eva01.setColor(0.62, 0.21, 0.82, 1.0); //Roxo claro

  for(int i = 8; i < 13; i++){
    eva01.putVoxel(i, 22, 0);
  }

  eva01.setColor(0.0, 0.0, 0.0, 0.1); //Preto

  for(int i = 13; i < 15; i++){
    eva01.putVoxel(i, 22, 0);
  }

  //Vigésima Quarta Linha
  eva01.setColor(0.0, 0.0, 0.0, 0.1);

  for(int i = 7; i < 14; i++){
    eva01.putVoxel(i, 23, 0);
  }

  
  //grava a escultura digital no arquivo "eva01.off"
  eva01.writeOFF("eva01.off");
}
