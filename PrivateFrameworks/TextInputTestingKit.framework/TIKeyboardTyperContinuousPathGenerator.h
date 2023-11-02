
@interface TIKeyboardTyperContinuousPathGenerator : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentPoint;
    double  _currentTimestamp;
    double  _dt;
    double  _stallDuration;
    NSMutableArray * _targets;
    double  _velocity;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } currentPoint;
@property (nonatomic, readonly) double currentTimestamp;
@property (nonatomic, readonly) bool isDone;

- (void).cxx_destruct;
- (void)addTargetPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })currentPoint;
- (double)currentTimestamp;
- (id)initWithVelocity:(double)arg1 timestamp:(double)arg2 dt:(double)arg3 stallDuration:(double)arg4;
- (bool)isDone;
- (void)step;

@end
