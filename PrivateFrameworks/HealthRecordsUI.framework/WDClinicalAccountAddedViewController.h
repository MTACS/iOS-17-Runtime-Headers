
@interface WDClinicalAccountAddedViewController : OBWelcomeController {
    void $__lazy_storage_$_accessibilityConstraints;
    void $__lazy_storage_$_brandView;
    void $__lazy_storage_$_standardConstraints;
    void account;
    void customConstraints;
    void dismissHandler;
    void iconProvider;
    void notificationsManager;
    void onboardingSession;
    void primaryButton;
    void shouldPromptForDataCollection;
}

@property (nonatomic, copy) id /* block */ dismissHandler;

- (void).cxx_destruct;
- (id /* block */)dismissHandler;
- (void)hxui_primaryFooterButtonTapped;
- (id)initWithOnboardingSession:(id)arg1 account:(id)arg2;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
