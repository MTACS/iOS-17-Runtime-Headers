
@interface _UIVibrancyEffectModernCompositedImpl : _UIVibrancyEffectImpl {
    UIColor * _compositingColor;
    long long  _compositingMode;
    NSString * _filterType;
}

- (void).cxx_destruct;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)implementationReplacingTintColor:(id)arg1;
- (id)initWithCompositingMode:(long long)arg1 compositingColor:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
