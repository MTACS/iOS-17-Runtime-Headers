
@interface UIDynamicAppDefinedColor : UIDynamicColor {
    NSDictionary * _colorsByThemeKey;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_generateColorsByTraitCollection;
- (id)_initWithColorsByThemeKey:(id)arg1;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithColorsByTraitCollection:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
