
@interface UIDynamicModifiedColor : UIDynamicColor {
    double  _alphaComponent;
    UIDynamicColor * _baseColor;
    long long  _contrast;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_highContrastDynamicColor;
- (bool)_isDynamicTintColor;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (id)_resolvedMaterialWithTraitCollection:(id)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBaseColor:(id)arg1 alphaComponent:(double)arg2 contrast:(long long)arg3;
- (bool)isEqual:(id)arg1;

@end
