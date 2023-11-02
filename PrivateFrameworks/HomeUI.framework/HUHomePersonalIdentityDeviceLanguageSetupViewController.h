
@interface HUHomePersonalIdentityDeviceLanguageSetupViewController : OBWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController> {
    OBTrayButton * _continueButton;
    OBLinkTrayButton * _customizeButton;
    <HUConfigurationViewControllerDelegate> * _delegate;
    HMHome * _home;
    NSDictionary * _languageToHomePodsMapping;
    NSString * _overrideTargetLanguage;
    NSArray * _supportedVoiceRecognitionLanguages;
    NSString * _targetLanguage;
}

@property (nonatomic, retain) OBTrayButton *continueButton;
@property (nonatomic, retain) OBLinkTrayButton *customizeButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) NSDictionary *languageToHomePodsMapping;
@property (nonatomic, retain) NSString *overrideTargetLanguage;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedVoiceRecognitionLanguages;
@property (nonatomic, retain) NSString *targetLanguage;

- (void).cxx_destruct;
- (void)_cancelLanguageSetup;
- (void)_changeSiriLanguage;
- (void)_completeLanguageSetup;
- (id)continueButton;
- (id)customizeButton;
- (id)delegate;
- (id)home;
- (id)hu_preloadContent;
- (id)initWithHome:(id)arg1;
- (id)languageToHomePodsMapping;
- (Class)onboardingFlowClass;
- (id)overrideTargetLanguage;
- (void)setContinueButton:(id)arg1;
- (void)setCustomizeButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setLanguageToHomePodsMapping:(id)arg1;
- (void)setOverrideTargetLanguage:(id)arg1;
- (void)setSupportedVoiceRecognitionLanguages:(id)arg1;
- (void)setTargetLanguage:(id)arg1;
- (id)supportedVoiceRecognitionLanguages;
- (id)targetLanguage;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
