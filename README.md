# EcoShield

## Descrição do Projeto

O EcoShield é uma solução inteligente de monitoramento de enchentes desenvolvida para auxiliar na identificação de situações de risco em áreas urbanas suscetíveis a alagamentos.

O projeto faz parte de uma proposta maior de mapeamento de regiões vulneráveis a enchentes por meio da análise de dados geográficos e monitoramento em tempo real. Como protótipo, foi desenvolvido um sistema embarcado utilizando Arduino Uno e sensor ultrassônico para simular a detecção do aumento do nível da água e a emissão de alertas à população.

---

## Objetivo da Solução

Desenvolver um sistema capaz de monitorar o nível da água em regiões com risco de enchentes e emitir alertas visuais e sonoros conforme a gravidade da situação.

O objetivo é contribuir para a prevenção de acidentes, auxiliar a tomada de decisão por parte das autoridades e aumentar a segurança da população em áreas sujeitas a alagamentos.

---

## Componentes Utilizados

- Arduino Uno
- Sensor Ultrassônico HC-SR04
- LED Amarelo
- LED Laranja
- LED Vermelho
- Buzzer
- Resistores
- Protoboard
- Jumpers

---

## Explicação do Funcionamento

O sistema utiliza um sensor ultrassônico HC-SR04 posicionado na parte superior de uma estrutura que representa um poste de monitoramento.

O sensor mede continuamente a distância entre sua posição e a superfície da água.

À medida que o nível da água aumenta, a distância medida pelo sensor diminui. O Arduino interpreta essas medições e classifica a situação em três níveis de risco:

### Nível 1 - Alerta
- LED Amarelo aceso.
- Indica o início de um possível alagamento.

### Nível 2 - Risco Moderado
- LED Laranja aceso.
- Indica aumento significativo do nível da água.

### Nível 3 - Evacuação
- LED Vermelho aceso.
- Buzzer ativado.
- Indica situação crítica e necessidade de evacuação da área.

---

## Estrutura do Circuito

### Sensor Ultrassônico HC-SR04

| Componente | Pino Arduino |
|------------|--------------|
| Trigger | 8 |
| Echo | 7 |

### LEDs

| LED | Pino Arduino |
|------|-------------|
| Amarelo | 5 |
| Laranja | 4 |
| Vermelho | 3 |

### Buzzer

| Componente | Pino Arduino |
|------------|--------------|
| Buzzer | 2 |

---

## Instruções de Execução

1. Abrir a simulação no Wokwi.
2. Iniciar a execução do circuito.
3. Alterar a distância simulada do sensor HC-SR04.
4. Observar o comportamento dos LEDs e do buzzer.
5. Verificar os diferentes níveis de risco conforme a distância medida pelo sensor.

---

## Estrutura do Repositório

```text
EcoShield/
│
├── README.md
│
└── wokwi/
    ├── diagram.json
    ├── sketch.ino
    └── wokwi-project.txt
```

---

## Simulação Wokwi

Link da simulação:

(https://wokwi.com/projects/465326081577528321)

---

## Tecnologias Utilizadas

- Arduino Uno
- Linguagem C/C++
- Wokwi Simulator
- GitHub

---

## Integrantes

- João Pedro Nóbrega Pereira / RM: 570322
- Kevin Simões de Souza Lima / RM: 571942
- Luan Sá Muniz dos Santos de Freitas / RM: 569136


---

## Conclusão

O EcoShield demonstra como sistemas embarcados de baixo custo podem ser utilizados para monitorar situações de enchente e emitir alertas preventivos à população. A solução proposta busca contribuir para a redução de riscos em áreas urbanas por meio da combinação de monitoramento inteligente e automação de alertas.
