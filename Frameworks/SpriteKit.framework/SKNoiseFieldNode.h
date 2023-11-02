
@interface SKNoiseFieldNode : SKFieldNode

@property (nonatomic) float animationSpeed;
@property (nonatomic) float smoothness;

+ (bool)supportsSecureCoding;

- (id)_descriptionClassName;
- (void)_initialize;
- (float)animationSpeed;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAnimationSpeed:(float)arg1;
- (void)setSmoothness:(float)arg1;
- (float)smoothness;

@end
