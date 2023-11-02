
@interface CAMSpring : NSObject {
    double  __current;
    double  __lastTimestamp;
    double  __lowerBound;
    double  __upperBound;
    bool  _converged;
    double  _epsilon;
    double  _friction;
    double  _maximumTimeDelta;
    double  _target;
    double  _tension;
    double  _velocity;
}

@property (setter=_setCurrent:, nonatomic) double _current;
@property (setter=_setLastTimestamp:, nonatomic) double _lastTimestamp;
@property (nonatomic, readonly) double _lowerBound;
@property (nonatomic, readonly) double _upperBound;
@property (getter=isConverged, setter=_setConverged:, nonatomic) bool converged;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic) double friction;
@property (nonatomic) double maximumTimeDelta;
@property (nonatomic) double target;
@property (nonatomic) double tension;
@property (nonatomic, readonly) double unboundedValue;
@property (nonatomic, readonly) double value;
@property (nonatomic) double velocity;

- (double)_current;
- (double)_currentForce;
- (double)_lastTimestamp;
- (double)_lowerBound;
- (void)_setConverged:(bool)arg1;
- (void)_setCurrent:(double)arg1;
- (void)_setLastTimestamp:(double)arg1;
- (void)_updateConverged;
- (void)_updateWithForce:(double)arg1 timestamp:(double)arg2;
- (double)_upperBound;
- (void)converge;
- (double)epsilon;
- (double)friction;
- (id)initWithTension:(double)arg1 friction:(double)arg2 epsilon:(double)arg3;
- (id)initWithTension:(double)arg1 friction:(double)arg2 epsilon:(double)arg3 boundedBetween:(double)arg4 and:(double)arg5;
- (bool)isConverged;
- (double)maximumTimeDelta;
- (void)resetToValue:(double)arg1;
- (void)setFriction:(double)arg1;
- (void)setMaximumTimeDelta:(double)arg1;
- (void)setTarget:(double)arg1;
- (void)setTension:(double)arg1;
- (void)setVelocity:(double)arg1;
- (double)target;
- (double)tension;
- (double)unboundedValue;
- (void)updateForTimestamp:(double)arg1;
- (double)value;
- (double)velocity;

@end
