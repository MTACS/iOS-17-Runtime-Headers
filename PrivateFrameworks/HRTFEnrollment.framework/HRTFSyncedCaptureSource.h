
@interface HRTFSyncedCaptureSource : NSObject <AVCaptureDataOutputSynchronizerDelegate> {
    AVCaptureSession * _captureSession;
    AVCaptureVideoDataOutput * _colorDataOutput;
    <HRTFSyncedCaptureSourceDelegate> * _delegate;
    AVCaptureDepthDataOutput * _depthDataOutput;
    AVCaptureDeviceFormat * _finalColorFormat;
    AVCaptureDeviceFormat * _finalDepthFormat;
    AVCaptureMetadataOutput * _metadataOutput;
    AVCaptureDataOutputSynchronizer * _outputSynchronizer;
    unsigned int  _preferredColorResolutionX;
    unsigned int  _preferredColorResolutionY;
    unsigned int  _preferredDepthFormat;
    unsigned int  _preferredDepthResolutionX;
    unsigned int  _preferredDepthResolutionY;
    unsigned int  _preferredPixelFormat;
    AVCaptureVideoPreviewLayer * _previewLayer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HRTFSyncedCaptureSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_configureVideoOutputsForDevice:(id)arg1 inSession:(id)arg2;
- (void)_handleCaptureSessionNotification:(id)arg1;
- (bool)_initialize;
- (bool)_verifyCaptureDevice:(id)arg1;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (id)delegate;
- (id)initWithQueue:(id)arg1 options:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg2;
- (void)setDelegate:(id)arg1;
- (void)startCaptureSession;
- (void)stopCaptureSession;

@end
