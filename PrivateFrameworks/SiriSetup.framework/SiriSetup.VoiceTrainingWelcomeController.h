
@interface SiriSetup.VoiceTrainingWelcomeController : OBWelcomeController {
    void delegate;
    void orbView;
    void viewModel;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)secondaryButtonTapped;
- (void)viewDidAppear:(bool)arg1;

@end
