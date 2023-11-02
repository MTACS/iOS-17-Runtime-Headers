
@interface HUHomeHubAppleTVUpdateWarningViewController : HUItemTableOBWelcomeController <HFItemManagerDelegate, HUConfigurationViewController, HUConfigurationViewControllerFlow> {
    NSArray * _appleTVs;
    bool  _blockMigration;
    OBBoldTrayButton * _commitButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    bool  _isFinalStep;
    OBHeaderAccessoryButton * _linkButton;
}

@property (nonatomic, retain) NSArray *appleTVs;
@property (nonatomic) bool blockMigration;
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
- (void)_commitOrContinue;
- (id)_commitOrContinueButtonTitle;
- (void)_continueTapped:(id)arg1;
- (void)_openLink:(id)arg1;
- (void)_openURL:(id)arg1;
- (void)_presentConfirmationAlert;
- (id)appleTVs;
- (bool)blockMigration;
- (id)commitButton;
- (id)delegate;
- (id)initWithAppleTVsToUpdate:(id)arg1 shouldBlockMigration:(bool)arg2;
- (bool)isFinalStep;
- (id)linkButton;
- (Class)onboardingFlowClass;
- (void)setAppleTVs:(id)arg1;
- (void)setBlockMigration:(bool)arg1;
- (void)setCommitButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsFinalStep:(bool)arg1;
- (void)setLinkButton:(id)arg1;
- (void)viewDidLoad;

@end
