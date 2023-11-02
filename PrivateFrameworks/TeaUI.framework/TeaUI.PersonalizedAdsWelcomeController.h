
@interface TeaUI.PersonalizedAdsWelcomeController : OBWelcomeController {
    void adPrivacyHeaderIconView;
    void buttonStyle;
    void onboardingFlowDelegate;
    void turnOffCallback;
    void turnOnCallback;
}

- (void).cxx_destruct;
- (void)didTapLearnMore;
- (void)didTapTurnOff;
- (void)didTapTurnOn;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
