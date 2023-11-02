
@interface SLGoogleAuthController : SLWebAuthController {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    ASWebAuthenticationSession * _authenticationSession;
    NSString * _clientID;
    id /* block */  _presentationBlock;
}

+ (id)_identityFromUsername:(id)arg1 displayName:(id)arg2 token:(id)arg3 refreshToken:(id)arg4 idToken:(id)arg5;
+ (void)_presentInternetOfflineError;
+ (void)_presentUsernameMismatchAlert;
+ (id)googleAuthControllerWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (id)googleAuthControllerWithPresentationBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (id)googleAuthControllerWithYouTubeUsername:(id)arg1 presentationBlock:(id /* block */)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_completeWithIdentity:(id)arg1 error:(id)arg2;
- (void)_didRedirectToURL:(id)arg1 codeVerifier:(id)arg2;
- (void)_dismissAndCompleteWithIdentity:(id)arg1 error:(id)arg2;
- (id)_initWithAccount:(id)arg1 accountStore:(id)arg2 username:(id)arg3 youTube:(bool)arg4 emailOnly:(bool)arg5 clientID:(id)arg6 presentationBlock:(id /* block */)arg7 completion:(id /* block */)arg8;
- (id)_redirectPathForURI:(id)arg1;
- (id)_webClient;
- (void)cancelAuthorization;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(id /* block */)arg3;
- (id)initWithAccountDescription:(id)arg1 presentationBlock:(id /* block */)arg2;
- (id)initWithClientID:(id)arg1 emailOnlyScope:(bool)arg2 presentationBlock:(id /* block */)arg3;
- (id)initWithEmailOnlyScope:(bool)arg1 presentationBlock:(id /* block */)arg2;

@end