
@interface AKAuthorizationFirstTimePaneViewController : AKAuthorizationPaneViewController {
    AKAuthorizationViewController * _authorizationViewController;
}

@property (nonatomic) AKAuthorizationViewController *authorizationViewController;

- (void).cxx_destruct;
- (void)_addContinueButtonToContext:(id)arg1 title:(id)arg2;
- (void)_addPrivacyLinkToContext:(id)arg1;
- (void)_addTitleToContext:(id)arg1;
- (void)_continueButtonSelected:(id)arg1;
- (id)authorizationViewController;
- (void)setAuthorizationViewController:(id)arg1;
- (bool)shouldEmbedContentTrayIfNeeded;
- (void)viewDidLoad;

@end
