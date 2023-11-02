
@interface HULocationServicesSetupViewController : OBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController> {
    <HUConfigurationViewControllerDelegate> * _delegate;
    OBLinkTrayButton * _disableLocationServicesButton;
    OBBoldTrayButton * _enableLocationServicesButton;
    HMHome * _home;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) OBLinkTrayButton *disableLocationServicesButton;
@property (nonatomic, retain) OBBoldTrayButton *enableLocationServicesButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enableOrDisableLocationServices:(id)arg1;
- (id)delegate;
- (id)disableLocationServicesButton;
- (id)enableLocationServicesButton;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithHome:(id)arg1;
- (Class)onboardingFlowClass;
- (void)setDelegate:(id)arg1;
- (void)setDisableLocationServicesButton:(id)arg1;
- (void)setEnableLocationServicesButton:(id)arg1;
- (void)setHome:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
