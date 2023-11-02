
@interface CoreIDVUI.IdentityErrorViewController : UIViewController {
    void $__lazy_storage_$_bottomTray;
    void $__lazy_storage_$_primaryButton;
    void $__lazy_storage_$_primaryLabel;
    void $__lazy_storage_$_primaryStackView;
    void $__lazy_storage_$_scrollView;
    void $__lazy_storage_$_secondaryButton;
    void $__lazy_storage_$_secondaryLabel;
    void $__lazy_storage_$_titleLabel;
    void navigationControllerHelper;
    void primaryButtonTargetAction;
    void primaryButtonTitle;
    void primaryLabelText;
    void proofingFlowManager;
    void secondaryButtonTargetAction;
    void secondaryLabelText;
    void tertiaryButtonTargetAction;
    void titleLabelText;
}

- (void).cxx_destruct;
- (void)configureFonts;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primaryButtonClicked;
- (void)secondaryButtonClicked;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
