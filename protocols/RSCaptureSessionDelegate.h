
@protocol RSCaptureSessionDelegate <NSObject>

@optional

- (void)session:(RSCaptureSession *)arg1 didFailWithError:(long long)arg2;
- (void)session:(RSCaptureSession *)arg1 didUpdateAsset:(RSAsset *)arg2;
- (void)session:(RSCaptureSession *)arg1 didUpdateFloorPlan:(RSFloorPlan *)arg2;
- (void)session:(RSCaptureSession *)arg1 didUpdateMarkerCoaching:(RSMarkerSignal *)arg2;
- (void)session:(RSCaptureSession *)arg1 didUpdateTextCoaching:(RSTextCoachingSignal *)arg2;

@end
