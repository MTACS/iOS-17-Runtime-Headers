
@interface CoreIDVUI.BiometricBindingViewController : UIViewController {
    void $__lazy_storage_$_activityIndicator;
    void $__lazy_storage_$_activityIndicatorBarButtonItem;
    void $__lazy_storage_$_cancelButton;
    void analyticsReporter;
    void authType;
    void biometricBindingController;
    void biometricsHelper;
    void context;
    void delegate;
    void domain;
    void eligibilityHelper;
    void passcodeView;
    void primaryButton;
    void proofingManager;
    void target;
    void textLabel;
    void titleLabel;
    void unboundACL;
}

- (void).cxx_destruct;
- (void)cancelBarButtonClicked;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)performBinding;

@end
