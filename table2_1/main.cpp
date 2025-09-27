#include <iostream>
#include <cmath>

int main() {

  double signal[512];  //holds the signal
  int signal_size = 512;

  double mean = 0.0;
  
  //find the mean
  for(int i = 0; i < signal_size; i++) {
    mean = mean + signal[i];
  }
  
  mean = mean/signal_size;

  double variance = 0.0;

  for(int i = 0; i < signal_size; i++) {
    variance = variance + std::pow((signal[i]-mean), 2);
  }

  variance = variance/(signal_size - 1);

  double standard_deviation = std::sqrt(variance);

  std::cout << "Mean: " << mean << " Standard Deviation: " << standard_deviation << "\n";
  
  return 0;
}
