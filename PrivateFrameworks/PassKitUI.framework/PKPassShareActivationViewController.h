
@interface PKPassShareActivationViewController : PKPassShareRedemptionViewController {
    NSString * _activationCode;
    PKPassSharePendingActivation * _pendingActivation;
}

- (void).cxx_destruct;
- (void)_showError:(id)arg1;
- (void)activationCodeDidChangeToCode:(id)arg1;
- (void)cancelButtonPressed;
- (void)continueButtonPressed;
- (id)init;
- (id)initWithPendingActivation:(id)arg1;
- (void)loadCardArt;
- (void)loadView;

@end
