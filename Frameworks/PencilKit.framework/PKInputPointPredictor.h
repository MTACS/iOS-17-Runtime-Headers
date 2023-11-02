
@interface PKInputPointPredictor : NSObject {
    long long  _numPoints;
    struct { 
        union { 
            struct CGPoint { 
                double x; 
                double y; 
            } point; 
            struct CGPoint { 
                double x; 
                double y; 
            } location; 
        } ; 
        double force; 
        double azimuth; 
        double altitude; 
        double velocity; 
        double directionAngle; 
        double zPosition; 
        double timestamp; 
        bool predicted; 
        long long estimationUpdateIndex; 
        double length; 
        bool hasEstimatedAltitudeAndAzimuth; 
    }  _points;
}

@end
