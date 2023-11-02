
@protocol CAMExposureDelegate <NSObject>

@required

- (float)baselineExposureValueForCaptureController:(CUCaptureController *)arg1;
- (void)captureController:(CUCaptureController *)arg1 didOutputExposureResult:(CAMExposureResult *)arg2;

@optional

- (bool)captureControllerUserHasAdjustedExposureTargetBiasFromBaseline:(CUCaptureController *)arg1;

@end
