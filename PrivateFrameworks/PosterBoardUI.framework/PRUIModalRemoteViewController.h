
@interface PRUIModalRemoteViewController : UIViewController <BSDescriptionProviding, BSInvalidatable, FBSceneDelegate, FBSceneLayerManagerObserver> {
    <PRUIModalRemoteViewControllerDelegate> * _delegate;
    bool  _didConfigureScene;
    <PRUIModalEntryPoint> * _entryPoint;
    bool  _invalidated;
    bool  _presentedPrefersStatusBarHidden;
    FBScene * _scene;
    UIView<UIScenePresentation> * _scenePresentationView;
    <UIScenePresenter> * _scenePresenter;
    UIWindowScene * _uiParentScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRUIModalRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureSceneIfNeededWithParentWindow:(id)arg1;
- (void)_invalidateAfterDismissal;
- (void)_invokeDidDismissDelegateWithResponse:(id)arg1;
- (void)_invokeWillDismissDelegateWithResponse:(id)arg1;
- (void)_teardown;
- (void)_update;
- (void)_updateCommonModalSceneSettings:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 interfaceOrientation:(long long)arg3;
- (void)_updateSceneToSize:(struct CGSize { double x1; double x2; })arg1 orientation:(long long)arg2 withAnimationSettings:(id)arg3 fence:(id)arg4;
- (void)_updateStatusBarVisibilityWithTransitionContext:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)endObservingApplicationLifecycle;
- (id)initWithEntryPoint:(id)arg1;
- (void)invalidate;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;
- (void)sendRequestDismissalAction;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (void)startObservingApplicationLifecycle;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
