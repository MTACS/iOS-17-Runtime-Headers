
@interface QLTransitionController : NSObject <QLTransitionControllerProtocol, UIViewControllerAnimatedTransitioning> {
    UIViewController<QLCustomTransitioning> * _animatedController;
    UINavigationController * _disabledNavigationController;
    double  _duration;
    bool  _hasPerformedTransition;
    QLTransitionContext * _quickLookTransitionContext;
    NSDate * _setupDate;
    bool  _showing;
    id /* block */  _startTransitionBlock;
    UIView * _transitionBackgroundView;
    <UIViewControllerContextTransitioning> * _transitionContext;
    id  _transitionDriver;
    unsigned long long  _transitionState;
}

@property (readonly) UIViewController<QLCustomTransitioning> *animatedController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration;
@property (nonatomic) bool hasPerformedTransition;
@property (readonly) unsigned long long hash;
@property (readonly) UIViewController *presenterViewController;
@property (readonly) QLPreviewController *previewController;
@property (retain) QLTransitionContext *quickLookTransitionContext;
@property (nonatomic, retain) NSDate *setupDate;
@property bool showing;
@property (readonly) Class superclass;
@property <UIViewControllerContextTransitioning> *transitionContext;
@property (readonly) id transitionDriver;
@property unsigned long long transitionState;

- (void).cxx_destruct;
- (void)_completeBackgroundTransition:(bool)arg1;
- (void)_completeOverlayTransition:(bool)arg1;
- (void)_performForcedDismissal;
- (void)_performStartBlockIfNeeded;
- (void)_performTransition;
- (void)_prepareTimedForcedDismissal;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; })_requiredVisualStateTransitions;
- (void)_updateBackgroundTransitionWithProgress:(double)arg1;
- (void)_updateOverlayTransitionWithProgress:(double)arg1;
- (void)_view:(id)arg1 applyFrameFromTransitionContextAsFinalFrame:(bool)arg2 isToView:(bool)arg3;
- (void)animateTransition:(id)arg1;
- (id)animatedController;
- (void)completeTransition:(bool)arg1;
- (void)completeTransition:(bool)arg1 withDuration:(double)arg2;
- (double)duration;
- (bool)forceDismissalIfNeeded;
- (bool)hasPerformedTransition;
- (id)presenterViewController;
- (id)previewController;
- (id)quickLookTransitionContext;
- (void)setDuration:(double)arg1;
- (void)setHasPerformedTransition:(bool)arg1;
- (void)setQuickLookTransitionContext:(id)arg1;
- (void)setSetupDate:(id)arg1;
- (void)setShowing:(bool)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setTransitionState:(unsigned long long)arg1;
- (void)setUpWithTransitionContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)setupDate;
- (bool)showing;
- (void)tearDownTransition:(bool)arg1;
- (id)transitionContext;
- (id)transitionDriver;
- (double)transitionDuration:(id)arg1;
- (unsigned long long)transitionState;
- (void)updateTransitionWithProgress:(double)arg1;

@end
