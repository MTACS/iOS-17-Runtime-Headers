
@interface _UIRootPresentationController : _UISheetPresentationController <_UIStatusBarAnimationProviding> {
    UIWindow * _presentingWindow;
}

@property (nonatomic, readonly) int _preferredStatusBarVisibility;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_preferredStatusBarHideAnimationParameters, nonatomic, readonly) UIStatusBarHideAnimationParameters *preferredStatusBarHideAnimationParameters;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (getter=_preferredStatusBarStyleAnimationParameters, nonatomic, readonly) UIStatusBarStyleAnimationParameters *preferredStatusBarStyleAnimationParameters;
@property (nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) UIWindow *presentingWindow;
@property (readonly) Class superclass;

+ (bool)_allowsDeferredTransitions;

- (void).cxx_destruct;
- (id)_createVisualStyleForProvider:(id)arg1;
- (id)_fullscreenPresentationSuperview;
- (bool)_isRootPresentation;
- (bool)_mayChildGrabPresentedViewControllerView;
- (id)_parentTraitEnvironment;
- (id)_preferredStatusBarHideAnimationParameters;
- (id)_preferredStatusBarStyleAnimationParameters;
- (int)_preferredStatusBarVisibility;
- (id)initWithPresentedViewController:(id)arg1 presentingWindow:(id)arg2;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (id)presentingWindow;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
