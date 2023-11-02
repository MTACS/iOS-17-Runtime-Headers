
@interface SBAppClientSettingObserverContext : NSObject {
    SBApplication * _app;
    UIApplicationSceneClientSettings * _oldClientSettings;
    FBScene * _scene;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    UIApplicationSceneSettings * _settings;
    FBSSceneTransitionContext * _transition;
    UIApplicationSceneClientSettings * _updatedClientSettings;
}

@property (nonatomic, retain) SBApplication *app;
@property (nonatomic, retain) UIApplicationSceneClientSettings *oldClientSettings;
@property (nonatomic, retain) FBScene *scene;
@property (nonatomic, retain) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic, retain) UIApplicationSceneSettings *settings;
@property (nonatomic, retain) FBSSceneTransitionContext *transition;
@property (nonatomic, retain) UIApplicationSceneClientSettings *updatedClientSettings;

- (void).cxx_destruct;
- (id)app;
- (id)oldClientSettings;
- (id)scene;
- (id)sceneHandle;
- (void)setApp:(id)arg1;
- (void)setOldClientSettings:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setSceneHandle:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setTransition:(id)arg1;
- (void)setUpdatedClientSettings:(id)arg1;
- (id)settings;
- (id)transition;
- (id)updatedClientSettings;

@end
