
@interface CDPAuthenticationHelper : NSObject

+ (id)_authContextForContext:(id)arg1;
+ (void)_authWithContext:(id)arg1 completion:(id /* block */)arg2;
+ (id)_contextForPrimaryAccount;
+ (id)_contextForPrimaryAccountSilentAuth;
+ (id)authController;
+ (void)silentAuthenticationForContext:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)silentAuthenticationForPrimaryAccountWithClientAppName:(id)arg1 clientAppBundleId:(id)arg2 withCompletion:(id /* block */)arg3;
+ (void)silentAuthenticationForPrimaryAccountWithCompletion:(id /* block */)arg1;

@end
