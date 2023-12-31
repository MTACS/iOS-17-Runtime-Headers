
@interface _UIPreviewInteractionCommitTransition : NSObject {
    UIWindow * _currentCommitEffectWindow;
    UIViewController * _viewController;
}

@property (nonatomic, retain) UIWindow *currentCommitEffectWindow;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_applyCommitEffectTransformToView:(id)arg1;
- (id)_preferredTransitionAnimator;
- (id)_preferredTransitionAnimatorForReducedMotion;
- (bool)_shouldReduceMotion;
- (id)currentCommitEffectWindow;
- (id)initWithPresentedViewController:(id)arg1;
- (void)performTransitionWithPresentationBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setCurrentCommitEffectWindow:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
