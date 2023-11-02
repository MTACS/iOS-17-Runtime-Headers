
@protocol CalMigrationAccount <CalMigrationReadOnlyAccount>

@required

- (NSString *)accountDescription;
- (id)accountPropertyForKey:(NSString *)arg1;
- (bool)authenticated;
- (bool)dirty;
- (bool)enabledForCalendarsDataClass;
- (bool)provisionedForCalendarsDataClass;
- (void)setAccountDescription:(NSString *)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(NSString *)arg2;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticationTypeNone;
- (void)setAuthenticationTypeParent;
- (void)setEnabledForCalendarsDataClass:(bool)arg1;
- (void)setPassword:(NSString *)arg1;
- (void)setProvisionedForCalendarsDataClass:(bool)arg1;
- (void)setUsername:(NSString *)arg1;
- (void)setVisible:(bool)arg1;
- (NSString *)username;
- (bool)visible;

@end
