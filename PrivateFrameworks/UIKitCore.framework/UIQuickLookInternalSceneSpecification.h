
@interface UIQuickLookInternalSceneSpecification : UIApplicationSceneSpecification

- (bool)affectsAppLifecycleIfInternal;
- (id)initialActionHandlers;
- (bool)isInternal;
- (id)uiSceneSessionRole;

@end
