
@interface BWSpringSimulation : NSObject {
    bool  _completed;
    double  _convergedSpeed;
    double  _friction;
    double  _inputValue;
    double  _outputValue;
    double  _previousForce;
    double  _tension;
    int  _updateCount;
    double  _velocity;
}

@property (getter=isCompleted, nonatomic, readonly) bool completed;
@property (nonatomic) double friction;
@property (nonatomic) double input;
@property (nonatomic, readonly) double output;
@property (nonatomic) double tension;
@property (nonatomic, readonly) int updateCount;
@property (nonatomic, readonly) double velocity;

+ (void)initialize;

- (double)friction;
- (id)init;
- (double)input;
- (bool)isCompleted;
- (double)output;
- (void)resetWithInput:(double)arg1 initialOutput:(double)arg2 initialVelocity:(double)arg3;
- (void)resetWithInput:(double)arg1 initialOutput:(double)arg2 initialVelocity:(double)arg3 convergedSpeed:(double)arg4;
- (void)setFriction:(double)arg1;
- (void)setInput:(double)arg1;
- (void)setTension:(double)arg1;
- (double)tension;
- (void)update;
- (int)updateCount;
- (double)velocity;

@end
