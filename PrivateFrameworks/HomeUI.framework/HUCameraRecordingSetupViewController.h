
@interface HUCameraRecordingSetupViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController> {
    <HUConfigurationViewControllerDelegate> * _delegate;
    HMHome * _home;
    OBTrayButton * _learnMoreButton;
    OBTrayButton * _setupButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) OBTrayButton *learnMoreButton;
@property (nonatomic, retain) OBTrayButton *setupButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupCameraRecording:(id)arg1;
- (id)delegate;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 itemTableViewController:(id)arg4 home:(id)arg5;
- (id)learnMoreButton;
- (Class)onboardingFlowClass;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setLearnMoreButton:(id)arg1;
- (void)setSetupButton:(id)arg1;
- (id)setupButton;
- (void)showCameraRecordingLearnMore;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
