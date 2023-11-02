
@interface SBPIPWindowLevelOverrideAssertion : SBPIPBehaviorOverrideAssertion {
    unsigned long long  _windowLevel;
}

@property (nonatomic, readonly) unsigned long long windowLevel;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithWindowLevel:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 invalidationBlock:(id /* block */)arg4;
- (unsigned long long)windowLevel;

@end
