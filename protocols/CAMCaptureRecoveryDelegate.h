
@protocol CAMCaptureRecoveryDelegate <NSObject>

@required

- (void)captureController:(CUCaptureController *)arg1 willRecoverFromRuntimeError:(NSError *)arg2;

@end
