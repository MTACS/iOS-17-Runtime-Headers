
@interface PRPosterSceneSettings : NSObject <NSCopying, NSSecureCoding> {
    long long  _deviceOrientation;
    FBSDisplayConfiguration * _displayConfiguration;
    long long  _interfaceOrientation;
    PRSServerPosterPath * _path;
    NSString * _provider;
    PRPosterConfiguredProperties * _sanitizedConfiguredProperties;
    _PRPosterStagedSceneSettings * _sceneSettings;
    long long  _snapshotOptions;
    UITraitCollection * _traitCollection;
}

@property (nonatomic) long long deviceOrientation;
@property (nonatomic, copy) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, retain) PRSServerPosterPath *path;
@property (nonatomic, copy) NSString *provider;
@property (nonatomic, retain) PRPosterConfiguredProperties *sanitizedConfiguredProperties;
@property (nonatomic, copy) _PRPosterStagedSceneSettings *sceneSettings;
@property (nonatomic) long long snapshotOptions;
@property (nonatomic, readonly, copy) <PRSceneSettings><PRRenderingSceneSettings> *stagedSceneSettings;
@property (nonatomic, copy) UITraitCollection *traitCollection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToMutableSceneSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deviceOrientation;
- (id)displayConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)interfaceOrientation;
- (id)path;
- (id)provider;
- (id)sanitizedConfiguredProperties;
- (id)sceneSettings;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setPath:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setSanitizedConfiguredProperties:(id)arg1;
- (void)setSceneSettings:(id)arg1;
- (void)setSnapshotOptions:(long long)arg1;
- (void)setTraitCollection:(id)arg1;
- (long long)snapshotOptions;
- (id)stagedSceneSettings;
- (id)traitCollection;

@end
