
@interface _UICompoundEffect : UIVisualEffect {
    NSArray * _effects;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_allEffects;
- (void)_enumerateEffects:(id /* block */)arg1;
- (long long)_expectedUsage;
- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffects:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
