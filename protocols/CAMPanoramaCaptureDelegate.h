
@protocol CAMPanoramaCaptureDelegate <NSObject>

@optional

- (void)panoramaRequest:(CAMPanoramaCaptureRequest *)arg1 didCompleteCaptureWithResult:(CAMStillImageCaptureResult *)arg2;
- (void)panoramaRequest:(CAMPanoramaCaptureRequest *)arg1 didReceiveNotification:(long long)arg2;
- (void)panoramaRequestDidStartCapturing:(CAMPanoramaCaptureRequest *)arg1;
- (void)panoramaRequestDidStopCapturing:(CAMPanoramaCaptureRequest *)arg1 interrupted:(bool)arg2;

@end
