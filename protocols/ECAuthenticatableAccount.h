
@protocol ECAuthenticatableAccount <NSObject>

@required

- (NSString *)domain;
- (NSString *)hostname;
- (NSString *)oauth2Token;
- (NSString *)password;
- (void)setMissingPasswordError;
- (NSString *)username;

@end
