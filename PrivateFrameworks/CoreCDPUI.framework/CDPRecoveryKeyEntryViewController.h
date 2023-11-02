
@interface CDPRecoveryKeyEntryViewController : PSKeychainSyncSecurityCodeController <UIKeyInput> {
    CDPContext * _cdpContext;
    CDPRecoveryKeyEntryViewModel * _context;
    UIButton * _enterRecoveryKeyButton;
    CDPRecoveryKeyCreateHeaderView * _headerView;
    double  _keyboardHeight;
    bool  _keyboardIsVisible;
    NSString * _recoveryCode;
    bool  hasText;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;

- (void).cxx_destruct;
- (id)_addEscapeOption:(id)arg1 forEvent:(id)arg2;
- (void)_handleRecoveryKeyValidationWithSuccess:(bool)arg1 error:(id)arg2;
- (id)_makeEventWithName:(id)arg1;
- (id)_resetEncryptedDataEscapeOptionForAlert:(id)arg1;
- (id)_tryAgainLaterEscapeOptionForAlert:(id)arg1;
- (void)cancelFlow:(id)arg1;
- (void)continueFlow:(id)arg1;
- (void)dealloc;
- (void)deleteBackward;
- (void)didFinishEnteringText:(id)arg1;
- (void)didTapScanText;
- (void)didTapUseKeyboard:(id)arg1;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;
- (id)footerActionButton;
- (id)footerTextLabel;
- (void)handleForgotRecoveryKey:(id)arg1;
- (void)handleRecoveryKeyEscapeDuringDataRecoveryFlow:(id)arg1;
- (bool)hasText;
- (id)headerView;
- (bool)hidesNextButton;
- (id)initWithRecoveryContext:(id)arg1 cdpContext:(id)arg2;
- (void)insertText:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (id)placeholderText;
- (void)showOtherRecoveryOptions:(id)arg1;
- (void)skipRecoveryKeyDuringPasswordResetFlow:(id)arg1;
- (id)specifiers;
- (id)textEntryCell;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
