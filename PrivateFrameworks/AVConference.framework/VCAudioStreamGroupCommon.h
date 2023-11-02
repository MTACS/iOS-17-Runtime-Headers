
@interface VCAudioStreamGroupCommon : VCObject <VCAudioIODelegate, VCAudioPowerSpectrumSourceDelegate, VCAudioStreamGroup, VCMediaCaptureController> {
    unsigned int  _audioChannelIndex;
    VCAudioIO * _audioIO;
    VCAudioPowerSpectrumSource * _audioPowerSpectrumSource;
    unsigned int  _audioSessionID;
    struct tagVCAudioStreamGroupStream { struct tagVCAudioStreamGroupStream {} *x1; bool x2; bool x3; void *x4; int (*x5)(); unsigned short x6; id x7; unsigned int x8; unsigned int x9; } * _audioStreams;
    unsigned int  _audioType;
    int (* _callback;
    VCAudioCaptionsCoordinator * _captionsCoordinator;
    void * _context;
    int  _deviceRole;
    unsigned char  _direction;
    bool  _isGKVoiceChat;
    bool  _isMediaPriorityEnabled;
    bool  _isMuted;
    bool  _isPowerSpectrumEnabled;
    bool  _isVoiceActivityEnabled;
    unsigned int  _maxChannelCount;
    int  _operatingMode;
    long long  _parentStreamGroupToken;
    NSString * _participantUUID;
    long long  _powerSpectrumStreamToken;
    unsigned int  _preferredIOSampleRate;
    unsigned int  _preferredIOSamplesPerFrame;
    int  _processID;
    unsigned int  _processedFramesCount;
    struct opaqueVCAudioBufferList { } * _sampleBuffer;
    unsigned long long  _spatialAudioSourceID;
    unsigned int  _streamGroupID;
    struct tagVCMemoryPool { struct { void *x_1_1_1; long long x_1_1_2; } x1; unsigned long long x2; } * _syncDestinationChangeEventPool;
    struct opaqueCMSimpleQueue { } * _syncDestinationChangeEventQueue;
    struct VCAudioStreamGroupSyncDestinationList { 
        struct tagVCAudioStreamGroupSyncDestination {} *slh_first; 
    }  _syncDestinationList;
}

@property unsigned int audioChannelIndex;
@property (readonly) VCAudioIO *audioIO;
@property (readonly) struct tagVCAudioStreamGroupStream { struct tagVCAudioStreamGroupStream {} *x1; bool x2; bool x3; void *x4; int (*x5)(); unsigned short x6; id x7; unsigned int x8; unsigned int x9; }*audioStreams;
@property (nonatomic) int (*callback;
@property (nonatomic) void*context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int deviceRole;
@property (readonly) unsigned long long hash;
@property (setter=setMuted:, nonatomic) bool isMuted;
@property (setter=setPowerSpectrumEnabled:) bool isPowerSpectrumEnabled;
@property (readonly) Class superclass;

+ (bool)isSupportedDirection:(unsigned char)arg1;

- (bool)addSyncDestination:(id)arg1 shouldSchedule:(bool)arg2;
- (unsigned int)audioChannelIndex;
- (id)audioIO;
- (void)audioPowerSpectrumSinkDidRegister;
- (void)audioPowerSpectrumSinkDidUnregister;
- (struct tagVCAudioStreamGroupStream { struct tagVCAudioStreamGroupStream {} *x1; bool x2; bool x3; void *x4; int (*x5)(); unsigned short x6; id x7; unsigned int x8; unsigned int x9; }*)audioStreams;
- (unsigned int)audioTypeForCaptureSource:(int)arg1;
- (int (*)callback;
- (void)cleanupPowerSpectrumSource;
- (void)cleanupStreams;
- (void)cleanupSyncDestinations;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x1; unsigned int x2[5]; unsigned int x3; double x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; unsigned int x7; double x8; unsigned int x9; unsigned int x10; }*)arg1 averagePower:(float)arg2;
- (bool)configureAudioIOWithDeviceRole:(int)arg1 operatingMode:(int)arg2;
- (bool)configurePowerSpectrumSource;
- (bool)configureStreams:(id)arg1 withRateControlConfig:(id)arg2;
- (void*)context;
- (void)dealloc;
- (id)description;
- (int)deviceRole;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg1;
- (bool)enqueueSyncDestinationChangeEvent:(id)arg1 eventType:(int)arg2;
- (void)flushSyncDestinationUpdatesEventQueue;
- (id)getAudioDumpName;
- (id)initWithConfig:(id)arg1 audioCallback:(int (*)arg2 context:(void*)arg3 audioDirection:(unsigned char)arg4;
- (bool)isMuted;
- (bool)isPowerSpectrumEnabled;
- (bool)reconfigureAudioIOIfNeededWithDeviceRole:(int)arg1 operatingMode:(int)arg2;
- (bool)removeSyncDestination:(id)arg1 shouldSchedule:(bool)arg2;
- (void)sendAudioPowerSpectrumSourceRegistration:(bool)arg1;
- (void)serverDidDie;
- (void)setAudioChannelIndex:(unsigned int)arg1;
- (void)setCallback:(int (*)arg1;
- (void)setContext:(void*)arg1;
- (bool)setDeviceRole:(int)arg1 operatingMode:(int)arg2;
- (void)setMuted:(bool)arg1;
- (void)setPowerSpectrumEnabled:(bool)arg1;
- (void)setupStreamsWithStreamInfos:(id)arg1;
- (void)startAudioDump;
- (id)startCapture;
- (void)stopAudioDump;
- (id)stopCapture;
- (void)updateVoiceActivityEnabled:(bool)arg1 isMediaPriorityEnabled:(bool)arg2;

@end
