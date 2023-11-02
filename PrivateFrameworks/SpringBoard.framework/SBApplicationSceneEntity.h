
@interface SBApplicationSceneEntity : SBWorkspaceEntity <SBProcessSettings> {
    NSMutableSet * _actions;
    SBProcessSettings * _processSettings;
    SBApplicationSceneHandle * _sceneHandle;
}

@property (nonatomic, readonly, copy) NSSet *actions;
@property (nonatomic, readonly) SBApplication *application;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBProcessSettings *processSettings;
@property (nonatomic, readonly) SBApplicationSceneHandle *sceneHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithSceneHandle:(id)arg1;
- (void)_initializeWithSceneHandle:(id)arg1;
- (bool)_supportsLayoutRole:(long long)arg1;
- (id)actions;
- (void)addActions:(id)arg1;
- (id)application;
- (id)applicationSceneEntity;
- (void)applyProcessSettings:(id)arg1;
- (bool)boolForProcessSetting:(long long)arg1;
- (void)clearProcessSettings;
- (id)copyProcessSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id /* block */)entityGenerator;
- (long long)flagForProcessSetting:(long long)arg1;
- (unsigned long long)hash;
- (bool)isApplicationSceneEntity;
- (bool)isEqual:(id)arg1;
- (id)objectForProcessSetting:(long long)arg1;
- (id)processSettings;
- (void)removeActions:(id)arg1;
- (void)removeAllActions;
- (id)sceneHandle;
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;
- (void)translateActivationSettingsToActions;
- (Class)viewControllerClass;

@end
