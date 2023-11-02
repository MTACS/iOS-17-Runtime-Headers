
@interface AVTransition : NSObject {
    NSMutableArray * _allAnimators;
    UIViewPropertyAnimator * _clientAnimator;
    <AVTransitionDelegate> * _delegate;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _destinationViewTransform;
    AVPresentationContext * _presentationContext;
    UIViewPropertyAnimator * _transitionAnimator;
    <UIViewControllerContextTransitioningEx> * _transitionContext;
}

@property (nonatomic, readonly) NSMutableArray *allAnimators;
@property (nonatomic, readonly) UIViewPropertyAnimator *clientAnimator;
@property (nonatomic) <AVTransitionDelegate> *delegate;
@property (nonatomic, retain) AVPresentationContext *presentationContext;
@property (nonatomic, readonly) UIViewPropertyAnimator *transitionAnimator;
@property (nonatomic, readonly) double transitionAnimatorProgress;
@property (nonatomic, readonly) <UIViewControllerContextTransitioningEx> *transitionContext;

- (void).cxx_destruct;
- (void)_animateAlongsideInteractiveDismissalTransitionAnimationForCancelling;
- (void)_animateAlongsideInteractivePresentationTransitionAnimationForCancelling;
- (void)_animateFinishInteractiveTransition;
- (void)_dismissalTransitionDidEnd:(bool)arg1;
- (void)_dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_finalFrameForPresentedView;
- (void)_freezeDismissingViewForFinishing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_initialFrameForPresentedView;
- (void)_presentationTransitionDidEnd:(bool)arg1;
- (void)_presentationTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceViewFrameInContainerView;
- (void)_startOrContinueAnimatorsReversed:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForScale:(double)arg1 translation:(struct CGPoint { double x1; double x2; })arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint { double x1; double x2; })arg4 sourceRectInContainerView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)_updateCornerAppearanceAttributesOfView:(id)arg1 toSourceView:(id)arg2 similarity:(double)arg3;
- (void)addRunAlongsideAnimationsIfNeeded;
- (id)allAnimators;
- (void)cancelInteractiveTransition;
- (id)clientAnimator;
- (void)completeTransition:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (void)finishInteractiveTransition;
- (id)initWithTransitionContext:(id)arg1;
- (void)pauseInteractiveTransition;
- (id)presentationContext;
- (void)setDelegate:(id)arg1;
- (void)setPresentationContext:(id)arg1;
- (void)startInteractiveTransition;
- (id)transitionAnimator;
- (double)transitionAnimatorProgress;
- (id)transitionContext;
- (void)updateWithPercentComplete:(double)arg1 scale:(double)arg2 translation:(struct CGPoint { double x1; double x2; })arg3 rotation:(double)arg4;

@end
