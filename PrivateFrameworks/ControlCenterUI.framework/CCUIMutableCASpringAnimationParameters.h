
@interface CCUIMutableCASpringAnimationParameters : CCUICASpringAnimationParameters

@property (nonatomic) double damping;
@property (nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } frameRateRange;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic, copy) <CCUIAnimationTimingFunctionDescription> *timingFunction;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDamping:(double)arg1;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setMass:(double)arg1;
- (void)setStiffness:(double)arg1;
- (void)setTimingFunction:(id)arg1;

@end
