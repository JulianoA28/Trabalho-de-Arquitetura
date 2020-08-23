/* ----------------------------------------------------------------------------

    (EN) armethyst - A simple ARM Simulator written in C++ for Computer Architecture
    teaching purposes. Free software licensed under the MIT License (see license
    below).

    (PT) armethyst - Um simulador ARM simples escrito em C++ para o ensino de
    Arquitetura de Computadores. Software livre licenciado pela MIT License
    (veja a licen�a, em ingl�s, abaixo).

    (EN) MIT LICENSE:

    Copyright 2020 Andr� Vital Sa�de

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.

   ----------------------------------------------------------------------------
*/

#pragma once

#include "config.h"

#include <string>
#include <fstream>

using namespace std;

class Memory
{
public:
	Memory(int size);
	~Memory();

	void loadBinary(std::string filename);
	void writeBinaryAsText (std::string basename);
	
	/**
	 * L� uma instru��o de 32 bits considerando um endere�amento em bytes.
	 */
	virtual int readInstruction32(unsigned long address);

	/**
	 * L� um dado de 32 bits considerando um endere�amento em bytes.
	 */
	virtual int readData32(unsigned long address);

	/**
	 * L� um dado de 64 bits considerando um endere�amento em bytes.
	 */
	virtual long readData64(unsigned long address);
	
	/**
	 * Escreve um dado (value) de 32 bits considerando um endere�amento em bytes.
	 */
	virtual void writeData32(unsigned long address, int value);

	/**
	 * Escreve um dado (value) de 64 bits considerando um endere�amento em bytes.
	 */
	virtual void writeData64(unsigned long address, long value);
	
protected:
	char* data;        //memory data
	unsigned short fileSize;    //size of the loaded binary file
 };

