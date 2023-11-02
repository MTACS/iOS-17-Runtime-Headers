
@interface PBFEditingZoomUpAnimationController : PBFEditingZoomAnimationController <PREditingSceneViewControllerObserver, UIViewControllerAnimatedTransitioning> {
    bool  _animationFinished;
    bool  _contentReady;
    UIView * _dimmingView;
    <UIViewControllerContextTransitioning> * _transitionContext;
    UIView * _zoomingView;
}

@property (getter=isAnimationFinished, nonatomic) bool animationFinished;
@property (getter=isContentReady, nonatomic) bool contentReady;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dimmingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <UIViewControllerContextTransitioning> *transitionContext;
@property (nonatomic, retain) UIView *zoomingView;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)dimmingView;
- (void)editingSceneViewControllerDidFinishShowingContent:(id)arg1;
- (void)finishTransitionIfPossible;
- (bool)isAnimationFinished;
- (bool)isContentReady;
- (void)setAnimationFinished:(bool)arg1;
- (void)setContentReady:(bool)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setZoomingView:(id)arg1;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (id)zoomingView;

@end
