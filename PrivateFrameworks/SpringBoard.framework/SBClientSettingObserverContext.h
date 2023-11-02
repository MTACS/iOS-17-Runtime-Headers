
@interface SBClientSettingObserverContext : NSObject {
    FBSSceneClientSettings * _oldClientSettings;
    FBScene * _scene;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    FBSSceneTransitionContext * _transition;
}

- (void).cxx_destruct;

@end
