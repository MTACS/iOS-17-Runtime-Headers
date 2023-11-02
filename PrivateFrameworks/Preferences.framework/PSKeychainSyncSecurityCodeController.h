
@interface PSKeychainSyncSecurityCodeController : PSKeychainSyncTextEntryController {
    NSString * _firstPasscodeEntry;
    UIButton * _footerButton;
    UILabel * _footerLabel;
    NSString * _generatedCode;
    double  _keyboardHeight;
    int  _mode;
    int  _securityCodeType;
    bool  _showsAdvancedSettings;
}

@property (nonatomic, retain) NSString *firstPasscodeEntry;
@property (nonatomic) int mode;
@property (nonatomic) int securityCodeType;
@property (nonatomic) bool showsAdvancedSettings;

- (void).cxx_destruct;
- (id)_configureTextEntryCell;
- (void)animatePasscodeFieldLeft:(bool)arg1;
- (void)dealloc;
- (void)didFinishEnteringText:(id)arg1;
- (void)dismissAlerts;
- (id)firstPasscodeEntry;
- (void)forgotSecurityCode;
- (void)generateRandomCode;
- (id)init;
- (void)keyboardWillShow:(id)arg1;
- (int)mode;
- (id)placeholderText;
- (int)securityCodeType;
- (void)setFirstPasscodeEntry:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setSecurityCodeType:(int)arg1;
- (void)setShowsAdvancedSettings:(bool)arg1;
- (void)showAdvancedOptions;
- (bool)showsAdvancedSettings;
- (id)specifiers;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (void)textEntryViewDidChange:(id)arg1;
- (void)updateNextButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end