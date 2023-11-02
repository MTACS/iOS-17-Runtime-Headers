
@protocol ICDocCamDebugMovieControllerDelegate <NSObject>

@required

- (void)changeRecordButtonTitle:(NSString *)arg1;
- (void)enableRecordButton:(bool)arg1;
- (void)enableUIElementsForMovieRecording:(bool)arg1;
- (void)pauseCaptureSessionForMovieRecording;
- (void)resumeCaptureSessionForMovieRecording;
- (void)showErrorForMovieRecording:(NSError *)arg1;
- (long long)statusBarOrientation;
- (AVCaptureVideoPreviewLayer *)videoPreviewLayer;

@end
