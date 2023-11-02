
@protocol ASCAuthorizationPresenterHostProtocol <NSObject>

@required

- (void)authorizationRequestFinishedWithCredential:(void *)arg1 error:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: <ASCCredentialProtocol> *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)authorizationRequestInitiatedWithLoginChoice:(void *)arg1 authenticatedContext:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: <ASCLoginChoiceProtocol> *, LAContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ASCCredentialProtocol> *, NSError *, void*
- (void)cableClientWillAuthenticate;
- (void)cableClientWillConnect;
- (void)initializeClientToViewServiceConnection;
- (void)presentAuthorizationWithContext:(void *)arg1 forProcess:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: ASCAuthorizationPresentationContext *, BSProcessHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ASCCredentialProtocol> *, NSError *, void*
- (void)presentError:(void *)arg1 forService:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSError *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentPINEntryInterface;
- (void)startCABLEAuthenticationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ASCAuthorizationPresentationContext *, NSError *, void*
- (void)updateInterfaceForUserVisibleError:(NSError *)arg1;
- (void)updateInterfaceWithLoginChoices:(NSArray *)arg1;
- (void)validateUserEnteredPIN:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ASCCredentialProtocol> *, NSError *, void*

@end
