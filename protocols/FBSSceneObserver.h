
@protocol FBSSceneObserver <NSObject>

@optional

- (void)scene:(FBSScene *)arg1 didUpdateClientSettings:(FBSSceneUpdate *)arg2;
- (void)scene:(FBSScene *)arg1 didUpdateHostHandle:(FBSSceneHostHandle *)arg2;
- (void)scene:(FBSScene *)arg1 didUpdateSettings:(FBSSceneUpdate *)arg2;
- (NSSet *)scene:(FBSScene *)arg1 handleActions:(NSSet *)arg2;
- (void)sceneWillInvalidate:(FBSScene *)arg1;

@end
