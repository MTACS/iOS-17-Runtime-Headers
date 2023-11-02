
@protocol PUWallpaperRenderingEnvironment <PUPosterEnvironment>

@required

- (NSURL *)pu_assetDirectory;
- (long long)pu_backlightLuminance;
- (long long)pu_contentsType;
- (long long)pu_deviceOrientation;
- (bool)pu_isPlayground;
- (bool)pu_isPreview;
- (bool)pu_isSnapshot;

@end
