
@interface BNBannerAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    BSAnimationSettings * _animationSettings;
    NSMapTable * _transitionContextsToTransitionCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRetargetable, nonatomic, readonly) bool retargetable;
@property (readonly) Class superclass;

+ (void)_animateInteractive:(bool)arg1 settings:(id)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)animateInteractive:(bool)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)animateWithSettings:(id)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (id)defaultResizeAnimationSettings;

- (void).cxx_destruct;
- (bool)_popTransitionForContext:(id)arg1;
- (void)_pushTransitionForContext:(id)arg1;
- (void)actionsForTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)init;
- (id)initWithAnimationSettings:(id)arg1;
- (bool)isRetargetable;
- (void)retargetTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
