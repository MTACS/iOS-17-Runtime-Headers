
@interface UIApplicationSceneSpecification : FBSSceneSpecification

- (bool)affectsAppLifecycleIfInternal;
- (bool)affectsScreenOrientation;
- (id)baseSceneComponentClassDictionary;
- (Class)clientAgentClass;
- (Class)clientSettingsClass;
- (id)connectionHandlers;
- (id)coreSceneComponentClassDictionary;
- (id)defaultExtensions;
- (id)disconnectionHandlers;
- (id)finalActionHandlers;
- (Class)hostAgentClass;
- (id)initialActionHandlers;
- (id)initialSettingsDiffActions;
- (bool)isInternal;
- (bool)isUIKitManaged;
- (Class)lifecycleMonitorClass;
- (Class)sceneSubstrateClass;
- (Class)settingsClass;
- (Class)transitionContextClass;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;

@end
