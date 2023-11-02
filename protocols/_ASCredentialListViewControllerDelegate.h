
@protocol _ASCredentialListViewControllerDelegate <NSObject>

@optional

- (void)credentialListViewController:(void *)arg1 didFinishWithCredential:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _ASCredentialListViewController *, ASPasswordCredential *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)credentialListViewController:(void *)arg1 didFinishWithPasskeyAssertionCredential:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _ASCredentialListViewController *, ASPasskeyAssertionCredential *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)credentialListViewControllerDidPrepareInterface:(_ASCredentialListViewController *)arg1;

@end
