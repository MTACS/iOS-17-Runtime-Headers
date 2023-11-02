
@interface SBFluidSwitcherAnimationController : SBUIBlockAnimationController <SBUIAnimationControllerObserver> {
    id /* block */  _animationCompletion;
}

@property (nonatomic, copy) id /* block */ animationCompletion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)animationCompletion;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(id /* block */)arg3;
- (bool)isFluidSwitcherAnimationController;
- (void)setAnimationCompletion:(id /* block */)arg1;

@end
