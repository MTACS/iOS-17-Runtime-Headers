
@interface CoreIDVUI.IdentityProofingExtendedReviewViewController : UIViewController {
    void $__lazy_storage_$_bottomTray;
    void $__lazy_storage_$_primaryButton;
    void $__lazy_storage_$_primaryLabel;
    void $__lazy_storage_$_primaryStackView;
    void $__lazy_storage_$_scrollView;
    void $__lazy_storage_$_secondaryButton;
    void $__lazy_storage_$_secondaryLabel;
    void $__lazy_storage_$_tertiaryLabel;
    void $__lazy_storage_$_titleLabel;
    void isCancelling;
    void issuerUrlString;
    void primaryButtonTitle;
    void primaryLabelText;
    void proofingFlowManager;
    void secondaryButtonTitle;
    void secondaryLabelText;
    void shouldHideBackButton;
    void tertiaryLabelText;
    void titleText;
    void viewModel;
}

- (void).cxx_destruct;
- (void)configureFonts;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primaryButtonClicked;
- (void)secondaryButtonClicked;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
