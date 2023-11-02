
@interface ProximityAppleIDSetupUI.PASUIProxiedTermsHandler : NSObject <AAUIGenericTermsRemoteUIDelegate> {
    void _viewControllerProvider;
    void acceptAction;
    void acceptedTermsInfo;
    void authResults;
    void declineAction;
    void didAccept;
    void proxiedDevice;
    void proxiedTermsRemoteUI;
}

- (void).cxx_destruct;
- (void)genericTermsRemoteUI:(id)arg1 acceptedTermsInfo:(id)arg2;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (id)init;

@end
