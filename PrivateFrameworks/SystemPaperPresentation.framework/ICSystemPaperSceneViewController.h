
@interface ICSystemPaperSceneViewController : UIViewController <BSInvalidatable, FBSceneDelegate, _UISceneSettingsDiffAction> {
    bool  _active;
    bool  _invalidated;
    FBScene * _scene;
    UIView * _sceneContainerView;
    <UIScenePresenter> * _scenePresenter;
    UIScene * _uiParentScene;
    NSData * _userActivityData;
    bool  _visible;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSData *userActivityData;

+ (void)presentSystemPaperWithUserActivityData:(id)arg1 presenter:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_adjustParentScene;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (void)_teardown;
- (void)_update;
- (void)_updateSceneSafeAreaInsets;
- (void)_updateSceneToSize:(struct CGSize { double x1; double x2; })arg1 orientation:(long long)arg2 withAnimationSettings:(id)arg3 fence:(id)arg4;
- (void)_updateSceneUIApplicationSceneSettingsWithBlock:(id /* block */)arg1;
- (void)_updateSceneUserInterfaceStyle;
- (long long)contentState;
- (void)createLinkWithUserActivityData:(id)arg1;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithUserActivityData:(id)arg1;
- (void)invalidate;
- (bool)isActive;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;
- (void)setActive:(bool)arg1;
- (void)setNeedsFocusUpdate;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)uiActivityContinuationActionForUserActivityData:(id)arg1;
- (void)updateFocusIfNeeded;
- (id)userActivityData;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
