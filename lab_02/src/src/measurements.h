#pragma once
#include "algorithms.h"
#include <functional>
#include <cstddef>

#define RESET   "\033[0m"           // ����� ������
#define RED     "\033[31m"          // ������� ����
#define BLUE    "\033[34m"          // ����� ����

typedef std::function<Matrix(const Matrix&, const Matrix&)> MatrixFunction;

double MeasureTime(const Matrix& m1, const Matrix& m2, MatrixFunction fn);

void OutputTimeMeasurements(int start, int maxLen, int iters);