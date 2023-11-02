
@protocol ARWorldTrackingTechniqueObserver <NSObject>

@optional

- (void)technique:(ARWorldTrackingTechnique *)arg1 didChangeState:(long long)arg2;
- (void)technique:(ARWorldTrackingTechnique *)arg1 didDetectPlane:(ARPlaneData *)arg2 timestamp:(double)arg3;
- (void)technique:(ARWorldTrackingTechnique *)arg1 didOutputCollaborationData:(ARCollaborationData *)arg2;
- (void)technique:(ARWorldTrackingTechnique *)arg1 didOutputSceneUnderstandingData:(ARRawSceneUnderstandingData *)arg2 timestamp:(double)arg3;

@end
