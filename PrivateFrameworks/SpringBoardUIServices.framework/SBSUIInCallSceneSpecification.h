
@interface SBSUIInCallSceneSpecification : UIApplicationSceneSpecification

- (Class)clientSettingsClass;
- (id)defaultExtensions;
- (id)initialActionHandlers;
- (id)initialSettingsDiffActions;
- (Class)settingsClass;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;

@end
