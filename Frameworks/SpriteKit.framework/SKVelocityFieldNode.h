
@interface SKVelocityFieldNode : SKFieldNode {
    SKTexture * _velocityTexture;
}

@property (nonatomic) void velocity;
@property (nonatomic, retain) SKTexture *velocityTexture;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionClassName;
- (void)_initialize;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setVelocity;
- (void)setVelocityTexture:(id)arg1;
- (void)velocity;
- (id)velocityTexture;

@end
