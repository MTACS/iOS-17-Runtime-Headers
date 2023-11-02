
@interface BNBannerTransitionAnimator : BNBannerAnimator {
    bool  _presenting;
}

@property (getter=isPresenting, nonatomic, readonly) bool presenting;

+ (void)animateInteractive:(bool)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;

- (void)actionsForTransition:(id)arg1;
- (id)initForPresenting:(bool)arg1;
- (bool)isPresenting;
- (double)transitionDuration:(id)arg1;

@end
