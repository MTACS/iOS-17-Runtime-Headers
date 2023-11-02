
@protocol SBDeactivationSettings <NSObject>

@required

- (void)applyDeactivationSettings:(SBDeactivationSettings *)arg1;
- (bool)boolForDeactivationSetting:(unsigned int)arg1;
- (void)clearDeactivationSettings;
- (SBDeactivationSettings *)copyDeactivationSettings;
- (long long)flagForDeactivationSetting:(unsigned int)arg1;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;

@end
