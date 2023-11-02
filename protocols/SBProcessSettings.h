
@protocol SBProcessSettings <NSObject>

@required

- (void)applyProcessSettings:(SBProcessSettings *)arg1;
- (bool)boolForProcessSetting:(long long)arg1;
- (void)clearProcessSettings;
- (SBProcessSettings *)copyProcessSettings;
- (long long)flagForProcessSetting:(long long)arg1;
- (id)objectForProcessSetting:(long long)arg1;
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;

@end
