continuar="s"
while continuar=="s"
    puts "Bienvenido a calcular si un alumno esta reprobado o no \n"
    puts "Ingrese calificacion del primer parcial"
    n1=gets.to_f
    puts "Ingrese calificacion del segundo parcial"
    n2=gets.to_f
    n3=n1+n2
    n3=n3/2
    if n3<7
        puts "El alumno saco: ", n3
        puts "El alumno esta reprobado"
    else
        puts "El alumno saco: ", n3
        puts "El alumno esta aprobado"
    end
    puts "¿Desea realizar otra operacion? s=Si n=No"
    continuar=gets.chomp
end
