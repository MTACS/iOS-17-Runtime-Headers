
@interface PKPhysicsFieldNoise : PKPhysicsField

@property (nonatomic) float animationSpeed;
@property (nonatomic) float smoothness;

+ (id)field;

- (float)animationSpeed;
- (id)init;
- (id)initWithField:(struct shared_ptr<PKCField> { struct PKCField {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setAnimationSpeed:(float)arg1;
- (void)setSmoothness:(float)arg1;
- (float)smoothness;

@end
