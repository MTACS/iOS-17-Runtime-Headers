
@protocol HRTFEnrollmentSessionDelegate <NSObject>

@required

- (void)didReceiveStateUpdateForSession:(HRTFEnrollmentSession *)arg1 stateInfo:(NSDictionary *)arg2;

@optional

- (void)didReceiveCaptureVideo:(AVCaptureVideoPreviewLayer *)arg1 colorImage:(CIImage *)arg2 depthImage:(CIImage *)arg3 faceObject:(AVMetadataFaceObject *)arg4;

@end
