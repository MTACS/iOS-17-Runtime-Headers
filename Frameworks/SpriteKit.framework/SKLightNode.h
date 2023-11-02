
@interface SKLightNode : SKNode {
    void * _skcLightNode;
}

@property (nonatomic, retain) UIColor *ambientColor;
@property (nonatomic) unsigned int categoryBitMask;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) double falloff;
@property (nonatomic, retain) UIColor *lightColor;
@property (nonatomic, retain) UIColor *shadowColor;

+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void)_didMakeBackingNode;
- (void*)_makeBackingNode;
- (id)ambientColor;
- (unsigned int)categoryBitMask;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)falloff;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqualToNode:(id)arg1;
- (unsigned int)lightCategoryBitMask;
- (id)lightColor;
- (double)lightDecay;
- (void)setAmbientColor:(id)arg1;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFalloff:(double)arg1;
- (void)setLightCategoryBitMask:(unsigned int)arg1;
- (void)setLightColor:(id)arg1;
- (void)setLightDecay:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;

@end
