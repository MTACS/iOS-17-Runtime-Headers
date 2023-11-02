
@interface SBInternalClientSettingObserverContext : NSObject {
    UIApplicationSceneClientSettings * _oldClientSettings;
    FBScene * _scene;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    FBSSceneTransitionContext * _transition;
    UIApplicationSceneClientSettings * _updatedClientSettings;
}

- (void).cxx_destruct;

@end
