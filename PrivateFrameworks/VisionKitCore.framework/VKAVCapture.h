
@interface VKAVCapture : NSObject <VKZoomable> {
    AVCaptureConnection * _connection;
    <VKAVCaptureDelegate> * _delegate;
    AVCaptureDevice * _device;
    AVCapturePhotoOutput * _photoOutput;
    bool  _preferBinning;
    unsigned long long  _preparationState;
    NSObject<OS_dispatch_queue> * _queue;
    AVCaptureSession * _session;
    NSDate * _startTime;
    AVCaptureVideoDataOutput * _videoDataOutput;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maxZoomFactor;
@property (nonatomic, readonly) double minZoomFactor;
@property (readonly) Class superclass;
@property (nonatomic) double zoomFactor;

- (void).cxx_destruct;
- (void)_sessionRuntimeError:(id)arg1;
- (void)dealloc;
- (id)init;
- (double)maxZoomFactor;
- (double)minZoomFactor;
- (void)setZoomFactor:(double)arg1;
- (double)zoomFactor;

@end
