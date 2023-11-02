
@interface PKDynamicLayerTransactionEffectConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _style;
}

@property (nonatomic) unsigned long long style;

+ (bool)supportsSecureCoding;

- (void)configureTransactionEffectEmitterLayer:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)configureTransactionEffectEmitterLayer:(id)arg1 withImage:(struct CGImage { }*)arg2 andEmitterShapeData:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end
