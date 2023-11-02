
@interface CoreIDVUI.IdentityProofingErrorRetryViewController : UIViewController {
    void $__lazy_storage_$_bodyButton;
    void $__lazy_storage_$_bottomTray;
    void $__lazy_storage_$_primaryButton;
    void $__lazy_storage_$_primaryLabel;
    void $__lazy_storage_$_primaryStackView;
    void $__lazy_storage_$_scrollView;
    void $__lazy_storage_$_secondaryButton;
    void $__lazy_storage_$_titleLabel;
    void bodyButtonTargetAction;
    void primaryButtonTargetAction;
    void proofingFlowManager;
    void secondaryButtonTargetAction;
    void viewConfig;
}

@property (nonatomic, readonly) bool inWatchModeOnly;

- (void).cxx_destruct;
- (void)bodyButtonClicked;
- (void)configureFonts;
- (bool)inWatchModeOnly;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primaryButtonClicked;
- (void)secondaryButtonClicked;
- (void)viewDidLoad;

@end
