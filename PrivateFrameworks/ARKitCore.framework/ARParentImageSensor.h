
@interface ARParentImageSensor : NSObject <ARImageSensorDataSource, ARSensor, AVCaptureAudioDataOutputSampleBufferDelegate> {
    AVCaptureConnection * _audioConnection;
    AVCaptureDeviceInput * _audioInput;
    AVCaptureAudioDataOutput * _audioOutput;
    ARBufferPopulationMonitor * _bufferPopulationMonitor;
    NSObject<OS_dispatch_queue> * _captureQueue;
    AVCaptureSession * _captureSession;
    NSObject<OS_dispatch_queue> * _captureSessionNotificationsQueue;
    <ARSensorDelegate> * _delegate;
    bool  _interrupted;
    unsigned long long  _powerUsage;
    bool  _recordingMode;
    bool  _running;
    NSMutableArray * _sensors;
    ARParentImageSensorSettings * _settings;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    bool  _unrecoverable;
}

@property (nonatomic, readonly) AVCaptureConnection *audioConnection;
@property (nonatomic, readonly) AVCaptureDeviceInput *audioInput;
@property (nonatomic, readonly) AVCaptureAudioDataOutput *audioOutput;
@property (nonatomic, readonly) AVCaptureSession *captureSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interrupted;
@property (nonatomic) unsigned long long powerUsage;
@property (nonatomic) bool recordingMode;
@property (nonatomic) bool running;
@property (nonatomic, retain) NSMutableArray *sensors;
@property (nonatomic, readonly, copy) ARParentImageSensorSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic) bool unrecoverable;

- (void).cxx_destruct;
- (bool)_addSensorForSettings:(id)arg1;
- (void)_addSensors;
- (void)_captureSessionStateChanged:(id)arg1;
- (void)_configureAudioCapture;
- (bool)_startWithError:(out id*)arg1;
- (bool)_validateCameraAuthorization;
- (bool)_validateMicrophoneAuthorizationWithError:(out id*)arg1;
- (id)audioConnection;
- (id)audioInput;
- (id)audioOutput;
- (bool)canReconfigure:(id)arg1;
- (id)captureDeviceTypeToExtrinsicsMapForImageSensor:(id)arg1;
- (void)captureHighResolutionFrameWithPhotoSettings:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)captureSession;
- (void)captureSessionStateChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)forceUpdatePowerUsage:(unsigned long long)arg1;
- (id)initWithSettings:(id)arg1;
- (bool)interrupted;
- (unsigned long long)powerUsage;
- (unsigned long long)providedDataTypes;
- (void)reconfigure:(id)arg1;
- (bool)recordingMode;
- (bool)running;
- (id)sensors;
- (void)setDelegate:(id)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)setRecordingMode:(bool)arg1;
- (void)setRunning:(bool)arg1;
- (void)setSensors:(id)arg1;
- (void)setUnrecoverable:(bool)arg1;
- (id)settings;
- (void)start;
- (void)stop;
- (void)teardown;
- (bool)unrecoverable;
- (void)waitForOutstandingCallbacks;

@end
