
@interface HUHomeHubResidentWarningViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow> {
    OBBoldTrayButton * _commitButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    bool  _isFinalStep;
    OBHeaderAccessoryButton * _linkButton;
}

@property (nonatomic, retain) OBBoldTrayButton *commitButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) OBHeaderAccessoryButton *linkButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelFlow:(id)arg1;
- (void)_commitOrContinue:(id)arg1;
- (id)_commitOrContinueButtonTitle;
- (bool)_limitToNonScrollingContentHeight;
- (void)_openLink:(id)arg1;
- (void)_openURL:(id)arg1;
- (id)commitButton;
- (id)delegate;
- (id)initWithiPadOnlyHub:(bool)arg1;
- (bool)isFinalStep;
- (id)linkButton;
- (Class)onboardingFlowClass;
- (void)setCommitButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsFinalStep:(bool)arg1;
- (void)setLinkButton:(id)arg1;
- (void)viewDidLoad;

@end
