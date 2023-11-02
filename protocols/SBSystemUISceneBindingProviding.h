
@protocol SBSystemUISceneBindingProviding <NSObject>

@required

- (void)addSystemUISceneToPresentationBinder:(FBScene *)arg1 forDisplayIdentity:(FBSDisplayIdentity *)arg2;
- (void)removeSystemUISceneFromPresentationBinder:(FBScene *)arg1 forDisplayIdentity:(FBSDisplayIdentity *)arg2;

@end
