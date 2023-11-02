
@protocol _ASAccountAuthenticationModificationRemoteViewControllerDelegate <NSObject>

@optional

- (void)accountModificationRemoteViewController:(void *)arg1 didFinishWithCredential:(void *)arg2 userInfo:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: _ASAccountAuthenticationModificationRemoteViewController *, ASPasswordCredential *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)accountModificationRemoteViewController:(void *)arg1 requestCanceledWithError:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _ASAccountAuthenticationModificationRemoteViewController *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)accountModificationRemoteViewController:(_ASAccountAuthenticationModificationRemoteViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)accountModificationRemoteViewControllerDidFinishUpgradeToSignInWithApple:(void *)arg1 userInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _ASAccountAuthenticationModificationRemoteViewController *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dismissAccountModificationRemoteViewController:(_ASAccountAuthenticationModificationRemoteViewController *)arg1;
- (void)presentAccountModificationRemoteViewController:(_ASAccountAuthenticationModificationRemoteViewController *)arg1;

@end
