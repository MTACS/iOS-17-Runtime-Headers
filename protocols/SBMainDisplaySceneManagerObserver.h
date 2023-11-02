
@protocol SBMainDisplaySceneManagerObserver <SBSceneManagerObserver>

@optional

- (void)sceneManager:(SBSceneManager *)arg1 didAddExternalForegroundApplicationSceneHandle:(SBDeviceApplicationSceneHandle *)arg2;
- (void)sceneManager:(SBSceneManager *)arg1 didRemoveExternalForegroundApplicationSceneHandle:(SBDeviceApplicationSceneHandle *)arg2;

@end
