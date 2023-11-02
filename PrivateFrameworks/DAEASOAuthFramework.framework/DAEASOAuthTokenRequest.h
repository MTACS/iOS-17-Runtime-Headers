
@interface DAEASOAuthTokenRequest : NSObject

+ (id)_urlRequestForTokenRequestURI:(id)arg1 params:(id)arg2 clientID:(id)arg3;
+ (id)claimsValueWithClaimsChallenge:(id)arg1;
+ (id)oauthTokenRefreshRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 scope:(id)arg3 refreshToken:(id)arg4 claims:(id)arg5;
+ (id)urlRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4 scope:(id)arg5 codeVerifier:(id)arg6 claims:(id)arg7;

@end
