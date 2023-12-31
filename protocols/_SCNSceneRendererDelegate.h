
@protocol _SCNSceneRendererDelegate <NSObject>

@optional

- (void)_renderer:(id <SCNSceneRenderer>)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)_renderer:(id <SCNSceneRenderer>)arg1 didApplyConstraintsAtTime:(double)arg2;
- (void)_renderer:(id <SCNSceneRenderer>)arg1 didRenderScene:(SCNScene *)arg2 atTime:(double)arg3;
- (void)_renderer:(id <SCNSceneRenderer>)arg1 didSimulatePhysicsAtTime:(double)arg2;
- (void)_renderer:(id <SCNSceneRenderer>)arg1 updateAtTime:(double)arg2;
- (void)_renderer:(id <SCNSceneRenderer>)arg1 willRenderScene:(SCNScene *)arg2 atTime:(double)arg3;

@end
