# 🚢 Projeto Batalha Naval em C

Este projeto consiste em uma simulação de um **tabuleiro de Batalha Naval desenvolvido em C**, implementado de forma progressiva em três níveis de complexidade.
O objetivo é praticar conceitos fundamentais da linguagem C, especialmente **vetores, matrizes, loops aninhados e lógica de posicionamento em grade**.

---

# 📌 Estrutura do Projeto

O projeto está dividido em três níveis, cada um introduzindo novos conceitos e desafios.

```
projeto-batalha-naval
│
├── 01_nivel_novato
│   └── main.c
│
├── 02_nivel_aventureiro
│   └── main.c
│
├── 03_nivel_mestre
│   └── main.c
```

---

# 🧠 Nível 1 — Novato

Neste nível foi implementada a base do tabuleiro.

### Funcionalidades

* Criação de um **tabuleiro 10x10**
* Inicialização da matriz com valor **0 (água)**
* Posicionamento de **2 navios**

  * 1 horizontal
  * 1 vertical
* Representação de navios com o valor **3**
* Exibição do tabuleiro no terminal utilizando **loops aninhados**

### Conceitos utilizados

* Matrizes bidimensionais
* Loops `for`
* Manipulação de índices em matriz

---

# ⚔️ Nível 2 — Aventureiro

Neste nível o tabuleiro foi expandido para suportar **navios diagonais**.

### Funcionalidades

* Posicionamento de **4 navios**

  * Horizontal
  * Vertical
  * Diagonal ↘
  * Diagonal ↙
* Validação de limites do tabuleiro
* Prevenção de sobreposição entre navios

### Conceitos utilizados

* Lógica de movimentação diagonal
* Validação de limites de matriz
* Estruturas condicionais

---

# 🧨 Nível 3 — Mestre

No nível final foram implementadas **habilidades especiais com áreas de efeito**, sobrepostas ao tabuleiro.

### Habilidades implementadas

#### Cone

Área triangular que se expande a partir de um ponto de origem.

#### Cruz

Afeta as posições horizontal e vertical ao redor do ponto central.

#### Octaedro (Losango)

Área de efeito baseada em **distância Manhattan**, formando um losango.

### Representação no tabuleiro

| Valor | Significado                 |
| ----- | --------------------------- |
| 0     | Água                        |
| 3     | Navio                       |
| 5     | Área afetada por habilidade |

### Conceitos utilizados

* Matrizes auxiliares de habilidade
* Projeção de matriz dentro de outra
* Cálculo de distância Manhattan
* Loops aninhados e condicionais

---

# 💻 Como executar o projeto

Compile qualquer um dos níveis usando:

```
gcc main.c -o main
```

Execute:

```
./main
```

ou no Windows:

```
main.exe
```

---

# 📚 Conceitos de C explorados

* Matrizes bidimensionais
* Vetores
* Loops aninhados
* Estruturas condicionais
* Manipulação de índices em grade
* Organização de projeto em múltiplos níveis

---

# 🎯 Objetivo

Este projeto foi desenvolvido como prática de lógica de programação em C, simulando elementos de um jogo clássico enquanto reforça fundamentos importantes da linguagem.

---

# 👨‍💻 Autor

Ryan Santos
