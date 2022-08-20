continuar="1"
while continuar=="1":
    print("Bienvenido a la calculadora de ver si un alumno esta reprobado o aprobado")
    n1=int(input("Escriba la calificacion del primer parcial: "))
    n2=int(input("EScriba la calificacion del segundo parcial: "))
    n3=n1+n2
    n3=n3/2
    if n3<=7:
        print("El alumno saco: ", n3)
        print("El alumno esta reprobado")
    else:
        print("El alumno saco: ", n3)
        print("El alumno esta aprobado")
    continuar=input("¿Desea calcular otra? 1=Si 2=No")
