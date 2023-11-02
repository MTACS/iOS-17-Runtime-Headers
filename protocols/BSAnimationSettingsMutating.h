
@protocol BSAnimationSettingsMutating <NSObject>

@required

- (double)delay;
- (double)frameInterval;
- (unsigned int)highFrameRateReason;
- (struct CAFrameRateRange { float x1; float x2; float x3; })preferredFrameRateRange;
- (void)setDelay:(double)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)setSpeed:(float)arg1;
- (void)setTimingFunction:(CAMediaTimingFunction *)arg1;
- (float)speed;
- (CAMediaTimingFunction *)timingFunction;

@end
