
@interface SBApplicationSceneView : SBSceneView

@property (nonatomic, readonly) SBApplication *application;
@property (nonatomic, readonly) SBApplicationSceneHandle *sceneHandle;

- (id)application;
- (id)deviceApplicationSceneView;
- (id)initWithSceneHandle:(id)arg1 referenceSize:(struct CGSize { double x1; double x2; })arg2 contentOrientation:(long long)arg3 containerOrientation:(long long)arg4 hostRequester:(id)arg5;

@end
