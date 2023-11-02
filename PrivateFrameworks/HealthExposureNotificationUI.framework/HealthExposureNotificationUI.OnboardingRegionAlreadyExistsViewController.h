
@interface HealthExposureNotificationUI.OnboardingRegionAlreadyExistsViewController : OBWelcomeController {
    void flow;
    void healthAgencyModel;
    void primaryButton;
}

- (void).cxx_destruct;
- (void)didTapPrimaryButton;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)openAppButtonTapped;
- (void)viewDidLoad;

@end
