
@interface SBUISwitcherAnimationController : SBUIWorkspaceAnimationController <SBUIAnimationControllerObserver> {
    <NSObject> * _activityToken;
    id /* block */  _animationBlock;
    <SBSwitcherContentViewControlling> * _contentViewController;
    bool  _interruptible;
}

@property (getter=_isInterruptible, setter=_setInterruptible:, nonatomic) bool _interruptible;
@property (nonatomic, retain) <NSObject> *activityToken;
@property (nonatomic, copy) id /* block */ animationBlock;
@property (nonatomic) <SBSwitcherContentViewControlling> *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSignpostsAndBeginAnimationTrackingForAnimationStart;
- (void)_addSignpostsAndEndAnimationTrackingForAnimationEnd;
- (void)_didComplete;
- (bool)_isInterruptible;
- (id)_layoutState;
- (id)_previousLayoutState;
- (void)_setInterruptible:(bool)arg1;
- (void)_startAnimation;
- (void)_updatePPTsForAnimationEnd;
- (void)_updatePPTsForAnimationStart;
- (id)activityToken;
- (id /* block */)animationBlock;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (id)animationSettings;
- (id)contentViewController;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 contentViewController:(id)arg2 childAnimationControllers:(id)arg3 animationBlock:(id /* block */)arg4;
- (bool)isInterruptible;
- (bool)isReasonableMomentToInterrupt;
- (void)setActivityToken:(id)arg1;
- (void)setAnimationBlock:(id /* block */)arg1;
- (void)setContentViewController:(id)arg1;
- (bool)shouldResignActiveForAnimation;

@end
