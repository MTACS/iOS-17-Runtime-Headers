
@interface _UIHostedWindowAnimationController : _UIWindowAnimationController {
    double  _duration;
    id /* block */  _transitionActions;
}

@property (nonatomic) double duration;
@property (nonatomic, copy) id /* block */ transitionActions;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)setTransitionActions:(id /* block */)arg1;
- (id /* block */)transitionActions;
- (double)transitionDuration:(id)arg1;

@end
