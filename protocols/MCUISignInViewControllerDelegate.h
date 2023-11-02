
@protocol MCUISignInViewControllerDelegate <NSObject>

@required

- (void)signInViewController:(MCUISignInViewController *)arg1 didAuthenticateWithResults:(NSMutableDictionary *)arg2 error:(NSError *)arg3;

@optional

- (void)signInViewController:(void *)arg1 willAuthenticateWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 6: MCUISignInViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)signInViewControllerDidCancelAuthentication:(MCUISignInViewController *)arg1;

@end
