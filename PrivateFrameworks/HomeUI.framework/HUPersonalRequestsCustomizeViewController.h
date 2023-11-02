
@interface HUPersonalRequestsCustomizeViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController> {
    OBLinkTrayButton * _customizeButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    NSString * _finePrintFooterText;
    HMHome * _home;
    OBTrayButton * _usePRButton;
}

@property (nonatomic, retain) OBLinkTrayButton *customizeButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *finePrintFooterText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (readonly) Class superclass;
@property (nonatomic, retain) OBTrayButton *usePRButton;

- (void).cxx_destruct;
- (void)_dontSetupPersonalRequests:(id)arg1;
- (void)_setupPersonalRequests:(id)arg1;
- (id)customizeButton;
- (id)delegate;
- (id)finePrintFooterText;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithLocationDevice:(id)arg1 home:(id)arg2;
- (Class)onboardingFlowClass;
- (void)setCustomizeButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFinePrintFooterText:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setUsePRButton:(id)arg1;
- (id)usePRButton;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
