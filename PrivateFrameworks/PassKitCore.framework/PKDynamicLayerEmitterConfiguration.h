
@interface PKDynamicLayerEmitterConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _density;
    CAEmitterLayer * _emitterLayer;
    unsigned long long  _physicsEffect;
    unsigned long long  _style;
}

@property (nonatomic) unsigned long long density;
@property (nonatomic) unsigned long long physicsEffect;
@property (nonatomic) unsigned long long style;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)_emitterBirthrate;
- (float)_emitterScaleWithPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)configureEmitterLayer:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)configureEmitterLayer:(id)arg1 withImage:(struct CGImage { }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)density;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)physicsEffect;
- (void)setDensity:(unsigned long long)arg1;
- (void)setPhysicsEffect:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end
