
@interface HUPersonalRequestsSetupViewController : OBWelcomeController <HFItemManagerDelegate, HUConfigurationViewController, HUConfigurationViewControllerFlow, HUItemModuleControllerHosting, HUPreloadableViewController> {
    OBLinkTrayButton * _customizeButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    HMHome * _home;
    HULocationDevice * _locationDevice;
    HUPersonalRequestsDevicesModuleController * _prDevicesModuleController;
    HUPersonalRequestsEditorItemManager * _prEditorItemManager;
    NSArray * _supportedVoiceRecognitionLanguages;
    OBTrayButton * _usePRButton;
}

@property (nonatomic, retain) OBLinkTrayButton *customizeButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) HULocationDevice *locationDevice;
@property (nonatomic, retain) HUPersonalRequestsDevicesModuleController *prDevicesModuleController;
@property (nonatomic, retain) HUPersonalRequestsEditorItemManager *prEditorItemManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedVoiceRecognitionLanguages;
@property (nonatomic, retain) OBTrayButton *usePRButton;

+ (id)_bulletImageWithSystemName:(id)arg1 color:(id)arg2;

- (void).cxx_destruct;
- (bool)_allPersonalRequestsDevicesSupportVoiceRecognition;
- (void)_customizePersonalRequests:(id)arg1;
- (void)_dontUsePersonalRequests:(id)arg1;
- (unsigned long long)_numberOfDevicesSupportingVR;
- (void)_setupPersonalRequestsItemInfrastructure;
- (void)_turnOnAllPersonalRequests:(id)arg1;
- (id)customizeButton;
- (id)delegate;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithHome:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (id)locationDevice;
- (id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2;
- (Class)onboardingFlowClass;
- (id)prDevicesModuleController;
- (id)prEditorItemManager;
- (void)setCustomizeButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setLocationDevice:(id)arg1;
- (void)setPrDevicesModuleController:(id)arg1;
- (void)setPrEditorItemManager:(id)arg1;
- (void)setSupportedVoiceRecognitionLanguages:(id)arg1;
- (void)setUsePRButton:(id)arg1;
- (id)supportedVoiceRecognitionLanguages;
- (id)usePRButton;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
