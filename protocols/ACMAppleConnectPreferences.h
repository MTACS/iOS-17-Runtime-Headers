
@protocol ACMAppleConnectPreferences <ACMBasePreferences>

@required

+ (id)preferencesWithStore:(id <ACMPreferencesStore>)arg1;

- (NSString *)UUID;
- (NSDictionary *)allValuesWithOptions:(long long)arg1;
- (void)cleanupOnMemoryWarning;
- (void)clearCache;
- (NSString *)defaultUserName;
- (<ACMEnvironmentPreferences> *)environmentPreferencesWithRealm:(NSString *)arg1;
- (int)logLevel;
- (<ACMPrincipalPreferences> *)principalPreferencesWithPrincipal:(ACFPrincipal *)arg1;
- (void)purgeAllValues;
- (void)purgeAllValuesWithOptions:(long long)arg1;
- (NSString *)recentUserName;
- (void)replaceAllValues:(NSDictionary *)arg1 withOptions:(long long)arg2;
- (bool)runsOn64BitsDevice;
- (void)savePreferencesIfNeeded;
- (void)setDefaultUserName:(NSString *)arg1;
- (void)setLogLevel:(int)arg1;
- (void)setRecentUserName:(NSString *)arg1;
- (void)setRunsOn64BitsDevice:(bool)arg1;
- (void)setShouldRememberPasswordInKeychain:(bool)arg1;
- (void)setUUID:(NSString *)arg1;
- (bool)shouldRememberPasswordInKeychain;

@end
