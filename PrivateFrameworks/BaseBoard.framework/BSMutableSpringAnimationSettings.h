
@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings <BSAnimationSettingsMutating>

@property (nonatomic) double damping;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic) double epsilon;
@property (nonatomic) double frameInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double mass;
@property (nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } preferredFrameRateRange;
@property (nonatomic) float speed;
@property (nonatomic) double stiffness;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

- (void)setDamping:(double)arg1;
- (void)setDelay:(double)arg1;
- (void)setEpsilon:(double)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setInitialVelocity:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)setSpeed:(float)arg1;
- (void)setStiffness:(double)arg1;
- (void)setTimingFunction:(id)arg1;

@end
