
@interface ARCoachingQuaternionSpring : NSObject {
    double  _dampingRatio;
    double  _response;
    NSArray * _springs;
}

@property (nonatomic) double dampingRatio;
@property (nonatomic) double response;
@property (nonatomic, readonly) NSArray *springs;
@property (nonatomic) struct { } target;
@property (nonatomic) struct { } value;
@property (nonatomic) struct { } velocity;

- (void).cxx_destruct;
- (double)dampingRatio;
- (id)init;
- (double)response;
- (void)setDampingRatio:(double)arg1;
- (void)setResponse:(double)arg1;
- (void)setTarget:(struct { })arg1;
- (void)setValue:(struct { })arg1;
- (void)setVelocity:(struct { })arg1;
- (id)springs;
- (void)stepWithDeltaTime:(double)arg1;
- (struct { })target;
- (struct { })value;
- (struct { })velocity;

@end
