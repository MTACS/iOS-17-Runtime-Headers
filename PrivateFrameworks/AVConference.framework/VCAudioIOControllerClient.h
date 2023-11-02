
@interface VCAudioIOControllerClient : NSObject {
    bool  _allowAudioRecording;
    unsigned int  _audioSessionId;
    unsigned int  _channelIndex;
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
    int  _clientPid;
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
    int  _deviceRole;
    unsigned char  _direction;
    struct VoiceIOFarEndVersionInfo { 
        unsigned char farEndHwModel[64]; 
        unsigned char farEndOSVersion[64]; 
        unsigned int farEndAUVersion; 
    }  _farEndVersionInfo;
    bool  _isInputMeteringEnabled;
    bool  _isOutputMeteringEnabled;
    bool  _isPrewarmingClient;
    bool  _isRemoteCodecInfoValid;
    bool  _isRemoteVersionInfoValid;
    int  _operatingMode;
    double  _remoteCodecSampleRate;
    unsigned int  _remoteCodecType;
    struct _VCAudioIOControllerClientIO { 
        void *processSamplesContext; 
        int (*processSamples)(); 
        NSObject<OS_dispatch_semaphore> *runLock; 
        unsigned int audioSessionId; 
        unsigned int channelIndex; 
        unsigned int channelCount; 
        struct opaqueVCAudioBufferList {} *controllerAudioBuffer; 
        bool isVoiceActivityEnabled; 
        bool isMediaPriorityEnabled; 
    }  _sinkIO;
    struct _VCAudioIOControllerClientIO { 
        void *processSamplesContext; 
        int (*processSamples)(); 
        NSObject<OS_dispatch_semaphore> *runLock; 
        unsigned int audioSessionId; 
        unsigned int channelIndex; 
        unsigned int channelCount; 
        struct opaqueVCAudioBufferList {} *controllerAudioBuffer; 
        bool isVoiceActivityEnabled; 
        bool isMediaPriorityEnabled; 
    }  _sourceIO;
    bool  _spatialAudioDisabled;
    unsigned long long  _spatialToken;
}

@property (nonatomic) bool allowAudioRecording;
@property (nonatomic, readonly) unsigned int audioSessionId;
@property (nonatomic) unsigned int channelIndex;
@property (nonatomic, readonly) const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*clientFormat;
@property (nonatomic, readonly) int clientPid;
@property (nonatomic) const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*controllerFormat;
@property (nonatomic, readonly) <VCAudioIOControllerDelegate> *delegate;
@property (nonatomic) int deviceRole;
@property (nonatomic) unsigned char direction;
@property (nonatomic, readonly) struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; } farEndVersionInfo;
@property (getter=isInputMeteringEnabled, nonatomic) bool inputMeteringEnabled;
@property (nonatomic) bool isMediaPriorityEnabled;
@property (nonatomic, readonly) bool isPrewarmingClient;
@property (nonatomic, readonly) bool isRemoteCodecInfoValid;
@property (nonatomic, readonly) bool isRemoteVersionInfoValid;
@property (nonatomic) bool isVoiceActivityEnabled;
@property (nonatomic) int operatingMode;
@property (getter=isOuputMeteringEnabled, nonatomic) bool outputMeteringEnabled;
@property (nonatomic, readonly) double remoteCodecSampleRate;
@property (nonatomic, readonly) unsigned int remoteCodecType;
@property (nonatomic, readonly) struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; unsigned int x4; unsigned int x5; unsigned int x6; struct opaqueVCAudioBufferList {} *x7; bool x8; bool x9; }*sinkIO;
@property (nonatomic, readonly) struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; unsigned int x4; unsigned int x5; unsigned int x6; struct opaqueVCAudioBufferList {} *x7; bool x8; bool x9; }*sourceIO;
@property (nonatomic) bool spatialAudioDisabled;
@property (nonatomic, readonly) unsigned long long spatialToken;

- (bool)allowAudioRecording;
- (unsigned int)audioSessionId;
- (unsigned int)channelIndex;
- (const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)clientFormat;
- (int)clientPid;
- (const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)controllerFormat;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)deviceRole;
- (unsigned char)direction;
- (struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; })farEndVersionInfo;
- (id)initWithDelegate:(id)arg1 audioSessionId:(unsigned int)arg2 channelIndex:(unsigned int)arg3 sourceContext:(void*)arg4 sourceProcess:(int (*)arg5 sinkContext:(void*)arg6 sinkProcess:(int (*)arg7 clientPid:(int)arg8 isPrewarmingClient:(bool)arg9 spatialToken:(unsigned long long)arg10 isVoiceActivityEnabled:(bool)arg11 isMediaPriorityEnabled:(bool)arg12;
- (bool)isInputMeteringEnabled;
- (bool)isMediaPriorityEnabled;
- (bool)isOuputMeteringEnabled;
- (bool)isPrewarmingClient;
- (bool)isRemoteCodecInfoValid;
- (bool)isRemoteVersionInfoValid;
- (bool)isVoiceActivityEnabled;
- (int)operatingMode;
- (double)remoteCodecSampleRate;
- (unsigned int)remoteCodecType;
- (void)setAllowAudioRecording:(bool)arg1;
- (void)setChannelIndex:(unsigned int)arg1;
- (void)setClientFormat:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)arg1;
- (void)setControllerFormat:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)arg1;
- (void)setDeviceRole:(int)arg1;
- (void)setDirection:(unsigned char)arg1;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; })arg1;
- (void)setInputMeteringEnabled:(bool)arg1;
- (void)setIsMediaPriorityEnabled:(bool)arg1;
- (void)setIsVoiceActivityEnabled:(bool)arg1;
- (void)setOperatingMode:(int)arg1;
- (void)setOutputMeteringEnabled:(bool)arg1;
- (void)setRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (void)setSpatialAudioDisabled:(bool)arg1;
- (struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; unsigned int x4; unsigned int x5; unsigned int x6; struct opaqueVCAudioBufferList {} *x7; bool x8; bool x9; }*)sinkIO;
- (struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; unsigned int x4; unsigned int x5; unsigned int x6; struct opaqueVCAudioBufferList {} *x7; bool x8; bool x9; }*)sourceIO;
- (bool)spatialAudioDisabled;
- (unsigned long long)spatialToken;

@end
