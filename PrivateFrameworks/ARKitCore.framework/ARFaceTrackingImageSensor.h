
@interface ARFaceTrackingImageSensor : ARImageSensor <AVCaptureMetadataOutputObjectsDelegate> {
    NSArray * _availableMetadataObjectTypes;
    AVCaptureConnection * _depthConnection;
    AVCaptureDepthDataOutput * _depthDataOutput;
    unsigned long long  _droppedFramesPerSec;
    NSObject<OS_dispatch_semaphore> * _faceDataSemaphore;
    ARFaceData * _latestFaceData;
    AVCaptureMetadataOutput * _metaDataOutput;
    AVCaptureConnection * _metadataConnection;
    bool  _previousImageDataValid;
    bool  _recordingMode;
    bool  _signpostFirstFaceDone;
    bool  _signpostFirstFrameDone;
    double  _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool recordingMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_configureMetaDataOutput;
- (long long)_videoOrientation;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)capturedSynchedOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromVideoConnection:(id)arg3 metaDataOutput:(id)arg4 didOutputMetadataObjects:(id)arg5 didOutputDepthData:(id)arg6 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7;
- (void)configureCaptureDevice;
- (id)configureCaptureSession;
- (id)configureCaptureSessionCalibration;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 captureSession:(id)arg2 captureQueue:(id)arg3;
- (id)outputsForSynchronizer;
- (id)prepareToStart;
- (unsigned long long)providedDataTypes;
- (void)reconfigure:(id)arg1;
- (bool)recordingMode;
- (void)setRecordingMode:(bool)arg1;
- (void)stop;

@end
