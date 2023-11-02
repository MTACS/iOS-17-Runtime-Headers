
@protocol CSTraitsAwareOrientedAppHosting <NSObject>

@required

- (SBSceneHandle *)hostedSceneHandle;
- (void)sceneDidAttach;
- (void)sceneWasDestroyed;
- (void)setContentViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
