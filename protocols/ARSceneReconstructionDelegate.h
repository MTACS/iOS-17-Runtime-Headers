
@protocol ARSceneReconstructionDelegate <NSObject>

@required

- (void)sceneReconstructionHandler:(ARSceneReconstructionHandler *)arg1 didFailWithError:(NSError *)arg2;
- (void)sceneReconstructionHandler:(ARSceneReconstructionHandler *)arg1 didOutputKeyframeList:(struct CV3DReconKeyframeList { }*)arg2 withTimestamp:(double)arg3;
- (void)sceneReconstructionHandler:(ARSceneReconstructionHandler *)arg1 didOutputMeshList:(struct CV3DReconMeshList { }*)arg2 withTimestamp:(double)arg3;

@end
