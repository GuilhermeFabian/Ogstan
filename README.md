<b><h1>Ogstan</h1></b>

> RPG 2.5D Open Source usando C++ e SFML
</br>


<hr>
</br>
</br>


<b><h2> Instalação </b></h2>


<b><h3>Linux:<h3></b>

Primeiro compile o *main.cpp*, o arquivo puro:
```sh
   g++ -c main.cpp 
```

Depois ira gerar um arquivo chamado *main.o*, compile este com as bibliotecas do SFML:

```sh
    g++ main.o -o Ogstan-app -lsfml-graphics -lsfml-window -lsfml-system
```


Para rodar no Linux, apenas execute o arquivo gerado pela compilação:
```sh
  ./sfml-app 
```




