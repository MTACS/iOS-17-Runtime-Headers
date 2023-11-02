
@interface SBLaunchImageOverridesContext : NSObject {
    bool  _ignoreSnapshots;
    NSString * _launchImageName;
    NSString * _sceneID;
    SBActivationSettings * _settings;
    NSURL * _url;
}

@property (nonatomic, readonly) SBActivationSettings *activationSettings;
@property (nonatomic, readonly) bool ignoreSnapshots;
@property (nonatomic, readonly, copy) NSString *launchImageName;
@property (nonatomic, readonly, copy) NSString *sceneID;
@property (nonatomic, readonly, copy) NSURL *url;

- (void).cxx_destruct;
- (id)activationSettings;
- (bool)ignoreSnapshots;
- (id)initWithSceneID:(id)arg1 activationSettings:(id)arg2;
- (id)launchImageName;
- (id)sceneID;
- (id)url;

@end
