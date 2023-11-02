
@interface CCUIContentModuleDetailAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    UIViewController * _anchoringViewController;
    bool  _presenting;
    UIViewPropertyAnimator * _propertyAnimator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPresenting, nonatomic, readonly) bool presenting;
@property (nonatomic, readonly) UIViewPropertyAnimator *propertyAnimator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contentModuleContainingViewController;
- (id)_newPropertyAnimator;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (id)initForPresenting:(bool)arg1 anchoringViewController:(id)arg2;
- (bool)isPresenting;
- (void)performTransition:(id)arg1;
- (id)propertyAnimator;
- (double)transitionDuration:(id)arg1;

@end
