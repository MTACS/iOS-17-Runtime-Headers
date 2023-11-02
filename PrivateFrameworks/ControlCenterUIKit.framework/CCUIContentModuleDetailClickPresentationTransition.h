
@interface CCUIContentModuleDetailClickPresentationTransition : NSObject <_UIClickPresentationTransition> {
    CCUIContentModuleDetailAnimationController * _animationController;
    UIViewController * _presentedViewController;
}

@property (nonatomic, readonly) CCUIContentModuleDetailAnimationController *animationController;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, copy) UITargetedPreview *sourcePreview;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationController;
- (id)customAnimator;
- (id)initWithPresentedViewController:(id)arg1 animationController:(id)arg2;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (id)presentedViewController;
- (void)transitionDidEnd:(bool)arg1;

@end
