
@protocol AASignInFlowControllerDelegate <NSObject>

@optional

- (bool)backgroundDataclassEnablement;
- (CDPContext *)cdpContext;
- (unsigned long long)findMyActivationAction;
- (bool)isFastSignInEnabled;
- (NSSet *)requiredTerms;
- (void)setBackgroundDataclassEnablement:(bool)arg1;
- (void)setCdpContext:(CDPContext *)arg1;
- (void)setFastSignInEnabled:(bool)arg1;
- (void)setFindMyActivationAction:(unsigned long long)arg1;
- (void)setRequiredTerms:(NSSet *)arg1;
- (void)setShouldStashLoginResponse:(bool)arg1;
- (void)setSkipCDPEnablement:(bool)arg1;
- (void)setSkipDataclassEnablement:(bool)arg1;
- (bool)shouldStashLoginResponse;
- (void)signInFlowController:(void *)arg1 enableFindMyWithAction:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: AASignInFlowController *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)signInFlowController:(void *)arg1 presentGenericTermsUIForAccount:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: AASignInFlowController *, ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, ACAccount *, NSError *, void*
- (void)signInFlowController:(void *)arg1 presentProgressViewForAccount:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: AASignInFlowController *, ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)signInFlowController:(void *)arg1 saveAccount:(void *)arg2 withAllDataclassesEnabledIfPossibleWithCompletion:(void *)arg3; // needs 3 arg types, found 10: AASignInFlowController *, ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, ACAccount *, NSError *, void*
- (void)signInFlowController:(void *)arg1 showAlertWithTitle:(void *)arg2 message:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: AASignInFlowController *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)skipCDPEnablement;
- (bool)skipDataclassEnablement;

@end
