
@interface MDMAuthenticationHelper : NSObject

+ (unsigned long long)enrollmentMethodFromAuthenticateString:(id)arg1 outParams:(id*)arg2;
+ (void)performExchangeMAIDForBearerTokenAtURL:(id)arg1 rmAccountIdentifier:(id)arg2 anchorCertificateRefs:(id)arg3 completionHandler:(id /* block */)arg4;

@end
