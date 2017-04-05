# Лабораторная работа №6

Тестирующую программу разработать так, чтобы она проверяла работу основных функций несколькими вызовами с различными данными. 
После вызова автоматически сравнивать полученный результат с эталонными значением. Тесты написать перед реализацией функций 
(см. TDD). Покрывать тестами код работающий с файлами не обязательно.  Покрыть весь код документацией по стандарту 
Doxygen (https://en.wikipedia.org/wiki/Doxygen).

## Задание 6.1 . Написать программу,  укорачивающую слова:

Иногда некоторые слова вроде `localization` или `internationalization` настолько длинны, что их весьма утомительно писать 
много раз в каком либо тексте. Будем считать слово слишком длинным, если его длина строго больше 10 символов. 
Все слишком длинные слова можно заменить специальной аббревиатурой. 

Эта аббревиатура строится следующим образом: записывается первая и последняя буква слова, а между ними — количество букв между 
первой и последней буквой (в десятичной системе счисления и без ведущих нулей).

Таком образом, `localization` запишется как `l10n`, а `internationalization` как `i18n`.

Вам предлагается автоматизировать процесс замены слов на аббревиатуры. При этом все слишком длинные слова должны быть 
заменены аббревиатурой, а слова, не являющиеся слишком длинными, должны остаться без изменений.

### Входные данные

Данные следует считать из файла и с клавиатуры. 

При запуске программы с клавиатуры считывается количество строк, которые необходимо прочитать из файла.

Далее программа считывает строки из файла. В каждой из n строк содержится по одному слову. 
Все слова состоят из малых латинских букв и имеют длину от 1 до 100 символов.

Имя входного файла так же считать с клавиатуры.

### Выходные данные

Выведите в файл n строк. В i строке файла должен находится результат замены i-го слова из входных данных.

Имя выходного файла считать с клавиатуры.
