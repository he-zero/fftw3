% function to 1D fft.
% N:the num of data to fft
% in:input data
% out: output data
% FFTW_FORWARD:fft

#include"fftw3.h"

using namespace std;

void fft(int N, fftw_complex *in, fftw_complex *out)
{
  fftw_plan plan = fftw_plan_dft_1d(N, in, out, FFTW_FORWARD, FFTW_ESTIMATE);
  fftw_execute(plan);
  fftw_destroy_plan(plan);
  fftw_cleanup();
}
