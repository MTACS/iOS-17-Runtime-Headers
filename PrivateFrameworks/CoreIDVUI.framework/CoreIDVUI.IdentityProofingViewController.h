
@interface CoreIDVUI.IdentityProofingViewController : UIViewController {
    void $__lazy_storage_$_bottomTray;
    void $__lazy_storage_$_footerCaption;
    void $__lazy_storage_$_footerCaptionSpacer;
    void $__lazy_storage_$_headerView;
    void $__lazy_storage_$_imageView;
    void $__lazy_storage_$_mainStackView;
    void $__lazy_storage_$_primaryButton;
    void $__lazy_storage_$_scrollView;
    void $__lazy_storage_$_secondaryButton;
    void $__lazy_storage_$_subTitleLabel;
    void $__lazy_storage_$_tertiaryButton;
    void $__lazy_storage_$_textContainerStackView;
    void $__lazy_storage_$_titleLabel;
    void botomTraySpacing;
    void cancelButton;
    void cancelButtonTargetAction;
    void configuration;
    void headerViewDefaultHeightMultiplier;
    void primaryButtonHeight;
    void primaryButtonTargetAction;
    void secondaryButtonDefaultFontSize;
    void secondaryButtonHeight;
    void secondaryButtonTargetAction;
    void tertiaryButtonDefaultFontSize;
    void tertiaryButtonHeight;
    void tertiaryButtonTargetAction;
    void textContainerStackViewSpacing;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)cancelButtonClicked;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primaryButtonClicked;
- (void)secondaryButtonClicked;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)tertiaryButtonClicked;
- (id)titleLabel;
- (void)updateViewLayout:(id)arg1 previousTraitCollection:(id)arg2;
- (void)viewDidLoad;

@end
