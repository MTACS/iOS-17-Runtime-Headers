
@interface HealthExposureNotificationUI.VerificationSummaryViewController : OBWelcomeController {
    void flow;
    void healthAgencyModel;
    void primaryButton;
    void secondaryButton;
    void statusView;
}

- (void).cxx_destruct;
- (void)didTapLearnMoreButton;
- (void)didTapPrimaryButton;
- (void)didTapSecondaryButton;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)viewDidLoad;

@end
