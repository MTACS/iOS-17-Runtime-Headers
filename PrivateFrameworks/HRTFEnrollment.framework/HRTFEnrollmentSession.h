
@interface HRTFEnrollmentSession : NSObject <HRTFEnrollmentNotificationProtocol, HRTFSyncedCaptureSourceDelegate, RecordingManagerDelegate> {
    AVCaptureVideoDataOutput * _colorDataOutput;
    NSXPCConnection * _connection;
    <HRTFEnrollmentSessionDelegate> * _delegate;
    AVCaptureDevice * _device;
    AVCaptureDeviceFormat * _finalColorFormat;
    AVCaptureDeviceFormat * _finalDepthFormat;
    union _SessionFlags { 
        unsigned int started : 1; 
        unsigned int cameraCaptureRequested : 1; 
        unsigned int startRequested : 1; 
        unsigned int reserved : 29; 
        unsigned int u32; 
    }  _flags;
    HRTFSyncedCaptureSource * _outputSource;
    bool  _paused;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredColorResolution;
    unsigned int  _preferredDepthFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredDepthResolution;
    unsigned int  _preferredPixelFormat;
    NSObject<OS_dispatch_queue> * _queue;
    RecordingManager * _recordingManager;
    unsigned long long  _resultSize;
    id /* block */  _sessionStartCallback;
    NSDictionary * _stateInfo;
    bool  _videoCaptureEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HRTFEnrollmentSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long resultSize;
@property (readonly) NSDictionary *stateInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_verifyCaptureDevice:(id)arg1;
- (void)assetDownloadSessionProgressUpdate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveVideoData:(id)arg1 colorData:(id)arg2 depthData:(id)arg3 faceObject:(id)arg4;
- (void)didStartCaptureSessionWithError:(id)arg1;
- (id)getMovFileName;
- (id)getRecordingFolder;
- (id)getRecordingURL;
- (id)init;
- (void)initializeDevice;
- (void)pauseSession;
- (void)requestResultDataAtOffset:(unsigned long long)arg1 forLength:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (unsigned long long)resultSize;
- (void)resumeSession;
- (void)sessionStarted:(bool)arg1 error:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)startSession:(bool)arg1 then:(id /* block */)arg2;
- (id)stateInfo;
- (void)stopSession:(id /* block */)arg1;
- (void)updateResultSize:(unsigned long long)arg1;
- (void)updateState:(unsigned long long)arg1 withProgress:(float)arg2 facePoseStatus:(id)arg3 earPoseStatus:(id)arg4 errorStatus:(id)arg5;

@end
