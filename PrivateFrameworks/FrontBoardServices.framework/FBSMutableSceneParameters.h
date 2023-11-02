
@interface FBSMutableSceneParameters : FBSSceneParameters {
    FBSDisplayConfiguration * _displayConfiguration;
}

@property (nonatomic, copy) FBSSceneClientSettings *clientSettings;
@property (nonatomic, copy) FBSSceneSettings *settings;
@property (setter=_setSpecification:, nonatomic, copy) FBSSceneSpecification *specification;

- (void).cxx_destruct;
- (void)_setSpecification:(id)arg1;
- (void)applyParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDisplay:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)updateClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateSettingsWithBlock:(id /* block */)arg1;

@end
