
@protocol SBActivationSettings <NSObject>

@required

- (void)applyActivationSettings:(SBActivationSettings *)arg1;
- (bool)boolForActivationSetting:(unsigned int)arg1;
- (void)clearActivationSettings;
- (SBActivationSettings *)copyActivationSettings;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;

@end
