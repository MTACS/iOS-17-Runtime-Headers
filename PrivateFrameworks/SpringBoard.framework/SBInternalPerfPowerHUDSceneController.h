
@interface SBInternalPerfPowerHUDSceneController : SBSystemUISceneController <SBFBacklightEnvironmentSceneProviding> {
    FBScene * _backlightParticipantScene;
    bool  _registeredBacklightSceneProvider;
}

@property (nonatomic) FBScene *backlightParticipantScene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool registeredBacklightSceneProvider;
@property (readonly) Class superclass;

+ (id)_setupInfo;

- (void).cxx_destruct;
- (void)_configureBacklightEnvironmentSceneProviderIfNecessary;
- (id)_newSceneControllerForWindowScene:(id)arg1 sceneRequestOptions:(id)arg2 traitsRole:(id)arg3 level:(double)arg4;
- (id)backlightParticipantScene;
- (bool)registeredBacklightSceneProvider;
- (id)scenesForBacklightSession;
- (void)setBacklightParticipantScene:(id)arg1;
- (void)setRegisteredBacklightSceneProvider:(bool)arg1;
- (void)windowSceneDidConnect:(id)arg1;
- (void)windowSceneDidDisconnect:(id)arg1;

@end
