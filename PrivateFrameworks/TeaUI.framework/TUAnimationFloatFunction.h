
@interface TUAnimationFloatFunction : NSObject {
    double  _endValue;
    double  _speed;
    double  _startValue;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic) double endValue;
@property (nonatomic) double speed;
@property (nonatomic) double startValue;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

- (void).cxx_destruct;
- (double)endValue;
- (id)init;
- (id)initWithTimingFunction:(id)arg1 startValue:(double)arg2 endValue:(double)arg3 speed:(double)arg4;
- (void)setEndValue:(double)arg1;
- (void)setSpeed:(double)arg1;
- (void)setStartValue:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (double)solveForTime:(double)arg1;
- (double)speed;
- (double)startValue;
- (id)timingFunction;

@end
