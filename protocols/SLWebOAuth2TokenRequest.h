
@protocol SLWebOAuth2TokenRequest <NSObject>

@required

+ (NSURLRequest *)urlRequestForClientID:(NSString *)arg1 secret:(NSString *)arg2 redirectURI:(NSString *)arg3 authCode:(NSString *)arg4 tokenURL:(NSString *)arg5;
+ (NSURLRequest *)urlRequestForClientID:(NSString *)arg1 secret:(NSString *)arg2 redirectURI:(NSString *)arg3 authCode:(NSString *)arg4 tokenURL:(NSString *)arg5 codeVerifier:(NSString *)arg6;
+ (NSURLRequest *)urlRequestForClientID:(NSString *)arg1 secret:(NSString *)arg2 refreshToken:(NSString *)arg3 tokenURL:(NSString *)arg4;

@end