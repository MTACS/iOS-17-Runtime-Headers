
@interface BCConfigurationViewController : ActionButtonConfigurationUI.ScreenViewModelTrackingViewController <ABActionSelectorViewControllerDelegate> {
    void actionDetailsView;
    void cancellableBag;
    void dismissHandler;
    void mode;
    void originalNavigationBarTintColor;
    void sceneParameterOverrides;
    void selectorViewController;
    void shortcutConfigurationViewController;
    void viewModel;
    void welcomeView;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)actionSelectorViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)actionSelectorViewController:(id)arg1 didUpdateMode:(long long)arg2;
- (void)didTapSelectorView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
