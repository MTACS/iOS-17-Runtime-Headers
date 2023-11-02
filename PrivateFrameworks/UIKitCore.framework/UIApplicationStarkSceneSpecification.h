
@interface UIApplicationStarkSceneSpecification : UIApplicationSceneSpecification

- (id)baseSceneComponentClassDictionary;
- (id)connectionHandlers;
- (id)disconnectionHandlers;
- (id)finalActionHandlers;
- (id)initialSettingsDiffActions;
- (Class)settingsClass;
- (id)uiSceneSessionRole;

@end
