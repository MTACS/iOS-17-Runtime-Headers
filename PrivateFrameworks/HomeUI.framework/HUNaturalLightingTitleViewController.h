
@interface HUNaturalLightingTitleViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow> {
    <HUConfigurationViewControllerDelegate> * _delegate;
    HMHome * _home;
    OBLinkTrayButton * _notNowButton;
    OBTrayButton * _useNaturalLightingButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) OBLinkTrayButton *notNowButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) OBTrayButton *useNaturalLightingButton;

- (void).cxx_destruct;
- (void)_continueToSetup:(id)arg1;
- (void)_doNotActivateNaturalLighting:(id)arg1;
- (id)delegate;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4;
- (id)notNowButton;
- (Class)onboardingFlowClass;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setNotNowButton:(id)arg1;
- (void)setUseNaturalLightingButton:(id)arg1;
- (id)useNaturalLightingButton;
- (void)viewDidLoad;

@end
