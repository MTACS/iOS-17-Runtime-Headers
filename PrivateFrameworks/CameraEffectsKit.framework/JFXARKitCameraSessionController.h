
@interface JFXARKitCameraSessionController : NSObject <ARSessionDelegate> {
    ARSession * _arSession;
    NSObject<OS_dispatch_queue> * _arSessionDelegateQueue;
    JFXCustomImageSensor * _customImageSensor;
    ARFaceTrackingConfiguration * _faceTrackingConfiguration;
    <JFXARKitFrameDelegate> * _frameDelegate;
    CMMotionManager * _motionManager;
    ARMotionSensor * _motionSensor;
    ARDeviceOrientationSensor * _orientationSensor;
    bool  _running;
    AVCaptureDevice * _underlyingAVCaptureDevice;
    AVCaptureSession * _underlyingAVCaptureSession;
}

@property (nonatomic, retain) ARSession *arSession;
@property (nonatomic) NSObject<OS_dispatch_queue> *arSessionDelegateQueue;
@property (nonatomic, retain) JFXCustomImageSensor *customImageSensor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ARFaceTrackingConfiguration *faceTrackingConfiguration;
@property (nonatomic) <JFXARKitFrameDelegate> *frameDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CMMotionManager *motionManager;
@property (nonatomic, retain) ARMotionSensor *motionSensor;
@property (nonatomic, retain) ARDeviceOrientationSensor *orientationSensor;
@property (nonatomic) bool running;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVCaptureDevice *underlyingAVCaptureDevice;
@property (nonatomic, retain) AVCaptureSession *underlyingAVCaptureSession;

- (void).cxx_destruct;
- (bool)JT_setupARSession:(id*)arg1;
- (id)arSession;
- (id)arSessionDelegateQueue;
- (id)customImageSensor;
- (void)dealloc;
- (id)faceTrackingConfiguration;
- (id)frameDelegate;
- (id)initWithAVCaptureSession:(id)arg1 captureDevice:(id)arg2 arSessionDelegateQueue:(id)arg3;
- (id)motionManager;
- (id)motionSensor;
- (id)orientationSensor;
- (void)processExternalSensorData:(id)arg1;
- (void)provideSensorFrameSet:(id)arg1 trackedFacesMetadata:(id)arg2 faceObjectsMetadata:(id)arg3;
- (bool)running;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)setArSession:(id)arg1;
- (void)setArSessionDelegateQueue:(id)arg1;
- (void)setCustomImageSensor:(id)arg1;
- (void)setFaceTrackingConfiguration:(id)arg1;
- (void)setFrameDelegate:(id)arg1;
- (void)setMotionManager:(id)arg1;
- (void)setMotionSensor:(id)arg1;
- (void)setOrientationSensor:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setUnderlyingAVCaptureDevice:(id)arg1;
- (void)setUnderlyingAVCaptureSession:(id)arg1;
- (void)startARSession;
- (void)stopARSession;
- (id)underlyingAVCaptureDevice;
- (id)underlyingAVCaptureSession;

@end
