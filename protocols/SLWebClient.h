
@protocol SLWebClient <NSObject, NSSecureCoding>

@required

- (NSString *)authRequestURL;
- (NSString *)clientID;
- (NSString *)clientRedirect;
- (NSString *)clientRedirectForAppOpenURL;
- (NSString *)clientSecret;
- (NSArray *)defaultScope;
- (NSArray *)emailScope;
- (NSString *)fallbackUserInfoURL;
- (Class)fallbackWebUserInfoResponseClass;
- (NSString *)source;
- (Class)tokenRequestClass;
- (Class)tokenResponseClass;
- (NSString *)tokenURL;
- (NSString *)userInfoURL;
- (Class)webAuthRequestClass;
- (Class)webUserInfoResponseClass;
- (NSArray *)youTubeScope;

@end
