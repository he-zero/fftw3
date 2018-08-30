% function to 1D ifft.
% N:the num of data to ifft
% in:input data
% out: output data
% FFTW_BACKWARD:ifft

#include"fftw3.h"

#define REAL 0
#define IMAG 1

using namespace std;

void ifft(int N, fftw_complex *in, fftw_complex *out)
{
  fftw_plan plan = fftw_plan_dft_1d(N, in, out, FFTW_BACKWARD, FFTW_ESTIMATE);
  fftw_execute(plan);
  fftw_destroy_plan(plan);
  fftw_cleanup();
  for (size_t i = 0; i < N; i++) 
  { 
    out[i][REAL] /= N; 
    out[i][IMAG] /= N; 
   } 
} 
