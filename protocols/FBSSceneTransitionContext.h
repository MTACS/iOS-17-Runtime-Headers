
@protocol FBSSceneTransitionContext

@required

- (NSSet *)actions;
- (BKSAnimationFenceHandle *)animationFence;
- (BSAnimationSettings *)animationSettings;
- (BSProcessHandle *)originatingProcess;
- (void)setActions:(NSSet *)arg1;
- (void)setAnimationFence:(BKSAnimationFenceHandle *)arg1;
- (void)setAnimationSettings:(BSAnimationSettings *)arg1;
- (void)setOriginatingProcess:(BSProcessHandle *)arg1;

@optional

- (bool)allowCPUThrottling;
- (RBSProcessHandle *)clientProcessHandle;
- (FBProcessExecutionContext *)executionContext;
- (bool)isRunningBoardAssertionDisabled;
- (void)setAllowCPUThrottling:(bool)arg1;
- (void)setClientProcessHandle:(RBSProcessHandle *)arg1;
- (void)setExecutionContext:(FBProcessExecutionContext *)arg1;
- (void)setRunningBoardAssertionDisabled:(bool)arg1;
- (void)setUpdateContext:(FBSceneUpdateContext *)arg1;
- (void)setWatchdogTransitionContext:(FBWatchdogTransitionContext *)arg1;
- (FBSceneUpdateContext *)updateContext;
- (FBWatchdogTransitionContext *)watchdogTransitionContext;

@end
