
@interface CoreIDVUI.IdentityProofingVerifyingPasscodeViewController : UIViewController {
    void $__lazy_storage_$_textFieldView;
    void activityIndicator;
    void assetProvider;
    void config;
    void displayName;
    void identityProofingCardArtResolutionHelper;
    void imageView;
    void imageViewContainer;
    void primaryLabel;
    void primaryStackView;
    void proofingFlowManager;
    void scrollView;
    void secondaryStackView;
    void subtitleText;
    void textField;
    void thresholdTimer;
    void titleLabel;
    void titleText;
}

- (void).cxx_destruct;
- (void)configureFonts;
- (void)configureTextFieldViewColors;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateUI:(id)arg1 previousTraitCollection:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
