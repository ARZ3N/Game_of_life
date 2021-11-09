#include<iostream>
//#include<conio>
#include<string>
#include<vector>




#define BRD_DIM 20

void init_brd(char arr[][BRD_DIM]){
    for(int i=0; i<BRD_DIM; i++){
        for(int j=0; j<BRD_DIM; j++){
            arr[i][j] = '.';
        }
    }
}
void print_brd(char arr[][BRD_DIM]){
    for(int i=0;i<BRD_DIM; i++){
        for(int j=0; j<BRD_DIM; j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<"\n";
    }
}
void parser(std::string& usrStr, std::vector<std::string> &vec){
    int position=0;
    std::string temp;
    //48 -> '0'
    //57 -> '9'
    //[arg1] [x,y r,b ] 
/**
 * proposed usr input-
 * -n[no. of cell inputs] -s[symbol to represent live cell] [[input coordinates of live cells]]
 */
    while(position<usrStr.length()){
        if(usrStr[position]!=' '){
            temp += usrStr[position];
            if(position == usrStr.length()-1){
                //std::cout<<temp<<"position= "<<position<<"\n";
                vec.push_back(temp);
                temp.clear();    
            }
        }
        else{
            //std::cout<<temp<<"position= "<<position<<"\n";
            vec.push_back(temp);
            temp.clear();
        }
        position += 1;
    }
    
}//end of parser() fn.

void vectorParse(std::vector<std::string> vec){
    std::string temp;
    int n;
    for(int it=0; it<vec.size(); ++it){
        temp = vec[it];
        if(temp[0] == '-'){
            switch(temp[1]){
                case('n'):
                int pos=2, count=0;
                while(temp[pos]=='\0'){
                    pos += 1;
                }
                count = pos - 2;
                pos=2;
                while(temp[pos]!='\0'){
                    
                }

            }
        }
    }
}

void printVector(std::vector<std::string> vec){
    for(int it=0; it<vec.size(); ++it){
        std::cout<<vec[it]<<"\n";
    }
}

 int main(){
    char board[BRD_DIM][BRD_DIM];
    char ch;
    std::string usrCmd="";
    std::vector<std::string> args;
    std::cout<<"/> -Board Init-"<<"\n";
    init_brd(board);
    print_brd(board);
    std::cout<<"/> Input Command--"<<">> ";
    std::getline(std::cin, usrCmd);
    parser(usrCmd, args);
    

    usrCmd.clear();
    args.clear();
    return 0;
 }