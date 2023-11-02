
@protocol ASCAuthorizationPresenterDelegate <NSObject>

@required

- (void)authorizationPresenter:(void *)arg1 credentialRequestedForLoginChoice:(void *)arg2 authenticatedContext:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: ASCAuthorizationPresenter *, <ASCLoginChoiceProtocol> *, LAContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ASCCredentialProtocol> *, NSError *, void*
- (void)authorizationPresenter:(void *)arg1 validateUserEnteredPIN:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: ASCAuthorizationPresenter *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ASCCredentialProtocol> *, NSError *, void*

@end
