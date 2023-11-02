
@interface _UIBlurEffectModernImpl : _UIBlurEffectImpl {
    double  _blurRadius;
    double  _blurScale;
}

- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBlurRadius:(double)arg1 scale:(double)arg2;
- (bool)isEqual:(id)arg1;

@end
