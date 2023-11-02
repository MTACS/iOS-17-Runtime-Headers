
@interface SBSpotlightTransitionAnimator : NSObject <PTSettingsKeyObserver, SBViewControllerInteractiveAnimatedTransitioning> {
    SBSearchBackdropView * _backdropView;
    UIView * _containerView;
    <SBUISpotlightInitiating> * _initiatingViewController;
    unsigned long long  _operation;
    bool  _ownsBackdropView;
    double  _percentComplete;
    struct { 
        struct { 
            double value; 
            bool inclusive; 
        } start; 
        struct { 
            double value; 
            bool inclusive; 
        } end; 
    }  _pulldownInterval;
    UIView * _searchView;
    SBSystemAnimationSettings * _settings;
    SPUIRemoteSearchViewController * _spotlightViewController;
    UIView * _touchSwallowingView;
    <SBViewControllerContextTransitioning> * _transitionContext;
    double  _transitionDuration;
    unsigned long long  _transitionToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateInteractiveTransition:(id)arg1;
- (void)_animateIntoSearch:(bool)arg1;
- (void)_cancelInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)_cleanupAfterAnimating:(bool)arg1;
- (void)_finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (double)_percentVisibleForPercentComplete:(double)arg1;
- (void)_prepareToAnimate;
- (void)_prototypeSettingsChanged;
- (void)_restoreSpotlightHeaderToInitiatingViewController;
- (void)_restoreSpotlightHeaderToInitiatingViewControllerForCancellation:(bool)arg1;
- (void)_updateTransitionIntoSearch:(bool)arg1 percentComplete:(double)arg2;
- (void)animateTransition:(id)arg1;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (id)init;
- (double)percentComplete;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldMoveIntoSearch;
- (bool)shouldMoveIntoSearchOnCancel;
- (bool)supportsRestarting;
- (double)transitionDuration:(id)arg1;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;

@end
