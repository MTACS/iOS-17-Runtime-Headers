
@interface SafetyMonitorUI.CheckInOnboardingViewController4 : OBWelcomeController {
    void handlerManager;
    void isInSettings;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)notNowButtonAction;
- (void)sendCheckIn;
- (void)viewDidLoad;

@end
