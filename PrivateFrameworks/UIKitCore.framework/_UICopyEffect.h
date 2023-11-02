
@interface _UICopyEffect : UIVisualEffect {
    _UIVisualEffectViewBackdropCaptureGroup * _captureGroup;
}

+ (id)copyEffectWithCaptureGroup:(id)arg1;

- (void).cxx_destruct;
- (long long)_expectedUsage;
- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;

@end
