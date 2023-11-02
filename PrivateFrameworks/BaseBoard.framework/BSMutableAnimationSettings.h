
@interface BSMutableAnimationSettings : BSAnimationSettings <BSAnimationSettingsMutating>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) double frameInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } preferredFrameRateRange;
@property (nonatomic) float speed;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)setSpeed:(float)arg1;
- (void)setTimingFunction:(id)arg1;

@end
