
@interface FBSSceneClientSettingsDiffInspector : FBSSettingsDiffInspector

+ (void)initialize;

- (void)observeLayersWithBlock:(id /* block */)arg1;
- (void)observeOcclusionsWithBlock:(id /* block */)arg1;
- (void)observePreferredInterfaceOrientationWithBlock:(id /* block */)arg1;
- (void)observePreferredLevelWithBlock:(id /* block */)arg1;
- (void)observePreferredSceneHostIdentifierWithBlock:(id /* block */)arg1;
- (void)observePreferredSceneHostIdentityWithBlock:(id /* block */)arg1;

@end
