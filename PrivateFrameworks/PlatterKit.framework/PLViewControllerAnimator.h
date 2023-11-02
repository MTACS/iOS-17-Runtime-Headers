
@interface PLViewControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _didPrepareForTransition;
    bool  _includePresentingViewInAnimation;
    NSPointerArray * _observers;
    bool  _presenting;
    UIViewPropertyAnimator * _propertyAnimator;
    bool  _runAlongsideAnimationsManually;
    UIView * _sourceView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includePresentingViewInAnimation;
@property (getter=isPresenting, nonatomic, readonly) bool presenting;
@property (nonatomic, readonly) UIViewPropertyAnimator *propertyAnimator;
@property (nonatomic) bool runAlongsideAnimationsManually;
@property (readonly) Class superclass;

+ (bool)drivesAnimation;

- (void).cxx_destruct;
- (void)_animateTransitionWithContext:(id)arg1 completion:(id /* block */)arg2;
- (bool)_isTransitionAnimated;
- (id)_newPropertyAnimator;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (void)_performTransitionWithContext:(id)arg1;
- (id)_presentedExpandedPlatterForPresentedView:(id)arg1;
- (id)_presentedViewControllerForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentedViewForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentingViewControllerForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (id)_presentingViewForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (id)_previewInteractionPresentableViewControllerForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (id)_sourceViewForPresentation:(bool)arg1 withTransitionContext:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (bool)includePresentingViewInAnimation;
- (id)initForPresentation:(bool)arg1 withSourceView:(id)arg2;
- (bool)isPresenting;
- (void)performTransitionWithContext:(id)arg1;
- (void)prepareForTransitionWithContext:(id)arg1;
- (id)propertyAnimator;
- (void)removeObserver:(id)arg1;
- (bool)runAlongsideAnimationsManually;
- (void)setIncludePresentingViewInAnimation:(bool)arg1;
- (void)setRunAlongsideAnimationsManually:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end
