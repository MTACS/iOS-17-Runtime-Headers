
@interface PKPassShareInitiationNavigationController : PKNavigationController <MFMessageComposeViewControllerDelegate, PKInterceptableActivityViewControllerDelegate, PKPassShareActivationOverviewViewControllerDelegate, PKPassShareIntroductionExplanationViewControllerDelegate, PKPassSharePreviewViewControllerDelegate> {
    PKInterceptableActivityViewController * _activityViewController;
    PKShareInitiationAnalyticsReporter * _analyticsReporter;
    MFMessageComposeViewController * _carKeyMessageComposer;
    PKPassShareInitiationContext * _context;
    unsigned long long  _currentStep;
    bool  _hasAppeared;
    bool  _isFromPeopleScreen;
    PKShareableCredentialsMessageComposeViewController * _messageComposer;
    PKPassSharePreviewViewController * _previewViewController;
    <PKClientShareSecureElementPassViewControllerDelegate> * _shareDelegate;
    PKSharedPassSharesController * _sharesController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFromPeopleScreen;
@property (nonatomic) <PKClientShareSecureElementPassViewControllerDelegate> *shareDelegate;
@property (nonatomic) bool shouldPromptUserToShare;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activityItemForActivationCode;
- (void)_flowDidCancel;
- (void)_flowDidCancelWithError:(id)arg1;
- (void)_flowDidFinishWithSuccess;
- (id)_placeholderActivityItem;
- (void)_revokeCreatedShareWithCompletion:(id /* block */)arg1;
- (void)_sendOverLegacyCarKeyiMessage;
- (void)_sendOverSelectedChannel;
- (void)_sendOveriMessage;
- (void)_sendOveriMessageUsingComposeViewController;
- (void)_transitionToNextStep;
- (unsigned long long)_transitionToNextStepIsMockTransition:(bool)arg1;
- (void)_transitionToStep:(unsigned long long)arg1;
- (void)_updateShareActivationOptions;
- (id)initWithSharesController:(id)arg1 environment:(unsigned long long)arg2;
- (void)interceptableActivityViewController:(id)arg1 didFinishWithShare:(bool)arg2;
- (void)interceptableActivityViewController:(id)arg1 didInterceptActivitySelectionOfType:(id)arg2;
- (bool)interceptableActivityViewController:(id)arg1 shouldInterceptActivitySelectionOfType:(id)arg2;
- (bool)isFromPeopleScreen;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)passShareIntroductionExplanationViewControllerDidCancel:(id)arg1;
- (void)passShareIntroductionExplanationViewControllerDidContinue:(id)arg1;
- (void)setIsFromPeopleScreen:(bool)arg1;
- (void)setShareDelegate:(id)arg1;
- (void)setShouldPromptUserToShare:(bool)arg1;
- (void)shareActivationOverviewViewControllerDidFinish:(id)arg1;
- (void)shareActivationOverviewViewControllerDidSelectShareCode:(id)arg1;
- (void)shareActivityDidFinishWithShare:(bool)arg1;
- (id)shareDelegate;
- (void)sharePreviewViewControllerDidCancel:(id)arg1;
- (void)sharePreviewViewControllerDidContinue:(id)arg1;
- (bool)shouldPromptUserToShare;
- (void)viewWillAppear:(bool)arg1;

@end
