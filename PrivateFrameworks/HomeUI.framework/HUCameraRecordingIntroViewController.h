
@interface HUCameraRecordingIntroViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController> {
    NSString * _captionText;
    NSString * _continueButtonText;
    <HUConfigurationViewControllerDelegate> * _delegate;
    HMHome * _home;
    OBLinkTrayButton * _notNowButton;
    NSString * _notNowButtonText;
    OBTrayButton * _setupButton;
    unsigned long long  _variant;
}

@property (nonatomic, retain) NSString *captionText;
@property (nonatomic, retain) NSString *continueButtonText;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) OBLinkTrayButton *notNowButton;
@property (nonatomic, retain) NSString *notNowButtonText;
@property (nonatomic, retain) OBTrayButton *setupButton;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long variant;

- (void).cxx_destruct;
- (void)_buttonOne:(id)arg1;
- (void)_buttonTwo:(id)arg1;
- (id)captionText;
- (id)continueButtonText;
- (id)delegate;
- (id)home;
- (id)hu_preloadContent;
- (id)init;
- (id)initWithIntroVariant:(unsigned long long)arg1 home:(id)arg2;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4;
- (id)notNowButton;
- (id)notNowButtonText;
- (Class)onboardingFlowClass;
- (void)setCaptionText:(id)arg1;
- (void)setContinueButtonText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setNotNowButton:(id)arg1;
- (void)setNotNowButtonText:(id)arg1;
- (void)setSetupButton:(id)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (id)setupButton;
- (void)showCameraRecordingLearnMore;
- (unsigned long long)variant;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
