
@interface BNTransitionContext : NSObject <BNViewControllerContextTransitioning> {
    bool  _complete;
    bool  _explicitCompletionRequired;
    NSString * _revocationReason;
    _UIViewControllerOneToOneTransitionContext * _transitionContext;
}

@property (getter=isAnimated, nonatomic) bool animated;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic, readonly) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExplicitCompletionRequired, nonatomic) bool explicitCompletionRequired;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } fromEndFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } fromStartFrame;
@property (readonly) unsigned long long hash;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, copy) NSString *revocationReason;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } targetTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } toEndFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } toStartFrame;
@property (nonatomic, readonly) <UIViewControllerTransitionCoordinator> *transitionCoordinator;
@property (nonatomic, readonly) bool transitionWasCancelled;

+ (id)transitionContextForTransitionFromViewController:(id)arg1 toViewController:(id)arg2 inContainerView:(id)arg3;
+ (id)transitionContextForTransitionOfViewController:(id)arg1 fromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inContainerView:(id)arg4;

- (void).cxx_destruct;
- (void)__runAlongsideAnimations;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(bool)arg1;
- (id)containerView;
- (void)explictlyCompleteTransition:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForViewController:(id)arg1;
- (void)finishInteractiveTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fromEndFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fromStartFrame;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForViewController:(id)arg1;
- (bool)isAnimated;
- (bool)isComplete;
- (bool)isExplicitCompletionRequired;
- (bool)isInteractive;
- (void)pauseInteractiveTransition;
- (void)performTransitionWithAnimator:(id)arg1;
- (long long)presentationStyle;
- (id)revocationReason;
- (void)setAnimated:(bool)arg1;
- (void)setExplicitCompletionRequired:(bool)arg1;
- (void)setFromEndFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFromStartFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRevocationReason:(id)arg1;
- (void)setToEndFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setToStartFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetTransform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })toEndFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })toStartFrame;
- (id)transitionCoordinator;
- (bool)transitionWasCancelled;
- (void)updateInteractiveTransition:(double)arg1;
- (id)viewControllerForKey:(id)arg1;
- (id)viewForKey:(id)arg1;

@end
