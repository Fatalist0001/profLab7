# 🌦️ Сервисы погоды (C++)

Этот проект предоставляет C++ реализацию сервисов для получения информации о погоде.

## 📁 Структура проекта

* **include/** - Заголовочные файлы (.h) классов
* **src/** - Файлы реализации (.cpp) классов
* **main.cpp** - Главная программа

## 🧱 Классы

* **Service** - Абстрактный базовый класс для всех сервисов погоды. Определяет метод `getWeather(string)`.
* **WeatherService** - Хранит информацию о погоде (город, координаты, температура, описание, ветер, облачность) и предоставляет метод `printWeather()` для вывода.
* **JsonService** - Наследует `Service` и реализует получение погоды из JSON.
* **XmlService** - Наследует `Service` и реализует получение погоды из XML. 

## 🚀 Использование

1. **Скомпилируйте** проект.
2. **Запустите** программу.
3. **Введите** название города.
4. Программа **выведет** информацию о погоде.

## 📝 Пример
...
Use code with caution.
Markdown
Введите название города: Москва
Погода в городе Москва:
Температура: 15 градусов Цельсия
Описание: Облачно
...
## 🛠️ Замечания

* Реализуйте файлы `.cpp` для `JsonService` и `XmlService`.
* Добавьте другие сервисы погоды (API и т.д.).

## 📚 Дополнительная информация

* [C++](https://isocpp.org/)
* [JSON](https://www.json.org/)
* [XML](https://www.w3.org/XML/)