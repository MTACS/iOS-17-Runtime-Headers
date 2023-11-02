
@interface VCAudioIO : NSObject <VCAudioIOControllerDelegate> {
    <VCAudioIOControllerControl> * _audioIOController;
    unsigned int  _audioType;
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
    }  _clientFormat;
    VCAudioIOControllerClient * _controllerClient;
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
    }  _controllerFormat;
    id  _delegate;
    bool  _isControllerAudioFormatValid;
    bool  _isControllerReset;
    bool  _isGKVoiceChat;
    bool  _isMuted;
    struct _VCAudioEndpointData { 
        struct SoundDec_t {} *converter; 
        bool isConverterNeeded; 
        bool isAccumulatorNeeded; 
        unsigned int samplesPerFrame; 
        struct opaqueVCAudioBufferList {} *sampleBuffer; 
        struct opaqueVCAudioBufferList {} *clientBuffer; 
        struct opaqueVCAudioBufferList {} *controllerBuffer; 
        bool isLastHostTimeValid; 
        double lastHostTime; 
        unsigned int lastTimestamp; 
        unsigned int timestampOffset; 
        bool controllerChanged; 
        bool isMuted; 
        unsigned int framesProcessed; 
        struct tagVCAudioIODelegateContext { 
            <VCAudioIOSink><VCAudioIOSource> *delegate; 
            int (*clientCallback)(); 
            void *clientContext; 
            VCAudioCaptionsCoordinator *captionsCoordinator; 
            long long streamToken; 
            VCCannedAudioInjector *injector; 
        } delegateContext; 
    }  _sinkData;
    id  _sinkDelegate;
    struct _VCAudioEndpointData { 
        struct SoundDec_t {} *converter; 
        bool isConverterNeeded; 
        bool isAccumulatorNeeded; 
        unsigned int samplesPerFrame; 
        struct opaqueVCAudioBufferList {} *sampleBuffer; 
        struct opaqueVCAudioBufferList {} *clientBuffer; 
        struct opaqueVCAudioBufferList {} *controllerBuffer; 
        bool isLastHostTimeValid; 
        double lastHostTime; 
        unsigned int lastTimestamp; 
        unsigned int timestampOffset; 
        bool controllerChanged; 
        bool isMuted; 
        unsigned int framesProcessed; 
        struct tagVCAudioIODelegateContext { 
            <VCAudioIOSink><VCAudioIOSource> *delegate; 
            int (*clientCallback)(); 
            void *clientContext; 
            VCAudioCaptionsCoordinator *captionsCoordinator; 
            long long streamToken; 
            VCCannedAudioInjector *injector; 
        } delegateContext; 
    }  _sourceData;
    id  _sourceDelegate;
    id /* block */  _startCompletionBlock;
    unsigned int  _state;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _stateMutex;
    id /* block */  _stopCompletionBlock;
}

@property (nonatomic, readonly) const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*clientFormat;
@property (nonatomic, readonly) const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*controllerFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char direction;
@property (readonly) unsigned long long hash;
@property (getter=isInputMeteringEnabled, nonatomic) bool inputMeteringEnabled;
@property (nonatomic) bool isGKVoiceChat;
@property (getter=isMuted, nonatomic) bool muted;
@property (getter=isOutputMeteringEnabled, nonatomic) bool outputMeteringEnabled;
@property (nonatomic, readonly) unsigned int pullAudioSamplesCount;
@property (nonatomic, readonly) NSDictionary *reportingStats;
@property (nonatomic) bool spatialAudioDisabled;
@property (nonatomic, readonly) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsVoiceActivityDetection;

+ (id)controllerForDeviceRole:(int)arg1 audioType:(unsigned int)arg2 direction:(unsigned char)arg3 operatingMode:(int)arg4 streamInputID:(long long)arg5 streamToken:(long long)arg6 networkClockID:(unsigned long long)arg7;
+ (id)defaultControllerForAudioType:(unsigned int)arg1 forDirection:(unsigned char)arg2 forOperatingMode:(int)arg3;

