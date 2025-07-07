# Great Circle Distance Calculator

This project is a C++ application that uses the **Great Circle Distance** formula to calculate the shortest distance between two points on Earth.

## 📋 About the Project

Great Circle Distance is a mathematical formula used to calculate the shortest distance between two points on the spherical Earth. This application uses the **Haversine formula** to calculate the distance between two geographic coordinates in kilometers.

## 🔧 Features

- Calculate Great Circle distance between two points
- Accept latitude and longitude coordinates in degrees
- Display results in kilometers
- Fast and accurate calculation algorithm

## 📊 Formula Used

Haversine formula:
```
a = sin²(Δφ/2) + cos φ1 ⋅ cos φ2 ⋅ sin²(Δλ/2)
c = 2 ⋅ atan2(√a, √(1−a))
d = R ⋅ c
```

Where:
- φ: latitude (in radians)
- λ: longitude (in radians)
- R: Earth's radius (6371 km)
- d: calculated distance

## 🚀 How to Run

### Requirements
- C++ compiler (clang++, g++, etc.)
- C++20 standard support

### Compilation
```bash
clang++ -std=c++20 -o main main.cpp
```

### Running
```bash
./main
```

### Usage
When the program runs, you will be prompted to enter the following information in order:
1. Latitude of the first point
2. Longitude of the first point
3. Latitude of the second point
4. Longitude of the second point

## 📝 Example Usage

```
Enter latitude of first point: 39.9208 (latitude of Ankara, Turkey)
Enter longitude of first point: 32.8541 (longitude of Ankara,Turkey)
Enter latitude of second point: 41.0082 (latitude of Istanbul, Turkey)
Enter longitude of second point: 28.9784 (longitude of Istanbul, Turkey)
Distance between the two points: 349.422 km
```

This example calculates the distance between Istanbul (41.0082°N, 28.9784°E) and New York (40.7128°N, 74.0060°W).

## 🏗️ Project Structure

```
great_circle_cpp/
├── main.cpp        # Main source code file
├── README.md       # Project documentation
└── main            # Compiled executable file
```

## 🎯 Functions

### `GreatCircle(lat1, lon1, lat2, lon2)`
- **Parameters**: 
  - `lat1`, `lon1`: Latitude and longitude values of the first point (degrees)
  - `lat2`, `lon2`: Latitude and longitude values of the second point (degrees)
- **Return value**: Distance between the two points (kilometers)

## 🔬 Technical Details

- **Programming Language**: C++
- **Standard**: C++20
- **Mathematical Libraries**: `<cmath>`
- **Earth's Radius**: 6371 km (average value)
- **Pi Value**: 3.14159265358979323846

## 🌍 Application Areas

- GPS navigation systems
- Aviation and maritime calculations
- Geographic Information Systems (GIS)
- Distance-based calculations
- Logistics and route optimization

## 🤝 Contributing

1. Fork this repository
2. Create a new branch (`git checkout -b feature/new-feature`)
3. Commit your changes (`git commit -am 'Add new feature'`)
4. Push to the branch (`git push origin feature/new-feature`)
5. Create a Pull Request

## 📜 License

This project is licensed under the MIT License. See the `LICENSE` file for details.

## 👤 Developer

- **Burak Üçüncü** - [GitHub](https://github.com/burakucncu)

## 🙏 Acknowledgments

This project was created to improve geographical calculations and C++ programming skills.