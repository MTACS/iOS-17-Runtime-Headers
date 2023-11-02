
@interface SBUIAnimationPropertyAnimator : NSObject <SBViewControllerAnimatedTransitioning> {
    NSMutableArray * _completionBlocks;
    double  _duration;
    id /* block */  _generator;
    UIViewPropertyAnimator * _propertyAnimator;
    unsigned long long  _reverseCount;
    bool  _wasStarted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) id /* block */ generator;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReversed;
@property (nonatomic, readonly) UIViewPropertyAnimator *propertyAnimator;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wasReversed;

- (void).cxx_destruct;
- (void)_executeGenerator:(id)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (void)animateTransition:(id)arg1;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (double)duration;
- (id /* block */)generator;
- (id)initWithPropertyAnimator:(id)arg1 duration:(double)arg2;
- (id)initWithPropertyAnimatorGenerator:(id /* block */)arg1;
- (bool)isReversed;
- (void)prepareToRunAnimation:(id)arg1;
- (id)propertyAnimator;
- (void)reverseAnimation;
- (double)transitionDuration:(id)arg1;
- (bool)wasReversed;

@end
