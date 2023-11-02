
@interface SCNPhysicsBehavior : NSObject <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)bodyA;
- (id)bodyB;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasReferenceToPhysicsBody:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
