
@interface VCAudioRelay : NSObject <VCBasebandCodecNotifications> {
    double  _IOBufferDuration;
    unsigned int  _blocksRelayedCount;
    float  _clientDownlinkPowerMovingAverage;
    VCAudioRelayIO * _clientIO;
    struct tagVCAudioRelayIOInfo { 
        VCAudioRelayIO *relayIO; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } lock; 
        NSString *ioFriendlyName; 
        NSString *audioRecordingFileName; 
    }  _clientIOInfo;
    struct OpaqueAudioConverter { } * _clientToRemoteConverter;
    float  _clientUplinkPowerMovingAverage;
    bool  _isRelayRunning;
    unsigned long long  _nextWakeUpHostMachTime;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _nextWakeUpInterval;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _nextWakeUpTime;
    NSObject<OS_dispatch_source> * _periodicHealthPrintDispatchSource;
    void * _ptpClock;
    unsigned short  _ptpClockLocalPort;
    unsigned long long  _ptpGMIdentity;
    unsigned long long  _ptpWakeUpTime;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _relayLock;
    struct OpaqueFigThread { } * _relayThread;
    struct _VCRemoteCodecInfo { 
        unsigned int codecType; 
        double sampleRate; 
    }  _remoteCodecInfo;
    VCAudioRelayIO * _remoteIO;
    struct tagVCAudioRelayIOInfo { 
        VCAudioRelayIO *relayIO; 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } lock; 
        NSString *ioFriendlyName; 
        NSString *audioRecordingFileName; 
    }  _remoteIOInfo;
    struct OpaqueAudioConverter { } * _remoteToClientConverter;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _wakeUpCondition;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _wakeUpMutex;
}

@property (readonly) double IOBufferDuration;
@property (readonly) unsigned int blocksRelayedCount;
@property (readonly) float clientDownlinkPowerMovingAverage;
@property (nonatomic, copy) VCAudioRelayIO *clientIO;
@property (readonly) struct OpaqueAudioConverter { }*clientToRemoteConverter;
@property (readonly) float clientUplinkPowerMovingAverage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isRelayRunning;
@property (readonly) NSObject<OS_dispatch_source> *periodicHealthPrintDispatchSource;
@property (nonatomic, copy) VCAudioRelayIO *remoteIO;
@property (readonly) struct OpaqueAudioConverter { }*remoteToClientConverter;
@property (readonly) Class superclass;

- (double)IOBufferDuration;
- (unsigned int)blocksRelayedCount;
- (bool)canSetPropertyWithError:(id*)arg1;
- (float)clientDownlinkPowerMovingAverage;
- (id)clientIO;
- (struct OpaqueAudioConverter { }*)clientToRemoteConverter;
- (float)clientUplinkPowerMovingAverage;
- (bool)createAudioConvertersWithError:(id*)arg1;
- (void)dealloc;
- (void)destroyAudioConverters;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg1;
- (void)forwardSamplesFromIO:(id)arg1 toIO:(id)arg2 withConverter:(struct OpaqueAudioConverter { }*)arg3 withHostTime:(double)arg4;
- (id)init;
- (void)internalStopRelayThread;
- (double)ioBufferDurationWithFirstIO:(id)arg1 secondIO:(id)arg2;
- (bool)isRelayRunning;
- (void)lock;
- (struct OpaqueAudioConverter { }*)newAudioConverterWithInputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 outputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg2 withError:(id*)arg3;
- (id)periodicHealthPrintDispatchSource;
- (void)printStreamFormats;
- (void)relayCallback;
- (void)relayProcessSamples;
- (void)releasePTPClock;
- (id)remoteIO;
- (struct OpaqueAudioConverter { }*)remoteToClientConverter;
- (float)rmsPowerOfBuffer:(float*)arg1 numSamples:(unsigned int)arg2;
- (void)setClientIO:(id)arg1;
- (bool)setClientIO:(id)arg1 withError:(id*)arg2;
- (bool)setIOBufferDuration:(double)arg1 withError:(id*)arg2;
- (bool)setNetworkClockID:(unsigned long long)arg1 withError:(id*)arg2;
- (void)setRemoteIO:(id)arg1;
- (bool)setRemoteIO:(id)arg1 withError:(id*)arg2;
- (void)sleepForTime:(struct timespec { long long x1; long long x2; }*)arg1;
- (bool)startClientIO;
- (void)startPeriodicHealthPrint;
- (bool)startRelayIO:(struct tagVCAudioRelayIOInfo { id x1; struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; id x3; id x4; }*)arg1 otherRelayIO:(struct tagVCAudioRelayIOInfo { id x1; struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; id x3; id x4; }*)arg2;
- (bool)startRelayThreadWithError:(id*)arg1;
- (bool)startRemoteIO;
- (void)stopClientIO;
- (void)stopRelayIO:(struct tagVCAudioRelayIOInfo { id x1; struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; id x3; id x4; }*)arg1 otherRelayIO:(struct tagVCAudioRelayIOInfo { id x1; struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; id x3; id x4; }*)arg2;
- (void)stopRelayThread;
- (void)stopRemoteIO;
- (void)unlock;
- (void)updateRealTimeStats;
- (void)updateRemoteCodecInfo:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg1;

@end