- (void)cleanUpRealtimeDelegatesAndContext:(bool)arg1;
- (const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)clientFormat;
- (const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)controllerFormat;
- (void)controllerFormatChanged:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)arg1;
- (bool)createConverterForSource:(bool)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)destroyBuffers;
- (void)didResume;
- (void)didStart:(bool)arg1 error:(id)arg2;
- (void)didStop:(bool)arg1 error:(id)arg2;
- (void)didSuspend;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg1;
- (unsigned char)direction;
- (void)forceCleanup;
- (id)initWithConfiguration:(const struct tagVCAudioIOConfiguration { unsigned int x1; unsigned int x2; int x3; int x4; unsigned int x5; unsigned char x6; bool x7; id x8; int x9; unsigned int x10; unsigned int x11; bool x12; unsigned long long x13; unsigned int x14; long long x15; long long x16; unsigned long long x17; bool x18; bool x19; struct tagVCAudioIODelegateContext { id x_20_1_1; int (*x_20_1_2)(); void *x_20_1_3; id x_20_1_4; long long x_20_1_5; id x_20_1_6; } x20; struct tagVCAudioIODelegateContext { id x_21_1_1; int (*x_21_1_2)(); void *x_21_1_3; id x_21_1_4; long long x_21_1_5; id x_21_1_6; } x21; }*)arg1;
- (bool)isGKVoiceChat;
- (bool)isInputMeteringEnabled;
- (bool)isMuted;
- (bool)isOutputMeteringEnabled;
- (int)operatingMode;
- (unsigned int)pullAudioSamplesCount;
- (bool)reconfigureWithConfig:(const struct tagVCAudioIOConfiguration { unsigned int x1; unsigned int x2; int x3; int x4; unsigned int x5; unsigned char x6; bool x7; id x8; int x9; unsigned int x10; unsigned int x11; bool x12; unsigned long long x13; unsigned int x14; long long x15; long long x16; unsigned long long x17; bool x18; bool x19; struct tagVCAudioIODelegateContext { id x_20_1_1; int (*x_20_1_2)(); void *x_20_1_3; id x_20_1_4; long long x_20_1_5; id x_20_1_6; } x20; struct tagVCAudioIODelegateContext { id x_21_1_1; int (*x_21_1_2)(); void *x_21_1_3; id x_21_1_4; long long x_21_1_5; id x_21_1_6; } x21; }*)arg1;
- (void)releaseConverters;
- (id)reportingStats;
- (void)serverDidDie;
- (void)setClientFormat:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)arg1;
- (void)setDirection:(unsigned char)arg1;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; }*)arg1;
- (void)setInputMeteringEnabled:(bool)arg1;
- (void)setIsGKVoiceChat:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setOutputMeteringEnabled:(bool)arg1;
- (void)setRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (void)setSpatialAudioDisabled:(bool)arg1;
- (void)setUpAndTransferDelegateContext:(const struct tagVCAudioIODelegateContext { id x1; int (*x2)(); void *x3; id x4; long long x5; id x6; }*)arg1 toDestinationContext:(struct tagVCAudioIODelegateContext { id x1; int (*x2)(); void *x3; id x4; long long x5; id x6; }*)arg2;
- (void)setupClientFormatWithConfiguration:(const struct tagVCAudioIOConfiguration { unsigned int x1; unsigned int x2; int x3; int x4; unsigned int x5; unsigned char x6; bool x7; id x8; int x9; unsigned int x10; unsigned int x11; bool x12; unsigned long long x13; unsigned int x14; long long x15; long long x16; unsigned long long x17; bool x18; bool x19; struct tagVCAudioIODelegateContext { id x_20_1_1; int (*x_20_1_2)(); void *x_20_1_3; id x_20_1_4; long long x_20_1_5; id x_20_1_6; } x20; struct tagVCAudioIODelegateContext { id x_21_1_1; int (*x_21_1_2)(); void *x_21_1_3; id x_21_1_4; long long x_21_1_5; id x_21_1_6; } x21; }*)arg1;
- (bool)spatialAudioDisabled;
- (id)start;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (unsigned int)state;
- (id)stop;
- (void)stopWithCompletionHandler:(id /* block */)arg1;
- (id)stopWithCompletionHandlerInternal:(id /* block */)arg1;
- (bool)supportsVoiceActivityDetection;
- (void)updateVoiceActivityEnabled:(bool)arg1 isMediaPriorityEnabled:(bool)arg2;

@end
