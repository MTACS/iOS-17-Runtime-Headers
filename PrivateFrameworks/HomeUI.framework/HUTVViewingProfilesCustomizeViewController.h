
@interface HUTVViewingProfilesCustomizeViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController> {
    OBLinkTrayButton * _customizeButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    HMHome * _home;
    OBTrayButton * _usePRButton;
}

@property (nonatomic, retain) OBLinkTrayButton *customizeButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (readonly) Class superclass;
@property (nonatomic, retain) OBTrayButton *usePRButton;

- (void).cxx_destruct;
- (void)_dontSetupTVViewingProfiles:(id)arg1;
- (void)_setupTVViewingProfiles:(id)arg1;
- (id)customizeButton;
- (id)delegate;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithHome:(id)arg1;
- (Class)onboardingFlowClass;
- (void)setCustomizeButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setUsePRButton:(id)arg1;
- (id)usePRButton;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
