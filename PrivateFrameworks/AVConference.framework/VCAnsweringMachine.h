
@interface VCAnsweringMachine : VCMediaDevice <VCAudioIODelegate, VCMediaRecorderDelegate, VCMediaRecorderTransportDelegate> {
    VCAudioIO * _audioIO;
    AVCAnsweringMachineConfiguration * _configuration;
    <VCAnsweringMachineDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    int  _deviceRole;
    bool  _didInvalidate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct tagVCAudioFrameFormat { 
        struct AudioStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } format; 
        unsigned int samplesPerFrame; 
    }  _internalFormat;
    struct tagVCAnsweringMachineRealtimeContext { 
        VCCannedAudioInjector *announcementAssetInjector; 
        unsigned int blockCounter; 
        unsigned int blocksToDelay; 
        struct tagVCAnsweringMachineCommonRealtimeContext { 
            unsigned char flags; 
            unsigned int latestTimestamp; 
            float averageAudioPower; 
        } sourceCommonContext; 
        VCAudioCaptionsCoordinator *captionsCoordinator; 
        struct tagVCAnsweringMachineCommonRealtimeContext { 
            unsigned char flags; 
            unsigned int latestTimestamp; 
            float averageAudioPower; 
        } sinkCommonContext; 
        VCMediaRecorder *mediaRecorder; 
        NSString *mediaRecorderRequesterID; 
        NSString *mediaRecorderTransactionID; 
        long long audioToken; 
    }  _realtimeContext;
    NSURL * _recordingURL;
    int  _reportingModuleID;
    bool  _stopIsAsync;
    NSString * _uuid;
}

@property (nonatomic, readonly) AVCAnsweringMachineConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long messageAudioToken;
@property (nonatomic, readonly) NSURL *recordingURL;
@property (readonly) Class superclass;

+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting { }*)arg3;

- (bool)autoRunOnStart;
- (void)cleanupAnnouncementAssetInjection;
- (void)cleanupCaptionsCoordinator;
- (void)cleanupMediaRecorder;
- (void)cleanupPeriodicReporting;
- (void)cleanupRealtimeContext;
- (struct __CFDictionary { }*)clientSpecificUserInfo;
- (id)configuration;
- (bool)configureAudioIO;
- (void)dealloc;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })defaultAudioFormat;
- (struct tagVCAudioIOConfiguration { unsigned int x1; unsigned int x2; int x3; int x4; unsigned int x5; unsigned char x6; bool x7; id x8; int x9; unsigned int x10; unsigned int x11; bool x12; unsigned long long x13; unsigned int x14; long long x15; long long x16; unsigned long long x17; bool x18; bool x19; struct tagVCAudioIODelegateContext { id x_20_1_1; int (*x_20_1_2)(); void *x_20_1_3; id x_20_1_4; long long x_20_1_5; id x_20_1_6; } x20; struct tagVCAudioIODelegateContext { id x_21_1_1; int (*x_21_1_2)(); void *x_21_1_3; id x_21_1_4; long long x_21_1_5; id x_21_1_6; } x21; })defaultAudioIOConfiguration;
- (int)deviceRoleForCallSource:(unsigned char)arg1;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)invalidate;
- (void)mediaRecorder:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3;
- (long long)messageAudioToken;
- (id)newInjectorConfigurationForAnnouncementAsset:(id)arg1;
- (id)onStart;
- (id)onStop;
- (id)recordingURL;
- (struct __CFDictionary { }*)reportingInitialConfiguration;
- (void)serverDidDie;
- (bool)setUpAnnouncementAssetInjection;
- (bool)setUpConfigurationIndependentInternalState;
- (bool)setUpInternalStateWithConfiguration:(id)arg1;
- (void)setUpRealtimeDefaults;
- (bool)setupCaptionsCoordinator;
- (void)setupInternalFormat;
- (bool)setupMediaRecorder;
- (void)setupPeriodicReporting;
- (bool)setupRealtimeContextWithToken:(long long)arg1;
- (bool)setupReportingAgentWithCallID:(unsigned int)arg1;
- (id)start;
- (id)stop;
- (void)stopMediaRecording;
- (void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 stillImageURL:(id)arg3 movieURL:(id)arg4 error:(id)arg5;
- (void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(bool)arg3;
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;
- (void)streamToken:(long long)arg1 didUpdateCapabilities:(unsigned int)arg2;
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;

@end
