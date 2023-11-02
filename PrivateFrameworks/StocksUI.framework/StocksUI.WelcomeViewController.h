
@interface StocksUI.WelcomeViewController : UIViewController {
    void allowRendering;
    void eventHandler;
    void statusBarView;
    void styler;
    void toolbarManager;
    void viewAnimator;
    void viewProvider;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void).cxx_destruct;
- (void)didTapContinueButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)showPrivacyText;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
