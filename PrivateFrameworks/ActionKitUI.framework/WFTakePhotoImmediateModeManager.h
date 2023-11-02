
@interface WFTakePhotoImmediateModeManager : NSObject <AVCapturePhotoCaptureDelegate> {
    <WFTakePhotoImmediateModeDelegate> * _delegate;
    AVCapturePhotoOutput * _output;
    long long  _position;
    AVCaptureSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFTakePhotoImmediateModeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVCapturePhotoOutput *output;
@property (nonatomic) long long position;
@property (nonatomic, retain) AVCaptureSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cameraIsReady:(id)arg1;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (id)captureSessionWithDevice:(id)arg1 output:(id)arg2 error:(id*)arg3;
- (id)configuredCaptureDeviceWithError:(id*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithCameraPosition:(long long)arg1 delegate:(id)arg2;
- (id)output;
- (long long)position;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)setOutput:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)setSession:(id)arg1;
- (void)startSessionWithError:(id*)arg1;
- (void)stop;
- (void)takePhotoWithError:(id*)arg1;

@end
