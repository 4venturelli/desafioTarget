# Desafio Target 

### 3. Observe o trecho de código abaixo:
```bash
int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça

{

K = K + 1;

SOMA = SOMA + K;

}

imprimir(SOMA);
```
Ao final do processamento, qual será o valor da variável SOMA?

Resposta = 77

### 4. Descubra a lógica e complete o próximo elemento:
a) 1, 3, 5, 7, **9**

b) 2, 4, 8, 16, 32, 64, **128**

c) 0, 1, 4, 9, 16, 25, 36, **49**

d) 4, 16, 36, 64, **100**

e) 1, 1, 2, 3, 5, 8, **13**

f) 2,10, 12, 16, 17, 18, 19, **20**

### 5. 
Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em salas 
diferentes. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os 
interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual 
lâmpada. Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas,
qual interruptor controla cada lâmpada? 

```bash
Para descobrir qual interruptor refere-se a cada lâmpada, a forma mais fácil
seria checar a temperatura de alguma lâmpada, por exemplo:
Poderia acionar o interruptor número 1 e deixar ligado por algum tempo e
depois disso, poderia apagar. Isso vai fazer com que uma das lâmpadas fique
quente durante um tempo, mesmo que apagada, pois a eletricidade gera calor.

Após desligar o primeiro interruptor acenderia o interruptor de número 2 e
então faço minha primeira ida a uma das três salas. Caso a lampada esteja
apagada porém quente, quer dizer que ela é acesa pelo interruptor 1, mas se
ela estiver acesa, quer dizer que é acesa pelo interruptor 2, porém se ela
estiver apagada e sem calor algum quer dizer que é acesa pelo interruptor 3.

Após isso, já sabendo qual o interruptor acende aquela lâmpada, vou analisar
os interruptores restantes e para isso, deixo um ligado e outro desligado e
então faço minha segunda ida a sala e então descubro os dois restantes.
```

### As outras questões que envolviam códigos estão em arquivos separados e a linguagem escolhida foi C.



