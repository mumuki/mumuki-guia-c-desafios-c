describe ("primerPar") {
  int arregloSeisElementos[6] = {21, 3, 4, 5, 8, 20};
  int arregloTresElementos[3] = {5, 8, 20};
  int arregloCincoElementos[5] = {45, 43, 37, 65, 14};

  it ("el primer par del arreglo {45, 43, 37, 65, 14} es 14") {
    should_int(primerPar(arregloCincoElementos), 5) be equal to(14);
  } end
  
  it ("el primer par del arreglo {21, 3, 4, 5, 8, 20} es 4") {
    should_int(primerPar(arregloSeisElementos), 6) be equal to(4);
  } end
  
  it ("el primer par del arreglo {5, 8, 20} es 8") {
    should_int(primerPar(arregloTresElementos), 8) be equal to(8);
  } end
} end