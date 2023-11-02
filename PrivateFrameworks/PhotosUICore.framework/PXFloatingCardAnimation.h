
@interface PXFloatingCardAnimation : NSObject {
    PXFloatingCardAnimation * _coordinatedUnitAnimation;
    double  _delay;
    double  _duration;
    unsigned long long  _type;
    union { 
        struct { 
            long long curve; 
        } basic; 
        struct { 
            double mass; 
            double stiffness; 
            double damping; 
            double initialVelocity; 
        } spring; 
        struct { 
            double initialVelocity; 
        } defaultSpring; 
    }  _typeParameters;
}

@property (nonatomic, readonly) PXFloatingCardAnimation *coordinatedUnitAnimation;

+ (id)animationUsingDefaultSpringWithInitialVelocity:(double)arg1 delay:(double)arg2;
+ (id)animationWithDuration:(double)arg1 curve:(long long)arg2 delay:(double)arg3;
+ (id)animationWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 delay:(double)arg5;
+ (id)drawerReleaseAnimationWithInitialVelocity:(double)arg1;

- (void).cxx_destruct;
- (void)applyAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)coordinatedUnitAnimation;
- (id)description;
- (id)initUsingDefaultSpringWithInitialVelocity:(double)arg1 delay:(double)arg2;
- (id)initWithDuration:(double)arg1 curve:(long long)arg2 delay:(double)arg3;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 delay:(double)arg5;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 delay:(double)arg5 calculateCoordinatedAnimation:(bool)arg6;

@end
