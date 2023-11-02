
@interface TFBetaAppLaunchScreenViewController : UIViewController <TFBetaAppLaunchPresenterView, TFHostedBetaAppLaunchScreenView> {
    UIBarButtonItem * _cancelBarButtonItem;
    <TFBetaAppLaunchScreenHost> * _launchScreenHost;
    TFBetaAppLaunchScreenView * _launchScreenView;
    TFBetaAppLaunchPresenter * _presenter;
}

@property (nonatomic, readonly) UIBarButtonItem *cancelBarButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <TFBetaAppLaunchScreenHost> *launchScreenHost;
@property (nonatomic, retain) TFBetaAppLaunchScreenView *launchScreenView;
@property (nonatomic, readonly) TFBetaAppLaunchPresenter *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateLaunchScreenViewWithUpdateBlock:(id /* block */)arg1 transition:(id)arg2;
- (long long)_currentInterfaceOrientation;
- (void)_didPressExitLaunchScreenButton;
- (void)_didPressNavigationItemCancel;
- (void)_didPressOpenHowToSupportLinkButton;
- (void)_didPressShowHowToButton;
- (id)_fadeTransition;
- (id)_pushTransition;
- (SEL)_selectorForPresentorViewEvent:(unsigned long long)arg1;
- (void)_updateForContainmentInHostEnvironment:(id)arg1;
- (void)_updateNavigationBarForHostTraitCollection:(id)arg1;
- (id)cancelBarButtonItem;
- (void)dismissAnimated:(bool)arg1;
- (id)initWithPresenter:(id)arg1;
- (id)launchScreenHost;
- (void)launchScreenHost:(id)arg1 traitCollectionDidChange:(id)arg2;
- (id)launchScreenView;
- (void)loadView;
- (id)presenter;
- (void)setLaunchScreenHost:(id)arg1;
- (void)setLaunchScreenView:(id)arg1;
- (void)showHowToWithTitle:(id)arg1 subtitle:(id)arg2 screenshotImageDict:(id)arg3 primaryButtonTitle:(id)arg4 primaryButtonEvent:(unsigned long long)arg5 secondaryButtonTitle:(id)arg6 secondaryButtonEvent:(unsigned long long)arg7 animated:(bool)arg8;
- (void)showLoadingAnimated:(bool)arg1;
- (void)showTestNotesWithTitle:(id)arg1 lockup:(id)arg2 testNotesTitle:(id)arg3 testNotesText:(id)arg4 primaryButtonTitle:(id)arg5 primaryButtonEvent:(unsigned long long)arg6 animated:(bool)arg7 fetchingOnImageFetcher:(id)arg8;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
