# imghst | ImageHost
![alt text](https://i.imgur.com/Nkr7Jqe.png)


imghst - утилита для парсинга картинок с фотохостингов.

## Информация
- **Поддерживает:** все форматы.
- **Скорость:** 112ф / мин
- **Скачивает фото:** в out/ или ваше место.
- **Вывод программы:** Статус; Файл; Ссылка; Время; Количество;

## Запуск
- Запустить cmd
- cd [папка с программой]
- imghst.exe -h

## Скачать
- **Последний build:** https://clck.ru/33YjVy
- **Исправлено:** run(y,n).

------------------------------------

## Стандартный запуск
```
imghst.exe -d [домен] -f [формат] -c [количество]
```

## Сложный запуск
```
imghst.exe -d [домен] -f [формат] -p [путь (вконце: /)] -m [режим: 1-2] -l [Длинна токена] -c [количество]
```

## Быстрый запуск
```
imghst.exe --imgur
```

```
imghst.exe --lightshot
```

```
imghst.exe --freeimage
```

```
imghst.exe --pasteboard
```
