void printO(int N, int M)
    {
        int r,c;
        if(N>0&&M>0)
          {  for (r=0;r<N;r++)
            { 
               for(c=0;c<M;c++)
                {
                    cout << "O";
                }
               cout << "\n";
            }
          }
          else
          {
              cout << "Invalid input";
          }
    }
   