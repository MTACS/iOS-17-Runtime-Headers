
@interface AVCaptureOutput : NSObject {
    AVCaptureOutputInternal * _outputInternal;
}

@property (nonatomic, readonly) NSArray *connections;

// Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture

+ (id)allOutputSubclasses;
+ (id)availableVideoCodecTypesForSourceDevice:(id)arg1 sourceFormat:(id)arg2 outputDimensions:(struct { int x1; int x2; })arg3 fileType:(id)arg4 videoCodecTypesAllowList:(id)arg5;
+ (long long)dataDroppedReasonFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
+ (void)initialize;
+ (id)supportedProResCodecTypes;

- (id)_inputForConnection:(id)arg1;
- (id)_recommendedAudioOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 fileType:(id)arg3;
- (id)_recommendedVideoOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodec:(id)arg3 isIris:(bool)arg4 outputFileURL:(id)arg5;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)bumpChangeSeed;
- (bool)canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (int)changeSeed;
- (id)connectionMediaTypes;
- (id)connectionWithMediaType:(id)arg1;
- (id)connections;
- (void)dealloc;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)firstEnabledConnectionForMediaType:(id)arg1;
- (void)getTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 mirroredOut:(bool*)arg2 rollAdjustmentOut:(double*)arg3 forConnection:(id)arg4;
- (void)handleBackgroundBlurActiveChangedForDevice:(id)arg1;
- (void)handleCenterStageActiveChangedForDevice:(id)arg1;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (void)handleReactionEffectsActiveChangedForDevice:(id)arg1;
- (void)handleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)handleStudioLightingActiveChangedForDevice:(id)arg1;
- (bool)hasRequiredOutputFormatForConnection:(id)arg1;
- (id)initSubclass;
- (id)liveConnections;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })outputSizeForSourceFormat:(id)arg1;
- (void)performBlockOnSessionNotifyingThread:(id /* block */)arg1;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)arg1;
- (id)recommendedOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodecType:(id)arg3 fileType:(id)arg4 isIris:(bool)arg5 outputFileURL:(id)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeConnection:(id)arg1;
- (unsigned int)requiredOutputFormatForConnection:(id)arg1;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (void)setSinkID:(id)arg1;
- (id)sinkID;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1 connection:(id)arg2;
- (void)updateMetadataTransformForSourceFormat:(id)arg1;
- (bool)updateVideoSettingsForConnection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)currentRequest;

@end
