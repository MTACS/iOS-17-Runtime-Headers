
@interface BWRamp : NSObject {
    int  _currentIteration;
    float  _currentValue;
    int  _durationInIterations;
    float  _exponentialConvergenceFraction;
    float  _exponentialSnapFraction;
    float  _frameRate;
    bool  _isRamping;
    bool  _isRampingUp;
    NSString * _name;
    int  _shape;
    BWSpringSimulation * _spring;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _springPTS;
    float  _startValue;
    float  _targetValue;
}

@property (nonatomic, readonly) float currentValue;
@property (nonatomic, readonly) bool isRamping;
@property (nonatomic, readonly) bool isRampingUp;

+ (void)initialize;

- (float)currentValue;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)isRamping;
- (bool)isRampingUp;
- (void)reset;
- (void)startRampFrom:(float)arg1 to:(float)arg2 iterations:(int)arg3 shape:(int)arg4;
- (void)startRampFrom:(float)arg1 to:(float)arg2 iterations:(int)arg3 shape:(int)arg4 exponentialConvergenceFraction:(float)arg5;
- (void)startSpringRampFrom:(float)arg1 to:(float)arg2 withTension:(float)arg3 friction:(float)arg4 snapFraction:(float)arg5 frameRate:(float)arg6;
- (float)updateRampForNextIteration;

@end
