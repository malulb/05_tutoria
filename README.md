# Soma de uma matriz com threads

## Objetivo do projeto
Threads é um único fluxo de sequência dentro de um processo, multithreads é um recurso que permite que seu computador execute dois ou mais programas simultaneamente. Nesta atividade é utilizado uma thread para cada linha da matriz e a partir disso se realiza a soma total dentro dessas threads. A thread principal serve para receber e exibir esses resultados.
## Pré-Requisitos
* linguagem C
* makefile
* seu editor de código de preferência
* sistema operacional Unix

Para testar na sua maquina rode o código usando o makefile que tem a opção de copilar, além da opção de deletar o executável. 

```bash

make         " gcc 'NOME DO ARQUIVO'.c -o 'NOME DO EXECUTAVEL'" 

```
Para rodar o executável 
```bash

make run     "./'NOME DO EXECUTAVEL'"

```
Para remover o executável
```bash

make clean   "rm 'NOME DO EXECUTAVEL'"

```
