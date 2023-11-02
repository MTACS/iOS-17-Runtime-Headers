
@protocol WFOAuth2ProviderSessionManager <NSObject>

@required

- (id)initWithClientID:(NSString *)arg1 clientSecret:(NSString *)arg2;
- (id)initWithSessionConfiguration:(NSURLSessionConfiguration *)arg1 clientID:(NSString *)arg2 clientSecret:(NSString *)arg3;

@end
