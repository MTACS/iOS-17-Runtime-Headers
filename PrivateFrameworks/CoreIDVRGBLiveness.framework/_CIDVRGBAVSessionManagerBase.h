
@interface _CIDVRGBAVSessionManagerBase : NSObject <CIDVRGBAVSessionManager> {
    long long  _orientation;
    AVCaptureSession * _session;
    NSObject<OS_dispatch_queue> * _workQueue;
    <CIDVRGBAVSessionManagerDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CIDVRGBAVSessionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRunning;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) AVCaptureSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_addAVSessionInput:(id)arg1;
- (id)_buildAVCaptureInput;
- (void)_configureOutput:(id)arg1;
- (void)_manageAVSessionNotification:(id)arg1;
- (void)_requestAccessToAVDeviceWithCompletionHandler:(id /* block */)arg1;
- (void)_setupAVSession;
- (void)_startObservingAVSessionNotifications;
- (void)addAVSessionOutput:(id)arg1;
- (id)buildAVSessionCaptureOutputs;
- (void)capturePhotoUsingFlashMode:(long long)arg1;
- (void)configureAVSessionCaptureOutputs;
- (void)dealloc;
- (id)delegate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })getCurrentTimestamp;
- (id)init;
- (void)invalidate;
- (void)invalidateAVSession;
- (bool)isRunning;
- (long long)orientation;
- (void)pauseFileRecording;
- (void)pauseRecording;
- (void)restartFileRecordingWithCompletionHandler:(id /* block */)arg1;
- (void)restartRecordingWithCompletionHandler:(id /* block */)arg1;
- (void)resumeFileRecording;
- (void)resumeRecording;
- (id)session;
- (void)setDelegate:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setup;
- (void)start;
- (void)startAVSession;
- (void)stop;
- (void)stopAVSession;
- (void)stopFileRecording;
- (void)stopRecording;
- (id)workQueue;

@end
