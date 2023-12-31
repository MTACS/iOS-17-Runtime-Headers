
@protocol AVCaptureFileOutputRecordingDelegate <NSObject>

@required

- (void)captureOutput:(AVCaptureFileOutput *)arg1 didFinishRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3 error:(NSError *)arg4;

@optional

- (void)captureOutput:(AVCaptureFileOutput *)arg1 didPauseRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3;
- (void)captureOutput:(AVCaptureFileOutput *)arg1 didResumeRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3;
- (void)captureOutput:(AVCaptureFileOutput *)arg1 didStartRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3;
- (void)captureOutput:(AVCaptureFileOutput *)arg1 willFinishRecordingToOutputFileAtURL:(NSURL *)arg2 fromConnections:(NSArray *)arg3 error:(NSError *)arg4;

@end
