
@interface AVPanGestureIncrement : NSObject {
    bool  _hasMultipleTouches;
    double  _timestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _velocity;
}

@property (nonatomic, readonly) bool hasMultipleTouches;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } translation;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } velocity;

+ (id)gestureIncrementWithTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 timestamp:(double)arg3 hasMultipleTouches:(bool)arg4;

- (id)debugDescription;
- (bool)hasMultipleTouches;
- (double)timestamp;
- (struct CGPoint { double x1; double x2; })translation;
- (struct CGPoint { double x1; double x2; })velocity;

@end
