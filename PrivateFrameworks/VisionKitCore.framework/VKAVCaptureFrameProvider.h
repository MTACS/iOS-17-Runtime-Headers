
@interface VKAVCaptureFrameProvider : VKFrameProvider <AVCapturePhotoCaptureDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, VKAVCaptureDelegate, VKAVCapturePreviewViewDelegate, VKZoomable> {
    VKAVCaptureFrame * __currentFrame;
    VKAVCapture * _avCapture;
    VKAVCapturePreviewView * _avCapturePreviewView;
    AVCaptureDeviceRotationCoordinator * _avDeviceRotationCoordinator;
    CIContext * _ciContext;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _imageToLayerTransform;
    double  _maxZoomFactor;
    double  _minZoomFactor;
    bool  _respondsToDidCapturePhoto;
    bool  _respondsToDidZoom;
    bool  _respondsToIsRunning;
    NSObject<OS_dispatch_queue> * _sampleBufferQueue;
    NSObject<OS_dispatch_queue> * _snapshotQueue;
    bool  _startWhenReady;
    bool  _torchOn;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visionRegionOfInterest;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _visionToCroppedImageTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _visionToLayerTransform;
    double  _zoomFactor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasTorch;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } interestPoint;
@property (nonatomic, readonly) double maxZoomFactor;
@property (nonatomic, readonly) double minZoomFactor;
@property (readonly) Class superclass;
@property (getter=isTorchOn, nonatomic) bool torchOn;
@property (nonatomic) double zoomFactor;

- (void).cxx_destruct;
- (void)avCapture:(id)arg1 cameraAccessGranted:(bool)arg2;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)capturePhoto;
- (void)dealloc;
- (void)didChangeBoundsForPreviewView:(id)arg1;
- (bool)hasTorch;
- (id)initWithConfiguration:(id)arg1;
- (struct CGPoint { double x1; double x2; })interestPoint;
- (bool)isRunning;
- (bool)isTorchOn;
- (double)maxZoomFactor;
- (double)minZoomFactor;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepare;
- (id)previewView;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setInterestPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTorchOn:(bool)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)snapshotWithCompletion:(id /* block */)arg1;
- (void)startRunning;
- (void)stopRunning;
- (double)zoomFactor;

@end
