
@interface CASpringAnimation : CABasicAnimation

@property bool allowsOverdamping;
@property (readonly) double bounce;
@property double damping;
@property double initialVelocity;
@property double mass;
@property (readonly) double perceptualDuration;
@property (readonly) double settlingDuration;
@property double stiffness;
@property double velocity;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)defaultValueForKey:(id)arg1;

- (void*)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(void*)arg1 layer:(id)arg2;
- (float)_solveForInput:(float)arg1;
- (double)_timeFunction:(double)arg1;
- (bool)allowsOverdamping;
- (double)bounce;
- (double)damping;
- (double)durationForEpsilon:(double)arg1;
- (id)initWithPerceptualDuration:(double)arg1 bounce:(double)arg2;
- (double)initialVelocity;
- (double)mass;
- (double)perceptualDuration;
- (void)setAllowsOverdamping:(bool)arg1;
- (void)setDamping:(double)arg1;
- (void)setInitialVelocity:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setStiffness:(double)arg1;
- (void)setVelocity:(double)arg1;
- (double)settlingDuration;
- (double)stiffness;
- (double)velocity;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

+ (id)_lp_springWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

+ (id)cps_animationForKeyPath:(id)arg1 from:(id)arg2 to:(id)arg3 beginAfter:(double)arg4 duration:(double)arg5 mass:(double)arg6 stiffness:(double)arg7 damping:(double)arg8 keepFinalFrame:(bool)arg9;

@end
