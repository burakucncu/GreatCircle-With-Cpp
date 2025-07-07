#include <iostream>
#include <cmath>

const double pi = 3.14159265358979323846;
const double R = 6371.0;

double GreatCircle(double lat1, double lon1, double lat2, double lon2) {
    double rlat1 = lat1 * pi / 180.0;
    double rlon1 = lon1 * pi / 180.0;
    double rlat2 = lat2 * pi / 180.0;
    double rlon2 = lon2 * pi / 180.0;

    double dlat = rlat2 - rlat1;
    double dlon = rlon2 - rlon1;

    double a = std::pow(std::sin(dlat / 2), 2) + std::cos(rlat1) * std::cos(rlat2) * std::pow(std::sin(dlon / 2), 2);
    double c = 2 * std::atan2(std::sqrt(a), std::sqrt(1 - a));

    double distance = R * c;

    return distance;

}

int main(){
    
    double lat1, lon1, lat2, lon2;
    std::cout << "Enter latitude of first point: ";
    std::cin >> lat1;
    std::cout << "Enter longitude of first point: ";
    std::cin >> lon1;
    std::cout << "Enter latitude of second point: ";
    std::cin >> lat2;
    std::cout << "Enter longitude of second point: ";
    std::cin >> lon2;
    
    double distance = GreatCircle(lat1, lon1, lat2, lon2);
    std::cout << "Distance between the two points: " << distance << " km" << std::endl;

    return 0;
}