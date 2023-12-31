
@protocol CAMAvailabilityDelegate <NSObject>

@required

- (void)captureController:(CUCaptureController *)arg1 didOutputCaptureAvailability:(bool)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputConfigurationAvailability:(bool)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputFlashAvailability:(bool)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputFlashCompromise:(unsigned long long)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputTorchAvailability:(bool)arg2;

@end
