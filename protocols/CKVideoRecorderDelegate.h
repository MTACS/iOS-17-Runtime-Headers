
@protocol CKVideoRecorderDelegate <NSObject>

@required

- (void)ckVideoRecorder:(CKVideoRecorder *)arg1 imageDataCaptured:(NSData *)arg2 error:(NSError *)arg3;
- (void)ckVideoRecorder:(CKVideoRecorder *)arg1 videoCaptured:(NSURL *)arg2 error:(NSError *)arg3;
- (void)ckVideoRecorderRecordingCanceled:(CKVideoRecorder *)arg1;

@end
