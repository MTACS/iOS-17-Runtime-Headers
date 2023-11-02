
@interface PKInputPointPredictionFilter : PKInputPointBaseFilter {
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
    }  _fullPredictionTimeIntervalPoint;
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
    }  _halfPredictionTimeIntervalPoint;
    double  _predictionTimeInterval;
    PKInputPointPredictor * _predictor;
    bool  _useHalfPredictionTimeInterval;
}

- (void).cxx_destruct;
- (void)addInputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1;
- (void)resetFilter;

@end
