1. Формула площади трапеции s = h * (b1 + b2) / 2
2. Формулы : длина окружности l = 2 * r * pi и площадь круга s = pi * r * r
3. Формулы : площадь прямоугольного треугольника s = (a * b) / 2 и гипотенузы c = ((a * a) + (b * b))^(0.5)
4. Число разделяем по разрядам. Складываем полученные числа.
5. Формулы перехода от декартовых к полярным: r = (x * x + y * y) ^(0.5) и fi = arctg(y / x)
6. Формулы перехода от полярных к декартовым: x = r*cos(fi) и y = r*sin(fi).
7. Формула корней x1,2 = (-b ± (b^2 -4*a*c)^(0.5)) / (2 * a). Если
дискриминант отрицательный, программа сообщает пользователю, уравнение не имеет корней.
8. Проверяем, существует ли треугольник. 
Медианы большого треугольника находятся как ((2*прилежащая^2 + 2*прилежащая^2 - противолежащая^2) / 4)^(0.5)
Медианы делят противолежащую сторону пополам, точкой пересечения делятся 2 к 1. 
Сам треугольник делится ими на 6 равновеликих тругольников.
Тогда стороны любого из них будут либо половиной стороны большого треугольника, либо 1/3 либо 2/3 медианы большого треугольника.
Медианы маленьких треугольников находятся аналогично с большим.
9. В сутках 86400 секунд, а значит если пользователь введет что-то больше, значит сутки обновляются и отсчет начинается
с новых суток. Чтобы найти минуты, нужно секунды поделить на 60. Чтобы часы - минуты на 60.
10. Проверяем, существует ли треугольник. Если существует, нужно учесть еще и то, что равносторонний - тоже равнобедренний.
11. Если сумма покупки больше 1000, вычитаем 10%, умножая ее на 0*9.
12. Если рост-100 превышает вес, то необходимо набрать. В противном случае - сбросить.
13. Сравниваем произведение случайных чисел с ответом пользователя. 
14. Пусть стоимость = 1р/мин. Тогда, если это суббота или воскресенье, то вычитаем 20%
из общей стоимости переговоров, умножая на 0,8. Если любой другой день - выводим без скидки.
15. Используем два "ифа". Один для названия месяца, другой - для времени года.
Если такого месяца не существует, программа сообщит об этом пользователю.
16. Мы взяли за определение счастливого числа следующее: это число, сумма чисел половины
которого равна сумме чисел другой половины.
Делим 6-значное число пополам. Циклы разделяют каждое из получившихся чисел по разрядам,
затем разряды складываются для каждой половины и сравниваются.
17. Если введено число не из диапахона от 1 до 99, то программа выводит ошибку.
"Копейка" - форма для 1, 21, 31 и т.д до 91.
"Копейки" - форма для чисел заканчивающихся на 2,3,4,5 всех десятков.
"Копеек" - форма для всех остальных чисел.
18. Палиндром - число, одинаково читающееся в обоих направлениях.
Мы разделяем число пополам, для того, чтобы инвертировать последние две цифры.
Первую часть и инвертированную сравниваем.
19.1. Пусть b = 10. Разделяем число по разрядам, перемножаем их. Полученное число сравниваем с 10.
19.2. Складываем разряды. Делим эту сумму на 7 и проверяем есть ли остаток.
20. Проверяем существование прямоугольников - строны должны быть больше нуля.
Сравниваем стороны а и b с каждой стороной другого прямоугольника. Стороны с и d должны быть
должны быть больше, чем стороны a и b.
21. Версия компилятора: 14.33.31630.0
Тип wchar_t, int больше минимального размера.