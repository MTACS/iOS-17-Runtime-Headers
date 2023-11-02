
@protocol BSSettingDescriptionProvider <NSObject>

@optional

- (bool)appendDescriptionToBuilder:(BSDescriptionBuilder *)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (NSString *)keyDescriptionForSetting:(unsigned long long)arg1;
- (bool)settings:(BSSettings *)arg1 appendDescriptionToBuilder:(BSDescriptionBuilder *)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5;
- (NSString *)settings:(BSSettings *)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (NSString *)settings:(BSSettings *)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (NSString *)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
