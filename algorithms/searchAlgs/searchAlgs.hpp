#pragma once

#include <iostream>
#include <cmath>

#include "concept/stdConcepts.hpp"

namespace search
{
	//�������� ����� �������� key � �������
	//array ������� arraySize.
	//���� ������� ������, ��������� ���������� ���������.
	template <comparable T>
	size_t linear(T* array, size_t arraySize, T key);

	//������� �������� ����� �������� key � �������
	//array ������� arraySize.
	//���� ������� ������, ��������� ���������� ���������.
	template <comparable T>
	size_t fastLinear(T* array, size_t arraySize, T key);

	//������� �������� ����� �������� key � ������������� �������
	//array ������� arraySize.
	//���� ������� ������, ��������� ���������� ���������.
	template <comparable T>
	size_t fastLinSrt(T* array, size_t arraySize, T key);

	//�������� ����� �������� key � �������������
	//������� array ������� arraySize.
	//���� ������� ������, ��������� ���������� ���������.
	template <comparable T>
	size_t binary(T* array, size_t arraySize, T key);

	//������� ����� �������� key � �������� ����� blockSize
	//�� ������������� ������� array ������� arraySize.
	//���� ������� ������, ��������� ���������� ���������.
	template <comparable T>
	size_t block(T* array, size_t arraySize, T key);
}