
@interface WFDrawerSpringInfo : NSObject {
    double  _damping;
    double  _initialVelocity;
    double  _mass;
    double  _overshootTime;
    double  _settlingTime;
    double  _stiffness;
    double  _undershootTime;
}

@property (readonly) double damping;
@property (readonly) double initialVelocity;
@property (readonly) double mass;
@property (readonly) double overshootTime;
@property (readonly) double settlingTime;
@property (readonly) double stiffness;
@property (readonly) double undershootTime;

- (double)damping;
- (id)description;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4;
- (double)initialVelocity;
- (double)mass;
- (double)overshootTime;
- (double)settlingTime;
- (double)stiffness;
- (double)undershootTime;
- (double)valueAtTime:(double)arg1;

@end
