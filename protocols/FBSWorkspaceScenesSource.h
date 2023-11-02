
@protocol FBSWorkspaceScenesSource <NSObject>

@required

- (NSObject<NSCopying> *)identifier;
- (FBSScene *)sceneWithIdentity:(FBSSceneIdentity *)arg1;
- (NSSet *)scenes;

@end
