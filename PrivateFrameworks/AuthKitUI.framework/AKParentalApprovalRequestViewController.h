
@interface AKParentalApprovalRequestViewController : AKAuthorizationPaneViewController {
    AKAuthorizationViewController * _authorizationViewController;
    AKAuthorizationSubPaneInfoLabel * _messageLabel;
    AKAuthorizationPresentationContext * _presentationContext;
    bool  _requestStatusPending;
}

@property (nonatomic) AKAuthorizationViewController *authorizationViewController;

- (void).cxx_destruct;
- (void)_addSendButtonToContext:(id)arg1;
- (void)_createIconViewWithIcon:(id)arg1;
- (void)_handleAuthorizationError:(id)arg1;
- (id)_localizedButtonTitleString;
- (id)_localizedDescriptionLabelString;
- (id)_localizedTitleString;
- (void)_paneDelegate_authorizationPaneViewControllerDismissWithAuthorization:(id)arg1 error:(id)arg2;
- (void)_paneDelegate_didRequestAuthorizationWithUserProvidedInformation:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendButtonSelected:(id)arg1;
- (void)_setupIconView;
- (void)_setupMessageLabel;
- (void)_setupTitleLabel;
- (id)_userResponse;
- (id)authorizationViewController;
- (id)initWithPresentationContext:(id)arg1;
- (void)setAuthorizationViewController:(id)arg1;
- (void)viewDidLoad;

@end
