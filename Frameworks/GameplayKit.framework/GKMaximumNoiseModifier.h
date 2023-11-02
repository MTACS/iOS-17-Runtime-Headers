
@interface GKMaximumNoiseModifier : GKNoiseModifier

- (id)cloneModule;
- (id)init;
- (int)requiredInputModuleCount;
- (double)valueAt;

@end
