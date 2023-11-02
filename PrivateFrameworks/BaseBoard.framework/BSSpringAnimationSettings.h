
@interface BSSpringAnimationSettings : BSAnimationSettings

@property (nonatomic, readonly) double damping;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) double initialVelocity;
@property (nonatomic, readonly) double mass;
@property (nonatomic, readonly) double stiffness;

+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 delay:(double)arg5 timingFunction:(id)arg6;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4;

- (id)init;

@end
