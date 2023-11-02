
@interface AMSMediaInvokeAuthenticationHandler : NSObject

+ (id)_authenticateRequestWithAuthType:(unsigned long long)arg1 taskInfo:(id)arg2;
+ (unsigned long long)_authenticationTypeForResponse:(id)arg1;
+ (id)_performAuthRequest:(id)arg1 redirectURL:(id)arg2 taskInfo:(id)arg3;
+ (id)_presentAuthRequest:(id)arg1 taskInfo:(id)arg2;
+ (bool)isInvokeAuthenticationEnabled;
+ (id)performAuthFromResponse:(id)arg1 taskInfo:(id)arg2;

@end
