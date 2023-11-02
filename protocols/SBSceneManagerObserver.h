
@protocol SBSceneManagerObserver <NSObject>

@optional

- (void)sceneManager:(SBSceneManager *)arg1 didAddExternalForegroundApplicationSceneHandle:(SBApplicationSceneHandle *)arg2;
- (void)sceneManager:(SBSceneManager *)arg1 didRemoveExternalForegroundApplicationSceneHandle:(SBApplicationSceneHandle *)arg2;
- (void)sceneManager:(SBSceneManager *)arg1 willMoveScene:(FBScene *)arg2 toSceneManager:(SBSceneManager *)arg3;
- (void)sceneManager:(SBSceneManager *)arg1 willRemoveExternalForegroundApplicationSceneHandle:(SBApplicationSceneHandle *)arg2 withReason:(long long)arg3;
- (void)sceneManagerDidInvalidate:(SBSceneManager *)arg1;

@end
