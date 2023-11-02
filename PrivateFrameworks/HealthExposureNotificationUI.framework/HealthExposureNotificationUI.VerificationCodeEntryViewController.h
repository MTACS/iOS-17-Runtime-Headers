
@interface HealthExposureNotificationUI.VerificationCodeEntryViewController : OBBaseWelcomeController {
    void contentLayoutGuideBottomConstraint;
    void entryView;
    void flow;
    void healthAgencyModel;
    void itemStackTopConstraint;
    void keyboardHeight;
    void regionSupportsWebReport;
    void scrollView;
    void statusView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didTapCancel;
- (void)didTapHelpButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;

@end
