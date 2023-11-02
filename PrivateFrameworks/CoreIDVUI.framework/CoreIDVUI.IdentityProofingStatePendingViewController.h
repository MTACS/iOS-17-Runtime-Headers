
@interface CoreIDVUI.IdentityProofingStatePendingViewController : CoreIDVUI.IdentityProofingBaseViewController {
    void $__lazy_storage_$_primaryButton;
    void $__lazy_storage_$_primaryLabel;
    void $__lazy_storage_$_secondaryButton;
    void $__lazy_storage_$_secondaryLabel;
    void $__lazy_storage_$_tertiaryButton;
    void $__lazy_storage_$_titleLabel;
    void imageView;
    void imageViewContainer;
    void primaryButtonClickedAction;
    void secondaryButtonClickedAction;
    void tertiaryButtonClickedAction;
}

- (void).cxx_destruct;
- (void)configureFonts;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primaryButtonClicked;
- (void)secondaryButtonClicked;
- (void)tertiaryButtonClicked;
- (void)viewDidLayoutSubviews;

@end
