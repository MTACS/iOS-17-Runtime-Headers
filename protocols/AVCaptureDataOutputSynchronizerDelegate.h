
@protocol AVCaptureDataOutputSynchronizerDelegate <NSObject>

@required

- (void)dataOutputSynchronizer:(AVCaptureDataOutputSynchronizer *)arg1 didOutputSynchronizedDataCollection:(AVCaptureSynchronizedDataCollection *)arg2;

@end
