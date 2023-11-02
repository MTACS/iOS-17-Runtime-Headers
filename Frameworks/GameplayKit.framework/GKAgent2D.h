
@interface GKAgent2D : GKAgent <NSSecureCoding>

@property (nonatomic) void position;
@property (nonatomic) float rotation;
@property (nonatomic, readonly) void velocity;

+ (bool)supportsSecureCoding;

- (void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2;
- (void)applySteeringForce:(void *)arg1 deltaTime:(void *)arg2; // needs 2 arg types, found 1: double
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)position;
- (struct float2 { float x1; float x2; })position_;
- (float)rotation;
- (void)setPosition;
- (void)setPosition_:(struct float2 { float x1; float x2; })arg1;
- (void)setRotation:(float)arg1;
- (void)updateWithDeltaTime:(double)arg1;
- (void)velocity;
- (struct float2 { float x1; float x2; })velocity_;

@end
