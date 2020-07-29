/* ----------------------------------------------------------------------------
	
	(EN) Processor - A single core processor with a basic CPU. Part or armethyst
	project.
	
    armethyst - A simple ARM Simulator written in C++ for Computer Architecture
    teaching purposes. Free software licensed under the MIT License (see license
    below).

	(PT) Processor - Um processador de n�cleo �nico com uma CPU b�sica. Parte do
	projeto armethyst.
	
    armethyst - Um simulador ARM simples escrito em C++ para o ensino de
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

#include "Memory.h"
#include "CPU.h"

class Processor
{
	public:
		virtual int run(int startAddress) = 0;

	protected:
		Memory *memory;
		CPU *cpu;
};

