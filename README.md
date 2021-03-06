# CVRPTW
Capacitated Vehicle Routing Problem with Time Windows (4th year course work)

Позволяет генерировать входные данные и запускать разные алгоритмы решения CVRPTW при разных параметрах с помощью оконного приложения. Реализованные алгоритмы:
1) Жадный
2) Полный перебор
3) Алгоритм муравьиной колонии
4) Генетический алгоритм

В первую очередь приложение предназначено для сравнения и исследования алгоритмов. 

Сценарий использования:

1) Выберите файл. Формат файла описан далее
2) Нажмите кнопку "Загрузить".
3) Выберите алгоритм.
4) Измените значения параметров, если у алгоритма есть параметры и их требуется изменить.
5) Выберите датасет в таблице с входными данными.
6) Нажмите "Запустить".

В правой части экрана появятся результаты запуска. Их можно фильтровать по алгоритму и сортировать по любому параметру. При фильтрации по алгоритму в таблице также появляются все параметры, которые задаются для этого алгоритма при его запуске.

Есть возможность сохранить список путей, нажав на кнопку "Сохранить".

При двойном клике по строке в таблице результатов откроется вкладка "Визуализация" с информацией о запуске и соответствующем изображении. Также в таблицу со списком путей попадут пути для выбранного запуска алгоритма.

## Формат файла

*количество_целей*

*количетсво_транспортных средств*

*ограничение_на_дальность_полёта*

*координата_цели_1_x координата_цели_1_y*

...

*координата_цели_N_x координата_цели_N_y*

*начало_временного_окна_1 конец_временного_окна_1*

...

*начало_временного_окна_N конец_временного_окна_N*


Примеры можно найти по этому пути: https://github.com/Alexandr-TS/CVRPTW/tree/master/InputGenerator/Tests