# 🃏 Super Trunfo de Países em C

Este projeto foi desenvolvido como parte de um desafio prático de programação em linguagem C. O objetivo é implementar um sistema simples para cadastro e exibição de cartas do jogo **Super Trunfo**, com foco em cidades brasileiras.

## 🚀 Funcionalidades

- Cadastro de **duas cartas**, contendo:
  - Estado (letra de A a H)
  - Código da carta (ex: A01, B02)
  - Nome da cidade
  - População
  - Área (em km²)
  - PIB (em bilhões de reais)
  - Número de pontos turísticos
- Cálculo e exibição de:
  - Densidade populacional (hab/km²)
  - PIB per capita (reais por habitante)

## 💡 Exemplos de saída

Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais

## 🛠️ Como compilar e executar

### Usando GCC (Linux/macOS/Windows com MinGW)

1. **Compile o código:**

```bash
gcc super_trunfo.c -o super_trunfo
````

2. **Execute o programa:**

```bash
./super_trunfo
```

### Requisitos

* Compilador C (como GCC)
* Terminal (Linux/macOS) ou CMD/PowerShell (Windows)

## 🧠 Conceitos aplicados

* Declaração e uso de variáveis em C
* Entrada (`scanf`) e saída de dados (`printf`)
* Tipos de dados (`int`, `float`, `char[]`)
* Cálculos com ponto flutuante
* Organização e clareza de código
* Comentários explicativos

## 📁 Estrutura do projeto

```
super-trunfo/
├── super_trunfo.c     # Código-fonte do programa
└── README.md          # Instruções e descrição do projeto
```

## ✍️ Autor

Desenvolvido por \João Victor
