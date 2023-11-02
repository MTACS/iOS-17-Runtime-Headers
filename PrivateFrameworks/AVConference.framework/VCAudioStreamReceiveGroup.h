
@interface VCAudioStreamReceiveGroup : VCMediaStreamReceiveGroup <VCAudioStreamGroup> {
    float  _averageOutputPower;
    VCAudioStreamGroupCommon * _common;
    int (* _didPullSamplesCallback;
    void * _didPullSamplesCallbackContext;
    bool  _didRegisterAsAudioSessionObserver;
    bool  _haveReportedPerfTimers;
    struct tagVCAudioStreamGroupPriorityInfo { 
        bool isAudioActive; 
        unsigned int audioActiveProbabilityThreshold; 
        unsigned int audioInactiveProbabilityThreshold; 
        unsigned int audioActiveAccumulationThreshold; 
        unsigned int audioInactiveAccumulationThreshold; 
        unsigned int audioActiveCount; 
        unsigned int lastAudioPriority; 
        unsigned int refreshCounter; 
    }  _mediaPriorityInfo;
    bool  _receivingEndToEndStream;
    unsigned long long  _speakerProcsCalled;
    double  _syncDestinationOutputLatency;
    unsigned long long  _syncTargetCalled;
}

@property (nonatomic) unsigned int audioChannelIndex;
@property (nonatomic, readonly) int deviceRole;
@property (setter=setMuted:, nonatomic) bool isMuted;
@property (setter=setPowerSpectrumEnabled:) bool isPowerSpectrumEnabled;
@property (readonly) <VCMediaStreamSyncSource> *syncSource;

- (bool)addSyncDestination:(id)arg1;
- (unsigned int)audioChannelIndex;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x1; unsigned int x2[5]; unsigned int x3; double x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; unsigned int x7; double x8; unsigned int x9; unsigned int x10; }*)arg1;
- (bool)configureStreams;
- (void)dealloc;
- (int)deviceRole;
- (void)didStart;
- (void)didStop;
- (void)dispatchedUpdateOutputLatencyForSyncDestinations:(double)arg1;
- (id)initWithConfig:(id)arg1;
- (bool)isAudioExpected;
- (bool)isMuted;
- (bool)isPowerSpectrumEnabled;
- (void)mediaStream:(id)arg1 didReceiveNewMediaKeyIndex:(id)arg2;
- (bool)removeSyncDestination:(id)arg1;
- (void)reportParticipantsPerfTimingsOnce;
- (void)setActiveStreamIDs:(id)arg1;
- (void)setAudioChannelIndex:(unsigned int)arg1;
- (bool)setDeviceRole:(int)arg1 operatingMode:(int)arg2;
- (void)setMuteOnStreams;
- (void)setMuted:(bool)arg1;
- (void)setOptedInStreamID:(id)arg1;
- (void)setPowerSpectrumEnabled:(bool)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (id)startCapture;
- (id)stopCapture;
- (id)syncSource;
- (void)vcMediaStream:(id)arg1 didReceiveFirstFrameWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)vcMediaStream:(id)arg1 didSwitchToAudioStreamWithID:(unsigned short)arg2;
- (void)vcMediaStream:(id)arg1 remoteMediaStalled:(bool)arg2 duration:(double)arg3;
- (id)willStart;

@end
