
@protocol ASCredentialRequestPaneViewControllerDelegate <NSObject>

@required

- (void)requestPaneViewController:(void *)arg1 didRequestCredentialForLoginChoice:(void *)arg2 authenticatedContext:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: ASCredentialRequestPaneViewController *, <ASCLoginChoiceProtocol> *, LAContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ASCCredentialProtocol> *, NSError *, void*
- (void)requestPaneViewController:(ASCredentialRequestPaneViewController *)arg1 dismissWithCredential:(id <ASCCredentialProtocol>)arg2 error:(NSError *)arg3;
- (void)requestPaneViewControllerPresentExpandedLoginChoiceInterface:(ASCredentialRequestPaneViewController *)arg1;
- (void)requestPaneViewControllerPresentManualPasswordEntryInterface:(ASCredentialRequestPaneViewController *)arg1;
- (void)requestPaneViewControllerRequiresPINEntryInterface:(ASCredentialRequestPaneViewController *)arg1;
- (void)requestPaneViewControllerStartCABLEAuthentication:(ASCredentialRequestPaneViewController *)arg1;

@end
