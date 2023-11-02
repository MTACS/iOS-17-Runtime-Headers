
@interface DAEASOAuthRequest : NSObject

+ (id)authCodeFromRequest:(id)arg1;
+ (id)errorDescriptionFromRequest:(id)arg1;
+ (id)errorDomainFromRequest:(id)arg1;
+ (id)requestForURL:(id)arg1;
+ (id)stateFromRequest:(id)arg1;
+ (id)urlForOAuthURI:(id)arg1 clientID:(id)arg2 redirectURI:(id)arg3 scope:(id)arg4 username:(id)arg5 state:(id)arg6 codeChallenge:(id)arg7 codeChallengeMethod:(long long)arg8;
+ (id)urlForOnPremOAuthURI:(id)arg1 clientID:(id)arg2 redirectURI:(id)arg3 username:(id)arg4 state:(id)arg5 resource:(id)arg6 claims:(id)arg7;
+ (bool)urlPageWillContainAuthorizationCode:(id)arg1;

@end
