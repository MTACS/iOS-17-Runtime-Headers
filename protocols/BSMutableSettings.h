
@protocol BSMutableSettings <NSObject>

@required

- (void)applySettings:(BSSettings *)arg1;
- (void)removeAllSettings;
- (void)setFlag:(long long)arg1 forSetting:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forSetting:(unsigned long long)arg2;

@end
