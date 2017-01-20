//Me

int extraNumber(int a, int b, int c) {
  int output = 0;
    
  if(a != b) {
      if(a != c) {
          output = a;
      } else {
          output = b;
      }
  } else {
      output = c;
  }

  return output;
}

//Master
int extraNumber(int A, int B, int C) {
  if(A == B)
    return C;
  else if(A==C)
    return B;
  else 
    return A;       
}
