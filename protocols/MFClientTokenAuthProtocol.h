
@protocol MFClientTokenAuthProtocol <NSObject>

@required

- (NSString *)clientToken;
- (NSString *)oauth2Token;
- (NSString *)password;
- (NSString *)username;

@end
