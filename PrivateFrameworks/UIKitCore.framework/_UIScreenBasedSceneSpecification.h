
@interface _UIScreenBasedSceneSpecification : UIApplicationSceneSpecification

- (id)connectionHandlers;
- (id)disconnectionHandlers;
- (bool)isInternal;
- (bool)isUIKitManaged;
- (Class)lifecycleMonitorClass;
- (Class)sceneSubstrateClass;
- (Class)uiSceneMinimumClass;
- (id)uiSceneSessionRole;

@end
