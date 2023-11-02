
@interface SBSUIStarkNotificationsSceneSpecification : UIApplicationStarkSceneSpecification

- (id)baseActionHandlers;
- (id)baseSettingsDiffActions;
- (Class)clientSettingsClass;
- (bool)isInternal;
- (bool)isUIKitManaged;
- (Class)settingsClass;
- (Class)transitionContextClass;

@end
