🃏 Super Trunfo — Desafio Nível Mestre
🎯 Objetivo

Este projeto é o desafio final do jogo Super Trunfo de Países, desenvolvido em linguagem C.
O objetivo é permitir que o jogador compare duas cartas de países com base em dois atributos numéricos, escolhidos através de menus interativos.

O sistema calcula automaticamente densidade demográfica, realiza comparações avançadas com switch, if/else aninhados e operador ternário, e determina o vencedor final da rodada.

🧠 Conceitos praticados

Declaração e manipulação de variáveis (int, float, char[])

Entrada e saída de dados (scanf, printf)

Cálculos numéricos (densidade, soma, comparações)

Estruturas de decisão (if, else if, else)

Estruturas de seleção múltipla (switch)

Operador ternário (? :)

Menus dinâmicos e tratamento de entradas inválidas

🧩 Funcionalidades

✅ Cadastro de duas cartas de países, com:

Nome do país

População

Área (em km²)

PIB (em trilhões de reais)

Número de pontos turísticos

✅ Cálculo automático de:

Densidade demográfica = população / área

✅ Menu interativo com switch, permitindo escolher:

1️⃣ População

2️⃣ Área

3️⃣ PIB

4️⃣ Número de pontos turísticos

5️⃣ Densidade demográfica

✅ O jogador escolhe dois atributos diferentes para comparar as cartas.
✅ A comparação segue as regras:

Para todos os atributos → maior valor vence

Para densidade demográfica → menor valor vence
✅ O programa exibe:

Comparação individual de cada atributo

Soma total dos dois atributos

Resultado final (Carta 1, Carta 2 ou Empate)

🧮 Exemplo de Execução
=== Cadastro da Carta 1 ===
Nome do pais: Brasil
Populacao: 214000000
Area (km²): 8515767
PIB (em trilhoes de reais): 10.3
Numero de pontos turisticos: 55

=== Cadastro da Carta 2 ===
Nome do pais: Argentina
Populacao: 46000000
Area (km²): 2780400
PIB (em trilhoes de reais): 3.5
Numero de pontos turisticos: 35

=== MENU DE ATRIBUTOS ===
Escolha o primeiro atributo para comparacao:
1 - Populacao
2 - Area
3 - PIB
4 - Numero de Pontos Turisticos
5 - Densidade Demografica
Opcao: 3

Escolha o segundo atributo (diferente do primeiro):
1 - Populacao
2 - Area
4 - Numero de Pontos Turisticos
5 - Densidade Demografica
Opcao: 5

=== RESULTADO DAS COMPARACOES ===

Comparando o primeiro atributo:
Brasil: 10.30 | Argentina: 3.50
Vencedor no atributo 1: Brasil

Comparando o segundo atributo:
Brasil: 25.13 | Argentina: 16.54
Vencedor no atributo 2: Argentina

=== SOMA FINAL DOS ATRIBUTOS ===
Brasil: 35.43
Argentina: 20.04

Vencedor final: Brasil!

🧱 Estrutura do Projeto
📁 super_trunfo/
├── super_trunfo.c   ← Código-fonte principal
├── README.md         ← Este arquivo de documentação
└── (opcional) assets/ ← Capturas de tela ou exemplos de execução

⚙️ Como compilar e executar

No terminal ou GitHub Codespaces:

gcc super_trunfo.c -o super_trunfo
./super_trunfo

🧰 Tecnologias e ferramentas usadas

Linguagem C

Compilador GCC

Terminal (para execução interativa)

Git e GitHub para versionamento e entrega

🧑‍💻 Autor

Marcelo Carvalho
📍 Projeto desenvolvido para o desafio Super Trunfo — Nível Mestre (SENAI / SAVA)
💬 “Aprendizado, lógica e diversão em um só projeto!”
