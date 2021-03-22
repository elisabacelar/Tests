# Tests
## Descrição
Este trabalho consiste na implementação de testes de unidade da Standard Library do C++.

Para a crição dos testes, foi utilizado o framework de testes GoogleTest: https://github.com/google/googletest . O link a seguir descreve o processo de instalação e primeiros passos: https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/ .

## Testes
Foram criados oito testes, sendo que cada um deles testava funcionalidades de uma classe específica. São eles:
* Teste 1: `std::complex`;
* Teste 2: `std::string`;
* Teste 3: `std::map`;
* Teste 4: `std::swap`;
* Teste 5: `std::sort`;
* Teste 6: `std::merge`;
* Teste 7: `std::stack`;
* Teste 8: `std::regex`.

## Execuração dos testes
Para executar os testes, basta executar os seguintes comandos no terminal dentro do diretório:
```
cmake CMakeLists.txt
make
./runTests
```
A saída esperada deve ser a seguinte:
```
[==========] Running 8 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 8 tests from StdLibTest
[ RUN      ] StdLibTest.StdComplex
[       OK ] StdLibTest.StdComplex (0 ms)
[ RUN      ] StdLibTest.StdString
[       OK ] StdLibTest.StdString (0 ms)
[ RUN      ] StdLibTest.StdMap
[       OK ] StdLibTest.StdMap (0 ms)
[ RUN      ] StdLibTest.StdSwap
[       OK ] StdLibTest.StdSwap (0 ms)
[ RUN      ] StdLibTest.StdSort
[       OK ] StdLibTest.StdSort (1 ms)
[ RUN      ] StdLibTest.StdMerge
[       OK ] StdLibTest.StdMerge (0 ms)
[ RUN      ] StdLibTest.StdStack
[       OK ] StdLibTest.StdStack (0 ms)
[ RUN      ] StdLibTest.StdRegex
[       OK ] StdLibTest.StdRegex (1 ms)
[----------] 8 tests from StdLibTest (2 ms total)

[----------] Global test environment tear-down
[==========] 8 tests from 1 test suite ran. (2 ms total)
[  PASSED  ] 8 tests.

```
