
@protocol ACMBaseAuthenticationRequest <NSObject>

@required

- (NSNumber *)appID;
- (NSString *)appIDKey;
- (NSString *)realm;
- (NSNumber *)serverResponseTimeout;
- (void)setAppID:(NSNumber *)arg1;
- (void)setAppIDKey:(NSString *)arg1;
- (void)setRealm:(NSString *)arg1;
- (void)setServerResponseTimeout:(NSNumber *)arg1;
- (void)setUserName:(NSString *)arg1;
- (NSString *)userName;

@end
