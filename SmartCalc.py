#Calculadora Smart.py
tipo = input('''Diga se o valor a ser calculado é inteiro ou fracionado:
F para fracionado
I para inteiro 
''')

if tipo == 'F':
  number_1 = float(input('Digite o primeiro valor: '))
  number_2 = float(input('Digite o segundo valor: '))

if tipo == 'I':
  number_1 = int(input('Digite o primeiro valor: '))
  number_2 = int(input('Digite o segundo valor: '))

operador = input(''' Por favor selecione o operador a ser usado: 
+ para soma

- para subtração

* para multiplicação

/ para divisão 
''')

print()

if operador == '+':
  soma = number_1 + number_2 
  print(soma)

elif operador == '-':
  subtracao = number_1 - number_2 
  print(subtracao)

elif operador == '/':
  divisao = number_1 / number_2 
  print(divisao)

elif operador == '*':
  multiplicacao = number_1 * number_2
  print(multiplicacao)