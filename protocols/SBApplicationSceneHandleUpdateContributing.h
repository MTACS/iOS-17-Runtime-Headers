
@protocol SBApplicationSceneHandleUpdateContributing <NSObject>

@optional

- (void)applicationSceneHandle:(SBApplicationSceneHandle *)arg1 appendToSceneSettings:(UIMutableApplicationSceneSettings *)arg2 fromRequestContext:(SBWorkspaceApplicationSceneTransitionContext *)arg3 entity:(SBApplicationSceneEntity *)arg4;
- (void)applicationSceneHandle:(SBApplicationSceneHandle *)arg1 appendToTransitionContext:(UIApplicationSceneTransitionContext *)arg2 fromRequestContext:(SBWorkspaceApplicationSceneTransitionContext *)arg3 entity:(SBApplicationSceneEntity *)arg4;

@end
