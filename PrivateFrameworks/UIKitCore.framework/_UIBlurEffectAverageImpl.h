
@interface _UIBlurEffectAverageImpl : _UIBlurEffectImpl {
    double  _scale;
}

+ (id)sharedInstance;

- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithScale:(double)arg1;
- (bool)isEqual:(id)arg1;

@end
