
@interface ARCoachingSpringDouble3 : NSObject {
    double  _dampingRatio;
    double  _response;
    NSArray * _springs;
}

@property (nonatomic) double dampingRatio;
@property (nonatomic) void floatValue;
@property (nonatomic) double response;
@property (nonatomic, readonly) NSArray *springs;
@property (nonatomic) void target;
@property (nonatomic) void value;
@property (nonatomic) void velocity;

- (void).cxx_destruct;
- (double)dampingRatio;
- (void)floatValue;
- (id)init;
- (double)response;
- (void)setDampingRatio:(double)arg1;
- (void)setFloatValue;
- (void)setResponse:(double)arg1;
- (void)setTarget;
- (void)setValue;
- (void)setVelocity;
- (id)springs;
- (void)stepWithDeltaTime:(double)arg1;
- (void)target;
- (void)value;
- (void)velocity;

@end
