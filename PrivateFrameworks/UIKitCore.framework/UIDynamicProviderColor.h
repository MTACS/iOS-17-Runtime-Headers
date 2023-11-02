
@interface UIDynamicProviderColor : UIDynamicColor {
    id /* block */  _provider;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithProvider:(id /* block */)arg1;
- (bool)isEqual:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;

@end
