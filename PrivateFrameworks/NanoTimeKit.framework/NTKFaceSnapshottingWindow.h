
@interface NTKFaceSnapshottingWindow : UIWindow

+ (bool)_isSecure;

- (bool)_alwaysGetsContexts;
- (bool)_isWindowServerHostingManaged;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (bool)_shouldUseRemoteContext;
- (bool)_wantsSceneAssociation;
- (id)init;
- (void)updateForDevice:(id)arg1;

@end
