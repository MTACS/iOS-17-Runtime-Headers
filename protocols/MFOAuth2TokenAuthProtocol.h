
@protocol MFOAuth2TokenAuthProtocol <NSObject>

@required

- (NSString *)oauth2Token;
- (NSString *)password;
- (NSString *)username;

@end
