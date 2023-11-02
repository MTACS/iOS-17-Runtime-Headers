
@interface HUTVViewingProfilesSetupViewController : HUImageOBWelcomeController <HFItemManagerDelegate, HUConfigurationViewController, HUConfigurationViewControllerFlow, HUItemModuleControllerHosting, HUPreloadableViewController> {
    OBLinkTrayButton * _customizeButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    HMHome * _home;
    HUTVViewingProfilesEditorItemManager * _tvVPEditorItemManager;
    OBTrayButton * _useTVVPButton;
}

@property (nonatomic, retain) OBLinkTrayButton *customizeButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUTVViewingProfilesEditorItemManager *tvVPEditorItemManager;
@property (nonatomic, retain) OBTrayButton *useTVVPButton;

- (void).cxx_destruct;
- (void)_customizeOrOffButton:(id)arg1;
- (void)_setupTVViewingProfilesItemInfrastructure;
- (void)_turnOnAllTVViewingProfiles:(id)arg1;
- (id)customizeButton;
- (id)delegate;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithHome:(id)arg1;
- (id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2;
- (Class)onboardingFlowClass;
- (void)setCustomizeButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setTvVPEditorItemManager:(id)arg1;
- (void)setUseTVVPButton:(id)arg1;
- (id)tvVPEditorItemManager;
- (id)useTVVPButton;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
