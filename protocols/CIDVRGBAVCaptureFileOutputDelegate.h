
@protocol CIDVRGBAVCaptureFileOutputDelegate <NSObject>

@required

- (void)captureOutput:(CIDVRGBAVCaptureFileOutput *)arg1 didFinishRecordingAtURL:(NSURL *)arg2 error:(NSError *)arg3;

@end
