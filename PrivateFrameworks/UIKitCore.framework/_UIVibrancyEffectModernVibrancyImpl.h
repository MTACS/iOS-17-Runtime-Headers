
@interface _UIVibrancyEffectModernVibrancyImpl : _UIVibrancyEffectImpl {
    UIColor * _compositingColor;
    NSString * _filterType;
    UIColor * _inputColor1;
    UIColor * _inputColor2;
    bool  _inputReversed;
}

- (void).cxx_destruct;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)implementationReplacingTintColor:(id)arg1;
- (id)initWithFilter:(id)arg1 inputColor1:(id)arg2 inputColor2:(id)arg3 compositingColor:(id)arg4 inputReversed:(bool)arg5;
- (bool)isEqual:(id)arg1;

@end
