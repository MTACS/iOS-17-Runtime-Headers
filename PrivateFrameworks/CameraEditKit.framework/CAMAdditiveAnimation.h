
@interface CAMAdditiveAnimation : NSObject {
    CAMediaTimingFunction * __curve;
    double  __duration;
    CAMAdditiveAnimation * __fromAnimation;
    double  __fromValue;
    double  __lastTime;
    double  __startTime;
    double  __toValue;
}

@property (nonatomic, readonly) CAMediaTimingFunction *_curve;
@property (nonatomic, readonly) double _duration;
@property (nonatomic, retain) CAMAdditiveAnimation *_fromAnimation;
@property (nonatomic) double _fromValue;
@property (setter=_setLastTime:, nonatomic) double _lastTime;
@property (setter=_setStartTime:, nonatomic) double _startTime;
@property (nonatomic, readonly) double _toValue;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, readonly) double value;

+ (id)animationToValue:(double)arg1 fromAnimation:(id)arg2 duration:(double)arg3 curve:(id)arg4;
+ (id)animationToValue:(double)arg1 fromValue:(double)arg2 duration:(double)arg3 curve:(id)arg4;

- (void).cxx_destruct;
- (id)_curve;
- (double)_duration;
- (id)_fromAnimation;
- (double)_fromValue;
- (double)_lastTime;
- (void)_setLastTime:(double)arg1;
- (void)_setStartTime:(double)arg1;
- (double)_startTime;
- (double)_toValue;
- (id)description;
- (bool)isFinished;
- (void)set_fromAnimation:(id)arg1;
- (void)set_fromValue:(double)arg1;
- (void)updateWithTimestamp:(double)arg1;
- (double)value;

@end
