
@interface PXFloatingCardSpringInfo : NSObject {
    double  _damping;
    double  _initialVelocity;
    double  _mass;
    double  _overshootTime;
    double  _settlingTime;
    double  _stiffness;
    double  _undershootTime;
}

@property (nonatomic, readonly) double damping;
@property (nonatomic, readonly) double initialVelocity;
@property (nonatomic, readonly) double mass;
@property (nonatomic, readonly) double overshootTime;
@property (nonatomic, readonly) double settlingTime;
@property (nonatomic, readonly) double stiffness;
@property (nonatomic, readonly) double undershootTime;

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
