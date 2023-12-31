
@protocol AKSignInViewControllerDelegate <NSObject>

@optional

- (void)signInViewController:(AKBaseSignInViewController *)arg1 didAuthenticateWithResults:(NSMutableDictionary *)arg2 error:(NSError *)arg3;
- (bool)signInViewController:(AKBaseSignInViewController *)arg1 shouldContinueWithAuthenticationResults:(NSMutableDictionary *)arg2 error:(NSError *)arg3 forContext:(AKAppleIDAuthenticationContext *)arg4;
- (void)signInViewController:(void *)arg1 shouldContinueWithAuthenticationResults:(void *)arg2 error:(void *)arg3 forContext:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: AKBaseSignInViewController *, NSMutableDictionary *, NSError *, AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)signInViewController:(void *)arg1 willPerformAuthenticationWithContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: AKBaseSignInViewController *, AKAppleIDAuthenticationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
