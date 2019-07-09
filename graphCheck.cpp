#include <iostream>
using namespace std;


int main(){

    int** adjacencyMatrix = new int*[35];
    for(int i=0; i<35; i++)
        adjacencyMatrix[i] = new int[35];
    
    int g0 = 0;
    int g1 = 1;
    int r0 = 2;
    int r1 = 3;
    int b0 = 4;
    int b1 = 5;
    int g2 = 6;
    int g3 = 7;
    int g4 = 8;
    int m0 = 9;
    int m1 = 10;
    int g5 = 11;
    int g6 = 12;
    int m2 = 13;
    int m3 = 14;
    int m4 = 15;
    int b2 = 16;
    int b3 = 17;
    int b4 = 18;
    int r2 = 19;
    int r3 = 20;
    int r4 = 21;
    int y0 = 22;
    int y1 = 23;
    int r5 = 24;
    int r6 = 25;
    int y2 = 26;
    int y3 = 27;
    int y4 = 28;
    int b5 = 29;
    int b6 = 30;
    int m5 = 31;
    int m6 = 32;
    int y5 = 33;
    int y6 = 34;
    
    //Initialize the Adjacency Matrix to all 0s.
    for(int i=0; i<35; i++){
        for(int j=0; j<35; j++){
            adjacencyMatrix[i][j] = 0;
        }
    }
    
    
    //Set the edges of the Hamiltonian path.
    for(int i=0; i<34; i++)
        adjacencyMatrix[i][i+1] = 1;
    
    
    /*********Set the edges for vertices of the same color.************/
    //green
    adjacencyMatrix[g0][g1] = 1;
    adjacencyMatrix[g0][g3] = 1;
    adjacencyMatrix[g0][g4] = 1;
    adjacencyMatrix[g0][g5] = 1;
    adjacencyMatrix[g0][g6] = 1;
    adjacencyMatrix[g1][g2] = 1;
    adjacencyMatrix[g1][g3] = 1;
    adjacencyMatrix[g1][g6] = 1;
    adjacencyMatrix[g2][g3] = 1;
    adjacencyMatrix[g2][g6] = 1;
    adjacencyMatrix[g3][g4] = 1;
    adjacencyMatrix[g3][g5] = 1;
    adjacencyMatrix[g3][g6] = 1;
    adjacencyMatrix[g4][g5] = 1;
    adjacencyMatrix[g5][g6] = 1;
    //red
    adjacencyMatrix[r0][r1] = 1;
    adjacencyMatrix[r0][r3] = 1;
    adjacencyMatrix[r0][r4] = 1;
    adjacencyMatrix[r0][r5] = 1;
    adjacencyMatrix[r0][r6] = 1;
    adjacencyMatrix[r1][r2] = 1;
    adjacencyMatrix[r1][r3] = 1;
    adjacencyMatrix[r1][r6] = 1;
    adjacencyMatrix[r2][r3] = 1;
    adjacencyMatrix[r2][r6] = 1;
    adjacencyMatrix[r3][r4] = 1;
    adjacencyMatrix[r3][r5] = 1;
    adjacencyMatrix[r3][r6] = 1;
    adjacencyMatrix[r4][r5] = 1;
    adjacencyMatrix[r5][r6] = 1;
    //blue
    adjacencyMatrix[b0][b1] = 1;
    adjacencyMatrix[b0][b3] = 1;
    adjacencyMatrix[b0][b4] = 1;
    adjacencyMatrix[b0][b5] = 1;
    adjacencyMatrix[b0][b6] = 1;
    adjacencyMatrix[b1][b2] = 1;
    adjacencyMatrix[b1][b3] = 1;
    adjacencyMatrix[b1][b6] = 1;
    adjacencyMatrix[b2][b3] = 1;
    adjacencyMatrix[b2][b6] = 1;
    adjacencyMatrix[b3][b4] = 1;
    adjacencyMatrix[b3][b5] = 1;
    adjacencyMatrix[b3][b6] = 1;
    adjacencyMatrix[b4][b5] = 1;
    adjacencyMatrix[b5][b6] = 1;
    //magenta
    adjacencyMatrix[m0][m1] = 1;
    adjacencyMatrix[m0][m3] = 1;
    adjacencyMatrix[m0][m4] = 1;
    adjacencyMatrix[m0][m5] = 1;
    adjacencyMatrix[m0][m6] = 1;
    adjacencyMatrix[m1][m2] = 1;
    adjacencyMatrix[m1][m3] = 1;
    adjacencyMatrix[m1][m6] = 1;
    adjacencyMatrix[m2][m3] = 1;
    adjacencyMatrix[m2][m6] = 1;
    adjacencyMatrix[m3][m4] = 1;
    adjacencyMatrix[m3][m5] = 1;
    adjacencyMatrix[m3][m6] = 1;
    adjacencyMatrix[m4][m5] = 1;
    adjacencyMatrix[m5][m6] = 1;
    //yellow
    adjacencyMatrix[y0][y1] = 1;
    adjacencyMatrix[y0][y3] = 1;
    adjacencyMatrix[y0][y4] = 1;
    adjacencyMatrix[y0][y5] = 1;
    adjacencyMatrix[y0][y6] = 1;
    adjacencyMatrix[y1][y2] = 1;
    adjacencyMatrix[y1][y3] = 1;
    adjacencyMatrix[y1][y6] = 1;
    adjacencyMatrix[y2][y3] = 1;
    adjacencyMatrix[y2][y6] = 1;
    adjacencyMatrix[y3][y4] = 1;
    adjacencyMatrix[y3][y5] = 1;
    adjacencyMatrix[y3][y6] = 1;
    adjacencyMatrix[y4][y5] = 1;
    adjacencyMatrix[y5][y6] = 1;
    
    
    
    /*********Set the edges for vertices of different colors (if it isn't part of the Hamiltonian path).  Done only when necessary to make the graph persistent.************/
    adjacencyMatrix[g0][m0] = 1;
    adjacencyMatrix[g0][m1] = 1;
    adjacencyMatrix[g0][m2] = 1;
    adjacencyMatrix[g0][m3] = 1;
    adjacencyMatrix[g0][m4] = 1;
    adjacencyMatrix[g0][b2] = 1;
    adjacencyMatrix[g0][b3] = 1;
    adjacencyMatrix[g0][b4] = 1;
    adjacencyMatrix[g0][r2] = 1;
    adjacencyMatrix[g0][r3] = 1;
    adjacencyMatrix[g0][r4] = 1;
    adjacencyMatrix[g0][r5] = 1;
    adjacencyMatrix[g0][r6] = 1;
    adjacencyMatrix[g0][y2] = 1;
    adjacencyMatrix[g0][y3] = 1;
    adjacencyMatrix[g0][y4] = 1;
    adjacencyMatrix[g0][b5] = 1;
    adjacencyMatrix[g0][b6] = 1;
    adjacencyMatrix[g0][m5] = 1;
    adjacencyMatrix[g0][m6] = 1;
    adjacencyMatrix[g0][y5] = 1;
    adjacencyMatrix[g0][y6] = 1;
    
    adjacencyMatrix[g1][r0] = 1;
    adjacencyMatrix[g1][r1] = 1;
    adjacencyMatrix[g1][b0] = 1;
    adjacencyMatrix[g1][b1] = 1;
    adjacencyMatrix[g1][m2] = 1;
    adjacencyMatrix[g1][m3] = 1;
    adjacencyMatrix[g1][m4] = 1;
    adjacencyMatrix[g1][b2] = 1;
    adjacencyMatrix[g1][b3] = 1;
    adjacencyMatrix[g1][b4] = 1;
    adjacencyMatrix[g1][r2] = 1;
    adjacencyMatrix[g1][r3] = 1;
    adjacencyMatrix[g1][r4] = 1;
    adjacencyMatrix[g1][r5] = 1;
    adjacencyMatrix[g1][r6] = 1;
    adjacencyMatrix[g1][y2] = 1;
    adjacencyMatrix[g1][y3] = 1;
    adjacencyMatrix[g1][y4] = 1;
    adjacencyMatrix[g1][b5] = 1;
    adjacencyMatrix[g1][b6] = 1;
    adjacencyMatrix[g1][m5] = 1;
    adjacencyMatrix[g1][m6] = 1;
    adjacencyMatrix[g1][y5] = 1;
    adjacencyMatrix[g1][y6] = 1;
    
    adjacencyMatrix[r0][y2] = 1;
    adjacencyMatrix[r0][y3] = 1;
    adjacencyMatrix[r0][y4] = 1;
    adjacencyMatrix[r0][b5] = 1;
    adjacencyMatrix[r0][b6] = 1;
    adjacencyMatrix[r0][m5] = 1;
    adjacencyMatrix[r0][m6] = 1;
    adjacencyMatrix[r0][y5] = 1;
    adjacencyMatrix[r0][y6] = 1;
    
    adjacencyMatrix[r1][b3] = 1;
    adjacencyMatrix[r1][b4] = 1;
    adjacencyMatrix[r1][y2] = 1;
    adjacencyMatrix[r1][y3] = 1;
    adjacencyMatrix[r1][y4] = 1;
    adjacencyMatrix[r1][b5] = 1;
    adjacencyMatrix[r1][b6] = 1;
    adjacencyMatrix[r1][m5] = 1;
    adjacencyMatrix[r1][m6] = 1;
    adjacencyMatrix[r1][y5] = 1;
    adjacencyMatrix[r1][y6] = 1;
    
    
    adjacencyMatrix[b0][r2] = 1;
    adjacencyMatrix[b0][r3] = 1;
    adjacencyMatrix[b0][r6] = 1;
    adjacencyMatrix[b0][y2] = 1;
    adjacencyMatrix[b0][y3] = 1;
    adjacencyMatrix[b0][y4] = 1;
    adjacencyMatrix[b0][b5] = 1;
    adjacencyMatrix[b0][b6] = 1;
    adjacencyMatrix[b0][m5] = 1;
    adjacencyMatrix[b0][m6] = 1;
    adjacencyMatrix[b0][y5] = 1;
    adjacencyMatrix[b0][y6] = 1;
    
    adjacencyMatrix[b1][m4] = 1;
    adjacencyMatrix[b1][m5] = 1;
    adjacencyMatrix[b1][m6] = 1;
    adjacencyMatrix[b1][y5] = 1;
    adjacencyMatrix[b1][y6] = 1;
    
    adjacencyMatrix[g2][m2] = 1;
    adjacencyMatrix[g2][m3] = 1;
    adjacencyMatrix[g2][m4] = 1;
    adjacencyMatrix[g2][m5] = 1;
    adjacencyMatrix[g2][m6] = 1;
    adjacencyMatrix[g2][y5] = 1;
    adjacencyMatrix[g2][y6] = 1;
    
    adjacencyMatrix[g3][m0] = 1;
    adjacencyMatrix[g3][m1] = 1;
    adjacencyMatrix[g3][m2] = 1;
    adjacencyMatrix[g3][m3] = 1;
    adjacencyMatrix[g3][m4] = 1;
    adjacencyMatrix[g3][m5] = 1;
    adjacencyMatrix[g3][m6] = 1;
    adjacencyMatrix[g3][y5] = 1;
    adjacencyMatrix[g3][y6] = 1;
    
    adjacencyMatrix[g4][m1] = 1;
    adjacencyMatrix[g4][m2] = 1;
    adjacencyMatrix[g4][m3] = 1;
    adjacencyMatrix[g4][m4] = 1;
    adjacencyMatrix[g4][m5] = 1;
    adjacencyMatrix[g4][m6] = 1;
    adjacencyMatrix[g4][y5] = 1;
    adjacencyMatrix[g4][y6] = 1;
    
    adjacencyMatrix[m0][y5] = 1;
    adjacencyMatrix[m0][y6] = 1;
    
    adjacencyMatrix[m1][y5] = 1;
    adjacencyMatrix[m1][y6] = 1;
    
    adjacencyMatrix[g5][m2] = 1;
    
    adjacencyMatrix[m2][y5] = 1;
    adjacencyMatrix[m2][y6] = 1;
    
    adjacencyMatrix[m3][y5] = 1;
    adjacencyMatrix[m3][y6] = 1;
    
    adjacencyMatrix[m4][y5] = 1;
    adjacencyMatrix[m4][y6] = 1;
    
    adjacencyMatrix[b2][m5] = 1;
    adjacencyMatrix[b2][y5] = 1;
    adjacencyMatrix[b2][y6] = 1;
    
    adjacencyMatrix[b3][r2] = 1;
    adjacencyMatrix[b3][y4] = 1;
    adjacencyMatrix[b3][m5] = 1;
    adjacencyMatrix[b3][y5] = 1;
    adjacencyMatrix[b3][y6] = 1;
    
    adjacencyMatrix[b4][y4] = 1;
    adjacencyMatrix[b4][y5] = 1;
    adjacencyMatrix[b4][y6] = 1;
    
    adjacencyMatrix[r2][y2] = 1;
    adjacencyMatrix[r2][y3] = 1;
    adjacencyMatrix[r2][y4] = 1;
    adjacencyMatrix[r2][y5] = 1;
    adjacencyMatrix[r2][y6] = 1;
    
    adjacencyMatrix[r3][y2] = 1;
    adjacencyMatrix[r3][y3] = 1;
    adjacencyMatrix[r3][y4] = 1;
    adjacencyMatrix[r3][y5] = 1;
    adjacencyMatrix[r3][y6] = 1;
    
    adjacencyMatrix[r4][y1] = 1;
    adjacencyMatrix[r4][y2] = 1;
    adjacencyMatrix[r4][y3] = 1;
    adjacencyMatrix[r4][y4] = 1;
    adjacencyMatrix[r4][y5] = 1;
    adjacencyMatrix[r4][y6] = 1;
    
    adjacencyMatrix[r5][y2] = 1;
    
    adjacencyMatrix[b5][y5] = 1;
    
    adjacencyMatrix[b6][y5] = 1;
    
    adjacencyMatrix[m5][y5] = 1;
    
    
    /******Check to make sure the graph satisfies the X-property.*******/
    
    for(int a=0; a<35; a++){
        for(int b=a+1; b<35; b++){
            for(int c=b+1; c<35; c++){
                for(int d=c+1; d<35; d++){
                    
                    if(adjacencyMatrix[a][c] && adjacencyMatrix[b][d] && !adjacencyMatrix[a][d]){
                     
                        cout << a << ", " << b << ", " << c << ", " << d << " violate the X-property." << endl;
                    }
                }
            }
        }
    }
    
    
    
    /*******Check to make sure the graph satisfies the Bar-property.*********/
    for(int i=0; i<35; i++){
        
        for(int k= i+2; k<35; k++){
            
            if(adjacencyMatrix[i][k]){
                
                bool foundPoint = false;
                for(int j=i+1; j<k; j++){
                    
                    if(adjacencyMatrix[i][j] && adjacencyMatrix[j][k]){
                        
                        foundPoint = true;
                        break;
                    }
                    
                }
                
                if(!foundPoint){
                    
                    cout << i << " and " << k << " violate the Bar-property." << endl;
                }
                
            }            
            
        }
        
    }
    
    
    for(int i=0; i<35; i++){
        
        delete adjacencyMatrix[i];
    };
    delete adjacencyMatrix;
    
    return 0;
    
}
