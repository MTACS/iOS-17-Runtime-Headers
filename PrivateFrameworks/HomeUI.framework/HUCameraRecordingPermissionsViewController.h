
@interface HUCameraRecordingPermissionsViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController> {
    <HUConfigurationViewControllerDelegate> * _delegate;
    HMHome * _home;
    OBTrayButton * _setupButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) OBTrayButton *setupButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupCameraRecording:(id)arg1;
- (id)delegate;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 itemTableViewController:(id)arg4 home:(id)arg5;
- (Class)onboardingFlowClass;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setSetupButton:(id)arg1;
- (id)setupButton;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
