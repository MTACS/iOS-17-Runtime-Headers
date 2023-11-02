
@interface ACMAppleConnectPreferences : ACMPreferences <ACMAppleConnectPreferences> {
    NSMutableDictionary * _environmentsContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultUserName;
@property (readonly, copy) NSString *description;
@property (readonly, retain) NSMutableDictionary *environmentsContainer;
@property (readonly) unsigned long long hash;
@property (nonatomic) int logLevel;
@property (retain) <ACMPreferencesStore> *preferencesStore;
@property (nonatomic) NSString *recentUserName;
@property (nonatomic) bool shouldRememberPasswordInKeychain;
@property (readonly) Class superclass;

+ (id)preferencesWithStore:(id)arg1;

- (id)UUID;
- (id)allValuesWithOptions:(long long)arg1;
- (void)cleanupOnMemoryWarning;
- (void)clearCache;
- (id)createEnvironmentWithRealm:(id)arg1;
- (void)dealloc;
- (id)defaultUserName;
- (id)environmentPreferencesWithRealm:(id)arg1;
- (id)environmentsContainer;
- (id)initWithPreferencesStore:(id)arg1;
- (int)logLevel;
- (id)principalPreferencesWithPrincipal:(id)arg1;
- (void)purgeAllValues;
- (void)purgeAllValuesWithOptions:(long long)arg1;
- (id)recentUserName;
- (void)replaceAllValues:(id)arg1 withOptions:(long long)arg2;
- (bool)runsOn64BitsDevice;
- (void)savePreferencesIfNeeded;
- (void)setDefaultUserName:(id)arg1;
- (void)setLogLevel:(int)arg1;
- (void)setRecentUserName:(id)arg1;
- (void)setRunsOn64BitsDevice:(bool)arg1;
- (void)setShouldRememberPasswordInKeychain:(bool)arg1;
- (void)setUUID:(id)arg1;
- (bool)shouldRememberPasswordInKeychain;

@end
