
@interface PRPosterSceneSettingsBuilder : NSObject {
    long long  _deviceOrientation;
    FBSDisplayConfiguration * _displayConfiguration;
    long long  _interfaceOrientation;
    _PRPosterStagedSceneSettings * _sceneSettings;
    long long  _snapshotOptions;
    UITraitCollection * _traitCollection;
}

@property (nonatomic) long long deviceOrientation;
@property (nonatomic, retain) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long snapshotOptions;
@property (nonatomic, retain) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (void)applySceneSettings:(id /* block */)arg1;
- (void)applySnapshotDefinition:(id)arg1;
- (id)buildWithPath:(id)arg1 provider:(id)arg2 configuredProperties:(id)arg3 snapshotDefinition:(id)arg4;
- (id)buildWithPath:(id)arg1 snapshotDefinition:(id)arg2;
- (long long)deviceOrientation;
- (id)displayConfiguration;
- (id)init;
- (long long)interfaceOrientation;
- (void)reset;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setSnapshotOptions:(long long)arg1;
- (void)setTraitCollection:(id)arg1;
- (long long)snapshotOptions;
- (id)traitCollection;

@end
