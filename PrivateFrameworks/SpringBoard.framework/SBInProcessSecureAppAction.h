
@interface SBInProcessSecureAppAction : SBSLockScreenContentAction {
    SBApplicationSceneEntity * _applicationSceneEntity;
}

@property (nonatomic, retain) SBApplicationSceneEntity *applicationSceneEntity;

- (void).cxx_destruct;
- (id)applicationSceneEntity;
- (id)initWithType:(unsigned long long)arg1 applicationSceneEntity:(id)arg2 handler:(id /* block */)arg3;
- (bool)isInProcessAction;
- (void)setApplicationSceneEntity:(id)arg1;

@end
