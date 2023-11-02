
@interface CoreIDVUI.IdentityProofingPasscodeEntryViewController : UIViewController <UITextFieldDelegate> {
    void $__lazy_storage_$_textFieldView;
    void activityIndicator;
    void addButton;
    void assetProvider;
    void config;
    void displayName;
    void identityProofingCardArtResolutionHelper;
    void imageView;
    void imageViewContainer;
    void maxLength;
    void minLength;
    void placeHolder;
    void primaryLabel;
    void primaryStackView;
    void proofingFlowManager;
    void scrollView;
    void secondaryStackView;
    void subtitleText;
    void textField;
    void titleLabel;
    void titleText;
}

- (void).cxx_destruct;
- (void)addButtonClicked;
- (void)cancelButtonClicked;
- (void)configureFonts;
- (void)configureTextFieldViewColors;
- (void)dealloc;
- (void)dismissKeyboard;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)keyboardDidHideWithNotification:(id)arg1;
- (void)keyboardDidShowWithNotification:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateUI:(id)arg1 previousTraitCollection:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
