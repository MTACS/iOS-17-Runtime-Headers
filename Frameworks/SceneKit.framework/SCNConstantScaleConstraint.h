
@interface SCNConstantScaleConstraint : SCNConstraint {
    float  _scale;
    bool  _screenSpace;
}

@property (nonatomic) float scale;
@property (nonatomic) bool screenSpace;

+ (id)constantScaleConstraint;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)scale;
- (bool)screenSpace;
- (void)setScale:(float)arg1;
- (void)setScreenSpace:(bool)arg1;

@end
