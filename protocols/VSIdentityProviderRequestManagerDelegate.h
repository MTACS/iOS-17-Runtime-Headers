
@protocol VSIdentityProviderRequestManagerDelegate <NSObject>

@required

- (void)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 finishedRequest:(VSIdentityProviderRequest *)arg2 withResult:(VSFailable *)arg3;

@optional

- (VSApplicationController *)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 applicationControllerWithIdentityProvider:(VSIdentityProvider *)arg2;
- (void)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 didAuthenticateAccount:(VSAccount *)arg2 forRequest:(VSIdentityProviderRequest *)arg3;
- (bool)identityProviderRequestManager:(VSIdentityProviderRequestManager *)arg1 requestsAlert:(VSIdentityProviderAlert *)arg2;

@end
