
@interface CIDVRGBCaptureController : NSObject {
    <PADAuditDataRepository> * _audit;
    <CIDVRGBCaptureDelegate> * _captureDelegate;
    CIDVRGBCaptureConfig * _config;
    <CIDVRGBCaptureImageQualityDelegate> * _imageQualityDelegate;
    NSObject<OS_dispatch_queue> * _queue;
    <CIDVRGBCaptureUICoordinator> * _ui;
}

- (void).cxx_destruct;
- (id)_captureResultFromUIResult:(id)arg1;
- (void)_finishUIWithError:(id)arg1;
- (void)_handleResult:(id)arg1 error:(id)arg2;
- (void)_startCaptureUIWithErrorHandler:(id /* block */)arg1 successHandler:(id /* block */)arg2;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)setUi:(id)arg1;
- (void)startLivenessDetectionWithConfig:(id)arg1 captureDelegate:(id)arg2 imageQualityDelegate:(id)arg3;

@end
