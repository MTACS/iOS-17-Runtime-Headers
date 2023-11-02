
@interface CCUIMutableCABasicAnimationParameters : CCUICABasicAnimationParameters

@property (nonatomic) double duration;
@property (nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } frameRateRange;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic, copy) <CCUIAnimationTimingFunctionDescription> *timingFunction;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDuration:(double)arg1;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setTimingFunction:(id)arg1;

@end
