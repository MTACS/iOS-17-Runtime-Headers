
@interface BLSHLocalCountingSceneAssertionAttributeHandler : BLSHLocalCountingAssertionAttributeHandler <BLSHSceneEnvironmentObserving>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)attributeBaseClass;
+ (id)attributeClasses;

- (void)activateForSceneEnvironment:(id)arg1;
- (void)activateWithFirstEntry:(id)arg1;
- (id)countingTargetForEntry:(id)arg1;
- (void)deactivateForSceneEnvironment:(id)arg1;
- (void)deactivateWithFinalEntry:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1 environment:(id)arg2;

@end
