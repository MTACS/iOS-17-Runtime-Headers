
@interface HUHomeAssistantDeviceLanguageConfigurationViewController : OBTableWelcomeController <HUConfigurationViewController, HUConfigurationViewControllerFlow, HUPreloadableViewController, UITableViewDataSource, UITableViewDelegate> {
    OBLinkTrayButton * _cancelButton;
    OBTrayButton * _changeLanguageButton;
    NAFuture * _changeLanguageFuture;
    NSTimer * _changeLanguageTimer;
    <HUConfigurationViewControllerDelegate> * _delegate;
    NSLayoutConstraint * _heightAnchor;
    NSArray * _languageMismatchedHomeAssistantDevices;
    long long  _selectedLanguageIndex;
    UIActivityIndicatorView * _spinner;
    NSArray * _supportedVoiceRecognitionLanguages;
}

@property (nonatomic, retain) OBLinkTrayButton *cancelButton;
@property (nonatomic, retain) OBTrayButton *changeLanguageButton;
@property (nonatomic, retain) NAFuture *changeLanguageFuture;
@property (nonatomic, retain) NSTimer *changeLanguageTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightAnchor;
@property (nonatomic) bool isFinalStep;
@property (nonatomic, retain) NSArray *languageMismatchedHomeAssistantDevices;
@property (nonatomic) long long selectedLanguageIndex;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedVoiceRecognitionLanguages;

- (void).cxx_destruct;
- (void)_cancelLanguageChange;
- (void)_changeLanguage;
- (id)_configureTitleDescriptionContentViewForCell:(id)arg1;
- (void)_hideSpinner;
- (void)_showSpinner;
- (id)cancelButton;
- (id)changeLanguageButton;
- (id)changeLanguageFuture;
- (id)changeLanguageTimer;
- (void)dealloc;
- (id)delegate;
- (id)heightAnchor;
- (id)hu_preloadContent;
- (id)initWithSupportedVoiceRecognitionLanguages:(id)arg1 languageMismatchedHomeAssistantDevices:(id)arg2;
- (id)languageMismatchedHomeAssistantDevices;
- (void)loadView;
- (Class)onboardingFlowClass;
- (long long)selectedLanguageIndex;
- (void)setCancelButton:(id)arg1;
- (void)setChangeLanguageButton:(id)arg1;
- (void)setChangeLanguageFuture:(id)arg1;
- (void)setChangeLanguageTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeightAnchor:(id)arg1;
- (void)setLanguageMismatchedHomeAssistantDevices:(id)arg1;
- (void)setSelectedLanguageIndex:(long long)arg1;
- (void)setSpinner:(id)arg1;
- (void)setSupportedVoiceRecognitionLanguages:(id)arg1;
- (id)spinner;
- (id)supportedVoiceRecognitionLanguages;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
