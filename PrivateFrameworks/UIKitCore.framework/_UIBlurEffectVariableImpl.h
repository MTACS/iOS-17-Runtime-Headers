
@interface _UIBlurEffectVariableImpl : _UIBlurEffectImpl {
    double  _blurRadius;
    double  _blurScale;
    UIImage * _imageMask;
}

- (void).cxx_destruct;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBaseRadius:(double)arg1 imageMask:(id)arg2 scale:(double)arg3;
- (bool)isEqual:(id)arg1;

@end
