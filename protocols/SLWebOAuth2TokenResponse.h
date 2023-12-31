
@protocol SLWebOAuth2TokenResponse <NSObject>

@required

- (NSString *)GUID;
- (NSDictionary *)data;
- (NSError *)error;
- (NSString *)errorMessage;
- (NSDate *)expiryDate;
- (NSString *)idToken;
- (id)initWithData:(NSData *)arg1 urlResponse:(NSURLResponse *)arg2 error:(NSError *)arg3;
- (NSString *)refreshToken;
- (long long)statusCode;
- (NSString *)token;

@end
