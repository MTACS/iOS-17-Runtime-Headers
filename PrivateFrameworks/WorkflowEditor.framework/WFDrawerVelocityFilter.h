
@interface WFDrawerVelocityFilter : NSObject {
    struct { 
        double start; 
        double end; 
        double dt; 
    }  _currentSample;
    struct { 
        double start; 
        double end; 
        double dt; 
    }  _previousSample;
    double  _previousTime;
    double  _previousValue;
}

@property (nonatomic, readonly) double calculatedVelocity;
@property (nonatomic) struct { double x1; double x2; double x3; } currentSample;
@property (nonatomic) struct { double x1; double x2; double x3; } previousSample;
@property (nonatomic) double previousTime;
@property (nonatomic) double previousValue;

- (void)addSample:(double)arg1;
- (double)calculatedVelocity;
- (struct { double x1; double x2; double x3; })currentSample;
- (struct { double x1; double x2; double x3; })previousSample;
- (double)previousTime;
- (double)previousValue;
- (void)resetWithValue:(double)arg1;
- (void)setCurrentSample:(struct { double x1; double x2; double x3; })arg1;
- (void)setPreviousSample:(struct { double x1; double x2; double x3; })arg1;
- (void)setPreviousTime:(double)arg1;
- (void)setPreviousValue:(double)arg1;

@end
