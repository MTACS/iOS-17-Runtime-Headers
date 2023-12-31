
@interface TKVibrationRecorderRippleRingLayer : CAShapeLayer {
    double  _creationTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _normalizedRingLocation;
    double  _ringSpeed;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } normalizedRingLocation;
@property (nonatomic, readonly) double ringSpeed;

- (void)configureWithTimeIntervalSinceCreation:(double)arg1 normalizedRingLocation:(struct CGPoint { double x1; double x2; })arg2 ringSpeed:(double)arg3;
- (id)init;
- (struct CGPoint { double x1; double x2; })normalizedRingLocation;
- (void)reset;
- (double)ringSpeed;
- (double)timeIntervalSinceCreation;

@end
