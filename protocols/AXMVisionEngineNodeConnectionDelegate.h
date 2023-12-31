
@protocol AXMVisionEngineNodeConnectionDelegate <NSObject>

@required

- (void)captureSessionNodeDidBeginProcessingFrames:(AXMAVCaptureSessionNode *)arg1;
- (void)captureSessionNodeDidDropFrame:(AXMAVCaptureSessionNode *)arg1;
- (void)captureSessionNodeDidEndProcessingFrames:(AXMAVCaptureSessionNode *)arg1;
- (void)captureSessionNodeWillProcessFrame:(AXMAVCaptureSessionNode *)arg1;
- (bool)diagnosticsEnabled:(AXMVisionEngineNode *)arg1;
- (bool)engineWillAcceptTiggerWithSource:(AXMSourceNode *)arg1;
- (void)triggerWithSource:(AXMSourceNode *)arg1 context:(AXMVisionPipelineContext *)arg2;

@end
