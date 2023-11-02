
@interface ACMExternalAppleConnectPreferences : ACMAppleConnectPreferences

@property (nonatomic, retain) NSData *secret;

- (id)createEnvironmentWithRealm:(id)arg1;
- (id)secret;
- (void)setSecret:(id)arg1;

@end
