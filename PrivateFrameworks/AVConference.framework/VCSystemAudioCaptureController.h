
@interface VCSystemAudioCaptureController : VCObject <VCAudioIOControllerControl> {
    AVAudioSession * _avAudioSession;
    VCAudioIOControllerClient * _client;
    struct tagVCSystemAudioCaptureControllerConfig { 
        struct tagVCSystemAudioCaptureTapSettings { 
            unsigned int tapType; 
            union { 
                int audioProcessIdToTap; 
                unsigned int sessionTypeToTap; 
            } ; 
            struct __CFString {} *captureContext; 
            unsigned int source; 
        } tapSettings; 
    }  _configuration;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _running;
    bool  _useScreenCaptureKitForAudio;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *reportingStats;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsVoiceActivityDetection;

+ (id)captureServerConfigForAudioConfig:(struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x_1_1_1; union { int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; struct __CFString {} *x_1_1_3; unsigned int x_1_1_4; } x1; }*)arg1 forClient:(id)arg2;
+ (int)captureSourceForSystemAudioCaptureControllerConfig:(struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x_1_1_1; union { int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; struct __CFString {} *x_1_1_3; unsigned int x_1_1_4; } x1; }*)arg1;
+ (int)captureSourceForTypePreSpatialSessionType:(unsigned int)arg1;
+ (int)captureSourceForTypeProcessID:(int)arg1;
+ (bool)isValidConfiguration:(const struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x_1_1_1; union { int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; struct __CFString {} *x_1_1_3; unsigned int x_1_1_4; } x1; }*)arg1;

- (void)dealloc;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg1;
- (id)dispatchQueueNameWithConfig:(const struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x_1_1_1; union { int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; struct __CFString {} *x_1_1_3; unsigned int x_1_1_4; } x1; }*)arg1;
- (void)handleAudioSessionMediaServicesWereResetNotification:(id)arg1;
- (id)init;
- (id)initWithConfig:(const struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x_1_1_1; union { int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; struct __CFString {} *x_1_1_3; unsigned int x_1_1_4; } x1; }*)arg1;
- (void)setupLogPrefixWithConfig:(const struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x_1_1_1; union { int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; struct __CFString {} *x_1_1_3; unsigned int x_1_1_4; } x1; }*)arg1;
- (void)startClient:(id)arg1;
- (void)stopClient:(id)arg1;
- (bool)supportsVoiceActivityDetection;
- (void)updateClient:(id)arg1 settings:(const struct tagVCAudioIOControllerClientSettings { unsigned char x1; bool x2; bool x3; bool x4; }*)arg2;

@end
