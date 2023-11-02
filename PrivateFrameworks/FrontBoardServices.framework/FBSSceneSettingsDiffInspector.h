
@interface FBSSceneSettingsDiffInspector : FBSSettingsDiffInspector

+ (void)initialize;

- (void)observeDisplayConfigurationWithBlock:(id /* block */)arg1;
- (void)observeFrameWithBlock:(id /* block */)arg1;
- (void)observeInterfaceOrientationWithBlock:(id /* block */)arg1;
- (void)observeIsBackgroundedWithBlock:(id /* block */)arg1;
- (void)observeIsForegroundWithBlock:(id /* block */)arg1;
- (void)observeLevelWithBlock:(id /* block */)arg1;
- (void)observeOcclusionsWithBlock:(id /* block */)arg1;

@end
