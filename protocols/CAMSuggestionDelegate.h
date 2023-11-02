
@protocol CAMSuggestionDelegate <NSObject>

@required

- (void)captureController:(CUCaptureController *)arg1 didChangeAutoMacroActive:(bool)arg2;
- (void)captureController:(CUCaptureController *)arg1 didChangeAutoMacroSuggested:(bool)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputFlashActive:(bool)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputHDRSuggestion:(bool)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputLowLightModeDurationMapping:(struct { double x1; double x2; })arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputLowLightStatus:(long long)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputTorchActive:(bool)arg2;

@end
