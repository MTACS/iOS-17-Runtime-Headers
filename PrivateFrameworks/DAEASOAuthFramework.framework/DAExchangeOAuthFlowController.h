
@interface DAExchangeOAuthFlowController : DAEASOAuthFlowController

- (id)_accountDescription;
- (void)exchangeAuthCode:(id)arg1 codeVerifier:(id)arg2 claims:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)initWithAuthURI:(id)arg1 easEndPoint:(id)arg2 username:(id)arg3 accountId:(id)arg4 claims:(id)arg5 isOnPrem:(bool)arg6;
- (id)initialRedirectURL;

@end
