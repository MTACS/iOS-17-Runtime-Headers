
@interface SeymourUI.WelcomeViewController : SMUOBWelcomeController {
    void dismissHandler;
    void eventHub;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  metricPage;
    void privacyPreferenceClient;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sheet;
    void storefrontLocalizer;
    void version;
}

- (void).cxx_destruct;
- (void)didTapContinueButton;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
