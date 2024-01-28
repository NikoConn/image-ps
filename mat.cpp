#include "mat.h"
#include <stdexcept>

template<class T> Mat<T>::Mat(int rows, int cols): rows(rows), cols(cols) {
   data.resize(rows, std::vector<T>(cols));
}

template<class T> T Mat<T>::at(int row, int col) {
    if (row < 0 || row >= rows || col < 0 || col >= cols) {
        throw std::out_of_range("invalid matrix position");
    }
    return this->data[row][col];
}

template<class T> void Mat<T>::set(int row, int col, T value) {
    data[row][col] = value;
}

template class Mat<int>;
template class Mat<unsigned char>;
