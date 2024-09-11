# 📚 Manipulação de Pilha e Função de Inversão de Palavras

Neste documento, abordaremos como manipular uma pilha representada por um vetor e como inverter a ordem das letras de cada palavra em uma sentença.

## 1. Manipulação de Pilha com Vetor 🏗️

Para uma pilha representada por um vetor `p` onde a parte ocupada é `p[0..t]`:

### Remover um Elemento da Pilha 🗑️

Para remover um elemento da pilha:
- Atualize o índice do topo `t` para o elemento anterior.

Isso efetivamente remove o elemento no topo da pilha.

### Inserir um Objeto na Pilha 📥

Para inserir um novo objeto na pilha:
- Adicione o elemento na posição imediatamente após o topo atual (`t`).
- Atualize o índice do topo `t` para refletir a nova posição.

Isso coloca o novo elemento no topo da pilha e ajusta o índice do topo.

## 2. Função para Inverter Palavras 🔄

Para inverter a ordem das letras de cada palavra em uma sentença, preservando a ordem das palavras:

1. **Divida** a sentença em palavras, usando espaços como delimitadores.
2. **Inverta** cada palavra individualmente.
3. **Junte** as palavras invertidas para formar uma nova sentença.

### Exemplo de Aplicação

Aplicando a função à sentença "AMU MEGASNEM ATERCES", a saída será "UMA MENSAGEM SECRETA".

