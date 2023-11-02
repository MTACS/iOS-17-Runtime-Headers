
@interface GKDisplaceNoiseModifier : GKNoiseModifier

- (id)cloneModule;
- (id)init;
- (int)requiredInputModuleCount;
- (double)valueAt;

@end
