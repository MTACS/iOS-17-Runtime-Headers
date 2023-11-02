
@interface SBIconAnimator : NSObject {
    <SBIconAnimationContaining> * _animationContainer;
    SBFolderControllerAnimationContext * _animationContext;
    unsigned long long  _animationCount;
    UIView * _backgroundDarkeningView;
    bool  _cleanedUp;
    <SBIconAnimatorDelegate> * _delegate;
    double  _fraction;
    bool  _invalidated;
    NSMutableArray * _pendedAnimationContexts;
    SBHIconAnimationSettings * _settings;
    bool  _startAnimationAfterRotationEnds;
    bool  _windowIsRotating;
}

@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic, readonly) <SBIconAnimationContaining> *animationContainer;
@property (nonatomic, retain) UIView *backgroundDarkeningView;
@property (nonatomic) <SBIconAnimatorDelegate> *delegate;
@property (nonatomic) double fraction;
@property (nonatomic) bool invalidated;
@property (getter=isPastPointOfNoReturn, nonatomic, readonly) bool pastPointOfNoReturn;
@property (nonatomic, readonly) UIView *referenceView;
@property (nonatomic, retain) SBHIconAnimationSettings *settings;

- (void).cxx_destruct;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(id /* block */)arg3;
- (void)_animateToFractionFromContext:(id)arg1;
- (void)_animateToFractionFromPendingContexts;
- (void)_cleanupAnimation;
- (void)_invalidateCompletions;
- (bool)_isDelayedForRotation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_windowFinishedRotating;
- (void)animateToFraction:(double)arg1 afterDelay:(double)arg2 withCompletion:(id /* block */)arg3;
- (id)animationContainer;
- (id)backgroundDarkeningView;
- (id)centralAnimationFactory;
- (void)cleanup;
- (void)dealloc;
- (id)delegate;
- (double)fraction;
- (id)initWithAnimationContainer:(id)arg1;
- (bool)invalidated;
- (bool)isAnimating;
- (bool)isPastPointOfNoReturn;
- (void)prepare;
- (id)referenceView;
- (void)setBackgroundDarkeningView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFraction:(double)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
