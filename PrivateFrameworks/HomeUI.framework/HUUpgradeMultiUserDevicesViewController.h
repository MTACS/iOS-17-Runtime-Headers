
@interface HUUpgradeMultiUserDevicesViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController> {
    OBTrayButton * _continueButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    HMHome * _home;
    bool  _isFinalStep;
}

@property (nonatomic, retain) OBTrayButton *continueButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continueButtonTapped:(id)arg1;
- (id)continueButton;
- (id)delegate;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithUpgradeRequirements:(unsigned long long)arg1 home:(id)arg2;
- (bool)isFinalStep;
- (Class)onboardingFlowClass;
- (void)setContinueButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setIsFinalStep:(bool)arg1;
- (void)viewDidLoad;

@end
