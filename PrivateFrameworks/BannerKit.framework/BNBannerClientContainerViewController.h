
@interface BNBannerClientContainerViewController : UIViewController <BNBannerClientContainer, BNBannerClientContainerSceneUpdating, BNPresentableContext> {
    <BSInvalidatable> * _deferringRule;
    <BNBannerClientContainerDelegate> * _delegate;
    _BNPanGestureServiceProxy * _panGestureProxy;
    <BNPresentable><BNHostedContentProviding> * _presentable;
    <BNPresentableContext> * _presentableContext;
    UIScene * _scene;
    BNCoordinatedSceneUpdateAction * _sceneUpdateAction;
}

@property (getter=isAccessibilityIgnoringSmartInvertColors, nonatomic, readonly) bool accessibilityIgnoringSmartInvertColors;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeferringFocus, nonatomic, readonly) bool deferringFocus;
@property (nonatomic) <BNBannerClientContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BNPresentable><BNHostedContentProviding> *presentable;
@property (nonatomic, readonly) <BNPresentableContext> *presentableContext;
@property (nonatomic, readonly) UIScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acquireDeferringRuleIfNecessary;
- (bool)_canShowWhileLocked;
- (void)_handlePanGestureProxyAction:(id)arg1;
- (void)_handleRejectionAction:(id)arg1;
- (void)_invalidateDeferringRule;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;
- (void)_setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1 shouldFence:(bool)arg2;
- (void)_setPresentableBannerAppearState:(int)arg1 reason:(id)arg2;
- (void)_setPresentableUserInteractionInProgress:(bool)arg1;
- (void)_setPresentableViewControllerAppearState:(int)arg1;
- (void)bs_traitCollectionDidChange:(id)arg1 forManagedTraitEnvironment:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithScene:(id)arg1 presentable:(id)arg2 context:(id)arg3;
- (bool)isDeferringFocus;
- (id)keyWindowForScreen:(id)arg1;
- (void)performCoordinatedUpdate:(id /* block */)arg1 updateResponseHandler:(id /* block */)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)presentable;
- (id)presentableContext;
- (id)scene;
- (void)setDelegate:(id)arg1;
- (void)setHostNeedsUpdate;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
