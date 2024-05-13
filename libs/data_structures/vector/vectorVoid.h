#ifndef INC_VECTORVOID_H
#define INC_VECTORVOID_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct vectorVoid {
    void *data; // указатель на нулевой элемент вектора
    size_t size; // размер вектора
    size_t capacity; // вместимость вектора
    size_t baseTypeSize; // размер базового типа:
} vectorVoid;

// возвращает пустой вектор, в который можно вставить n элементов
vectorVoid createVectorV(size_t n, size_t baseTypeSize);

// изменяет количество памяти, выделенное под хранение элементов вектора
void reserveV(vectorVoid *v, size_t newCapacity);

// удаляет элементы из контейнера, но не освобождает выделенную память
void clearV(vectorVoid *v);

//освобождает память, выделенную под неиспользуемые элементы
void shrinkToFitV(vectorVoid *v);

// освобождает память, выделенную вектору
void deleteVectorV(vectorVoid *v);

// возвращает 'истина' если вектор пустой, иначе - 'ложь'
bool isEmptyV(vectorVoid *v);

// возвращает 'истина' если вектор полный, иначе - 'ложь'
bool isFullV(vectorVoid *v);

// записывает по адресу destination index-ый элемент вектора v
void getVectorValueV(vectorVoid *v, size_t index, void *destination);

// записывает на index-ый элемент вектора v значение, расположенное по
// адресу source
void setVectorValueV(vectorVoid *v, size_t index, void *source);

// удаляет последний элемент вектора
void popBackV(vectorVoid *v);

// добавляет в конец вектора значение, расположенное по адресу source
void pushBackV(vectorVoid *v, void *source);

// возвращает 'истина' если в векторе существует элемент по заданному идексу,
// иначе - 'ложь'
bool isExistingIndexV(vectorVoid v, size_t index);

#endif