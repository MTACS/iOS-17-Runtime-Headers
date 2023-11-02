
@protocol ARSCNViewDelegate <SCNSceneRendererDelegate, ARSessionObserver>

@optional

- (void)renderer:(id <SCNSceneRenderer>)arg1 didAddNode:(SCNNode *)arg2 forAnchor:(ARAnchor *)arg3;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didRemoveNode:(SCNNode *)arg2 forAnchor:(ARAnchor *)arg3;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didUpdateNode:(SCNNode *)arg2 forAnchor:(ARAnchor *)arg3;
- (SCNNode *)renderer:(id <SCNSceneRenderer>)arg1 nodeForAnchor:(ARAnchor *)arg2;
- (void)renderer:(id <SCNSceneRenderer>)arg1 willUpdateNode:(SCNNode *)arg2 forAnchor:(ARAnchor *)arg3;

@end
