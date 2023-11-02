
@protocol _ASAccountAuthenticationModificationHostViewControllerDelegate <NSObject>

@optional

- (void)accountModificationHostViewController:(void *)arg1 didFinishWithCredential:(void *)arg2 userInfo:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: _ASAccountAuthenticationModificationHostViewController *, ASPasswordCredential *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)accountModificationHostViewController:(void *)arg1 requestCanceledWithError:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _ASAccountAuthenticationModificationHostViewController *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)accountModificationHostViewControllerDidCompleteUpgradeToSignInWithApple:(void *)arg1 userInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _ASAccountAuthenticationModificationHostViewController *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dismissUIForAccountModificationHostViewController:(_ASAccountAuthenticationModificationHostViewController *)arg1;
- (void)presentUIForAccountModificationHostViewController:(_ASAccountAuthenticationModificationHostViewController *)arg1;

@end
