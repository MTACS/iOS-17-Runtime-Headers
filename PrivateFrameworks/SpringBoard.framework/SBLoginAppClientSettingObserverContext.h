
@interface SBLoginAppClientSettingObserverContext : NSObject {
    UIApplicationSceneSettings * _settings;
    SBSUILoginUISceneClientSettings * _updatedClientSettings;
}

@property (nonatomic, retain) UIApplicationSceneSettings *settings;
@property (nonatomic, retain) SBSUILoginUISceneClientSettings *updatedClientSettings;

- (void).cxx_destruct;
- (void)setSettings:(id)arg1;
- (void)setUpdatedClientSettings:(id)arg1;
- (id)settings;
- (id)updatedClientSettings;

@end
