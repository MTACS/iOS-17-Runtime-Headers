
@interface BWFigCaptureSession : NSObject <BWGraphStatusDelegate, BWImageQueueSinkNodePreviewTapDelegate, BWIrisStagingNodeIrisRequestDelegate, BWNodeFileCoordinatorStatusDelegate, BWNodeFileWriterStatusDelegate, BWNodeRenderDelegate, BWPipelineNotificationDelegate, BWPreviewStitcherDelegate, BWRemoteQueueSinkNodeDelegate, BWStillImageCaptureStatusDelegate, BWVideoPIPOverlayDelegate, FigCaptureDisplayLayoutObserver> {
    struct OpaqueFigCaptureSession { } * _captureSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)fileCoordinator:(id)arg1 sentMarkerBufferForFileWriterAction:(id)arg2 withPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 settingsID:(long long)arg4 errorCode:(int)arg5;
- (void)fileCoordinator:(id)arg1 stoppedBeforeStartedRecordingForSettings:(id)arg2 pendingIrisMovieInfos:(id)arg3 errorCode:(int)arg4;
- (void)fileWriter:(id)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(id)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(id)arg1 startedRecordingForSettings:(id)arg2 writerPipelineIndex:(unsigned long long)arg3;
- (void)fileWriter:(id)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingForSettings:(id)arg3 withError:(int)arg4 thumbnailSurface:(struct __IOSurface { }*)arg5 irisMovieInfo:(id)arg6 debugMetadataSidecarFileURL:(id)arg7 recordingSucceeded:(bool)arg8;
- (void)fileWriter:(id)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingSampleDataForSettingsID:(long long)arg3;
- (void)graph:(id)arg1 didFinishStartingWithError:(int)arg2;
- (void)graphDidPrepareNodes:(id)arg1;
- (void)graphDidResolveRetainedBufferCounts:(id)arg1;
- (void)imageQueueSinkNode:(id)arg1 didAttemptToEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 withSuccess:(bool)arg3;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 atHostTime:(long long)arg2;
- (void)layoutMonitor:(id)arg1 didUpdateLayout:(id)arg2;
- (void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3;
- (void)node:(id)arg1 willRenderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 forInput:(id)arg3;
- (void)postNotification:(id)arg1 notificationPayload:(id)arg2;
- (void)previewStitcher:(id)arg1 didApplyWiderShift:(struct CGPoint { double x1; double x2; })arg2 widerScaleFactor:(float)arg3 widerQuadraBinningFactor:(int)arg4 forWiderPortType:(id)arg5 narrowerShift:(struct CGPoint { double x1; double x2; })arg6 narrowerScaleFactor:(float)arg7 narrowerQuadraBinningFactor:(int)arg8 forNarrowerPortType:(id)arg9;
- (void)previewStitcher:(id)arg1 overCaptureStatusDidChange:(int)arg2;
- (void)remoteQueueSinkNode:(id)arg1 localQueueBecameReady:(struct localQueueOpaque { }*)arg2;
- (void)remoteQueueSinkNode:(id)arg1 queueBecameReady:(struct remoteQueueSenderOpaque { }*)arg2;
- (void)stagingNode:(id)arg1 readyToReceiveRequestsWithEarliestAllowedStillImageCaptureHostPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)stagingNode:(id)arg1 valveClosedWithPendingIrisRequests:(id)arg2;
- (void)stagingNode:(id)arg1 waitingToEmitFrameWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)stagingNode:(id)arg1 willEmitIrisRequest:(id)arg2;
- (void)stillImageCoordinator:(id)arg1 didCancelMomentCaptureForSettingsID:(long long)arg2 streamingDisruptionEndPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)stillImageCoordinator:(id)arg1 didCapturePhotoForSettings:(id)arg2;
- (void)stillImageCoordinator:(id)arg1 didResolveStillImagePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 forSettings:(id)arg3 isPreBracketedEV0:(bool)arg4;
- (void)stillImageCoordinator:(id)arg1 didSelectNewReferenceFrameWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 transform:(id)arg3 forSettings:(id)arg4;
- (void)stillImageCoordinator:(id)arg1 readyToRespondToRequestAfterRequestWithSettings:(id)arg2;
- (void)stillImageCoordinator:(id)arg1 willBeginCaptureBeforeResolvingSettingsForID:(long long)arg2;
- (void)stillImageCoordinator:(id)arg1 willBeginCaptureForSettings:(id)arg2;
- (void)stillImageCoordinator:(id)arg1 willCapturePhotoForSettings:(id)arg2 error:(int)arg3;
- (void)stillImageCoordinator:(id)arg1 willPrepareStillImageCaptureWithSettings:(id)arg2 clientInitiated:(bool)arg3;
- (void)videoPIPOverlayNode:(id)arg1 overlayRectDidChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
