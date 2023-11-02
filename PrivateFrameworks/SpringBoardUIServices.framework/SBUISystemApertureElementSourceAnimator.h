
@interface SBUISystemApertureElementSourceAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    NSMutableArray * _postAlongsideAnimations;
    NSMutableArray * _postflightActions;
    NSMutableArray * _preAlongsideAnimations;
    NSMutableArray * _preflightActions;
    SBUISystemApertureAnimationParameters * _settings;
    <UIViewControllerContextTransitioning> * _transitionContext;
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBUISystemApertureAnimationParameters *settings;
@property (readonly) Class superclass;

+ (id)activeAnimator;
+ (void)setActiveAnimator:(id)arg1;

- (void).cxx_destruct;
- (void)_finishTransition:(bool)arg1;
- (void)_performAnimation;
- (void)addPostAlongsideAnimation:(id /* block */)arg1;
- (void)addPostflightAction:(id /* block */)arg1;
- (void)addPreAlongsideAnimation:(id /* block */)arg1;
- (void)addPreflightAction:(id /* block */)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithSettings:(id)arg1 window:(id)arg2;
- (id)settings;
- (double)transitionDuration:(id)arg1;

@end
