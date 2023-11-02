
@interface BNBannerSourceApplicationSceneSpecification : UIApplicationSceneSpecification

- (bool)affectsAppLifecycleIfInternal;
- (id)baseSceneComponentClassDictionary;
- (Class)clientSettingsClass;
- (bool)isInternal;
- (Class)settingsClass;
- (id)uiSceneSessionRole;

@end
