
@interface HealthMobilityUI.WalkingSteadinessOnboardingStartViewController : OBWelcomeController {
    void delegate;
    void stage;
}

- (void).cxx_destruct;
- (void)cancelButtonTapped;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)primaryFooterButtonTapped;
- (void)secondaryFooterButtonTapped;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
