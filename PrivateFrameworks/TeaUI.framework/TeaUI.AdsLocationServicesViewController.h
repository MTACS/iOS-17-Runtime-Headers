
@interface TeaUI.AdsLocationServicesViewController : OBWelcomeController {
    void continueCallback;
    void iconView;
    void manageCallback;
    void onboardingFlowDelegate;
}

- (void).cxx_destruct;
- (void)didTapContinue;
- (void)didTapManage;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
