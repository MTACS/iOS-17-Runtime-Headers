
@interface HUVoiceProfileSetupViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUOnboardingWarningPresenter, HUPreloadableViewController, VTUIEnrollTrainingViewControllerDelegate> {
    NSString * _buttonOneText;
    <HUConfigurationViewControllerDelegate> * _delegate;
    HMHome * _home;
    OBLinkTrayButton * _notNowButton;
    HUPersonalRequestsEditorItemManager * _prEditorItemManager;
    OBTrayButton * _setupButton;
    VTUIEnrollTrainingViewController * _voiceProfileVC;
}

@property (nonatomic, retain) NSString *buttonOneText;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) OBLinkTrayButton *notNowButton;
@property (nonatomic, retain) HUPersonalRequestsEditorItemManager *prEditorItemManager;
@property (nonatomic, retain) OBTrayButton *setupButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) VTUIEnrollTrainingViewController *voiceProfileVC;

- (void).cxx_destruct;
- (void)_dontSetupVoiceProfile;
- (void)_dontSetupVoiceProfileWithWarning:(id)arg1;
- (void)_resetVoiceProfileSetup;
- (void)_setupPersonalRequestsItemInfrastructure;
- (void)_setupVoiceProfile:(id)arg1;
- (void)_turnOffPersonalRequests;
- (void)_turnOffVoiceRecognition;
- (id)buttonOneText;
- (void)continueSetup;
- (id)delegate;
- (void)dismissSetup;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithHome:(id)arg1;
- (id)notNowButton;
- (Class)onboardingFlowClass;
- (id)prEditorItemManager;
- (void)setButtonOneText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setNotNowButton:(id)arg1;
- (void)setPrEditorItemManager:(id)arg1;
- (void)setSetupButton:(id)arg1;
- (void)setVoiceProfileVC:(id)arg1;
- (id)setupButton;
- (void)showLearnMore;
- (void)skipSetup;
- (void)userTappedCancelFromWarning;
- (void)userTappedContinueFromWarning;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (id)voiceProfileVC;

@end
