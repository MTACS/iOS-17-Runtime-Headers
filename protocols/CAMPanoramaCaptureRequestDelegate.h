
@protocol CAMPanoramaCaptureRequestDelegate <NSObject>

@optional

- (void)panoramaRequest:(CAMPanoramaCaptureRequest *)arg1 didGeneratePaintingStatus:(CAMPanoramaPaintingStatus *)arg2;
- (void)panoramaRequestDidCompleteCapture:(CAMPanoramaCaptureRequest *)arg1 withResponse:(CAMStillImageCaptureResponse *)arg2 error:(NSError *)arg3;
- (void)panoramaRequestDidCompleteLocalPersistence:(CAMPanoramaCaptureRequest *)arg1 withResponse:(CAMStillImagePersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)panoramaRequestDidCompleteRemotePersistence:(CAMPanoramaCaptureRequest *)arg1 withResponse:(CAMStillImagePersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)panoramaRequestDidStartCapturing:(CAMPanoramaCaptureRequest *)arg1;
- (void)panoramaRequestDidStopCapturing:(CAMPanoramaCaptureRequest *)arg1 interrupted:(bool)arg2;

@end
