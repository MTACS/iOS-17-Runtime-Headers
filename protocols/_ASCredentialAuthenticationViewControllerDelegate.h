
@protocol _ASCredentialAuthenticationViewControllerDelegate <NSObject>

@required

- (void)credentialAuthenticationViewController:(void *)arg1 didFinishWithCredential:(void *)arg2 error:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: _ASCredentialAuthenticationViewController *, ASPasswordCredential *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)credentialAuthenticationViewController:(void *)arg1 didFinishWithPasskeyAssertionCredential:(void *)arg2 error:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: _ASCredentialAuthenticationViewController *, ASPasskeyAssertionCredential *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)credentialAuthenticationViewController:(void *)arg1 didFinishWithPasskeyRegistrationCredential:(void *)arg2 error:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: _ASCredentialAuthenticationViewController *, ASPasskeyRegistrationCredential *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentUIForPasswordCredentialAuthenticationViewController:(_ASCredentialAuthenticationViewController *)arg1;

@end
