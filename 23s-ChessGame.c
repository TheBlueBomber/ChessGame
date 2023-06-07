//MarkK. <@:D 6/7/2023
//Chessboard V1.0 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    
char ***chessboard;

char printBoard(char ***);//Function Declaration

chessboard = (char ***)malloc(sizeof(char **) * 8);
for(int i = 0;i<8;i++){
    chessboard[i] = (char **)malloc(sizeof(char *) *8);
    for(int j = 0;j<8;j++){
        chessboard[i][j] = (char *)malloc(sizeof(char) *8);
        chessboard[i][j] = "[   ]";
    }
}
//Pawns
for(int m = 0;m<8;m++){
    chessboard[1][m] = "[bPN]";
    chessboard[6][m] = "[wPN]";

}
chessboard[0][0] = chessboard[0][7] = "[bRK]";chessboard[7][0] = chessboard[7][7] = "[wRK]";//ROOK
chessboard[0][1] = chessboard[0][6] = "[bKT]";chessboard[7][1] = chessboard[7][6] = "[wKT]";//KNIGHT
chessboard[0][2] = chessboard[0][5] = "[bBP]";chessboard[7][2] = chessboard[7][5] = "[wBP]";//BISHOP
chessboard[0][3] = "[bQN]";chessboard[7][3] = "[wQN]";//Queen
chessboard[0][4] = "[bKG]";chessboard[7][4] = "[wKG]";//King

printBoard(chessboard);

    return 0;
}

//Print Chess Board Function 
char printBoard(char ***chessboard){
    for(int k = 0;k<8;k++){
        for(int l =0;l<8;l++){
            printf("%s",chessboard[k][l]);
            if(l==7){
                puts("");
            }
    
        }
    }
}


//REF
/* https://www.tutorjoes.in/c_programming_tutorial/double_triple_in_c */