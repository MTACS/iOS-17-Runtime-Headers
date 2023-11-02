
@protocol CIDVRGBAVSessionManager <NSObject>

@required

- (void)capturePhotoUsingFlashMode:(long long)arg1;
- (<CIDVRGBAVSessionManagerDelegate> *)delegate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })getCurrentTimestamp;
- (void)invalidate;
- (long long)orientation;
- (void)pauseRecording;
- (void)restartRecordingWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)resumeRecording;
- (AVCaptureSession *)session;
- (void)setDelegate:(id <CIDVRGBAVSessionManagerDelegate>)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setup;
- (void)start;
- (void)stop;
- (void)stopRecording;

@end
