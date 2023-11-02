
@interface HRUIClinicalAccountLoginSession : NSObject <ASWebAuthenticationPresentationContextProviding> {
    void accountStore;
    void authSession;
    void funnelContext;
    void presentationAnchor;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAccountStore:(id)arg1 presentationAnchor:(id)arg2 funnelContext:(long long)arg3;
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;
- (bool)startLoginWithGateway:(id)arg1 loginCancelledHandler:(id /* block */)arg2 callbackErrorHandler:(id /* block */)arg3 error:(id*)arg4;
- (bool)startReloginToAccount:(id)arg1 viewController:(id)arg2 profile:(id)arg3 loginCancelledHandler:(id /* block */)arg4 callbackErrorHandler:(id /* block */)arg5 error:(id*)arg6;

@end
