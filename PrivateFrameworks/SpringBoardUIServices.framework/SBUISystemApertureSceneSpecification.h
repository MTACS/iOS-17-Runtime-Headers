
@interface SBUISystemApertureSceneSpecification : UIApplicationSceneSpecification

- (bool)affectsAppLifecycleIfInternal;
- (bool)allowsConfigurationByAppDelegate;
- (id)baseSceneComponentClassDictionary;
- (bool)isInternal;
- (id)uiSceneSessionRole;

@end
