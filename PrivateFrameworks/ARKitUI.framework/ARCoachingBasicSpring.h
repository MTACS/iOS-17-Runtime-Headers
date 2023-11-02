
@interface ARCoachingBasicSpring : NSObject {
    float  _friction;
    float  _position;
    float  _target;
    float  _tension;
    float  _velocity;
}

@property (nonatomic) float friction;
@property (nonatomic) float input;
@property (nonatomic, readonly) float output;
@property (nonatomic) float tension;

- (float)friction;
- (id)initWithTension:(float)arg1 friction:(float)arg2;
- (float)input;
- (float)output;
- (void)setFriction:(float)arg1;
- (void)setInput:(float)arg1;
- (void)setInput:(float)arg1 velocity:(float)arg2;
- (void)setTension:(float)arg1;
- (void)stepWithDeltaTime:(double)arg1;
- (float)tension;

@end
