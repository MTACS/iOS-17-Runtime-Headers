
@protocol PUWallpaperEditorEnvironment <PUPosterEnvironment>

@required

- (UIColor *)pu_caseColor;
- (long long)pu_deviceOrientation;
- (unsigned long long)pu_legacyConfigurationType;
- (<PUPosterOverrideConfiguration> *)pu_overrideConfiguration;
- (PFPosterDescriptor *)pu_posterDescriptor;
- (long long)pu_posterType;
- (NSURL *)pu_sourceAssetDirectory;
- (PFPosterConfiguration *)pu_sourcePosterConfiguration;
- (NSURL *)pu_targetAssetDirectory;
- (<PUMutablePosterConfiguration> *)pu_targetConfiguration;
- (long long)pu_userInterfaceStyle;

@end
