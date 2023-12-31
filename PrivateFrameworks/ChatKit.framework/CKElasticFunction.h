
@interface CKElasticFunction : NSObject {
    double  _currentValue;
    double  _elastic;
    double  _friction;
    double  _oldForce;
    double  _tension;
    double  _velocity;
}

@property (nonatomic) double friction;
@property (nonatomic) double input;
@property (nonatomic, readonly) double output;
@property (nonatomic) double tension;
@property (nonatomic, readonly) double velocity;

+ (id)functionWithTension:(double)arg1 friction:(double)arg2 initialValue:(double)arg3;

- (double)friction;
- (id)init;
- (double)input;
- (double)output;
- (void)setFriction:(double)arg1;
- (void)setInput:(double)arg1;
- (void)setTension:(double)arg1;
- (void)step;
- (double)tension;
- (double)velocity;

@end
