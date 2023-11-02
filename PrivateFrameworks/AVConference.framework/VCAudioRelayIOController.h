
@interface VCAudioRelayIOController : NSObject <VCAudioIOControllerControl> {
    NSMutableArray * _allClients;
    VCAudioRelayIOControllerSettings * _currentSettings;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    VCAudioRelay * _relay;
    unsigned int  _relayIOType;
    unsigned int  _relayType;
    struct _VCAudioIOControllerIOState { 
        bool timestampInitialized; 
        double lastHostTime; 
        unsigned int lastInputTimestamp; 
        unsigned int lastInputSampleCount; 
        double lastBlockSize; 
        unsigned long long lastTimestamp; 
        struct _VCSingleLinkedList { 
            struct _VCSingleLinkedListEntry {} *head; 
            bool initialized; 
            int (*compare)(); 
            unsigned long long countEntries; 
        } clientIOList; 
        struct opaqueCMSimpleQueue {} *eventQueue; 
        struct opaqueVCAudioLimiter {} *audioLimiter; 
        struct opaqueVCAudioBufferList {} *secondarySampleBuffer; 
        struct opaqueVCAudioBufferList {} *interruptMixDownSampleBuffer; 
        unsigned int audioSessionId; 
        unsigned long long channelStateBitmap; 
        unsigned long long prevUsedChannelStateBitmap; 
        BOOL logPrefix[40]; 
        bool isMuted; 
        bool isVoiceActivityEnabled; 
        bool isMediaPriorityEnabled; 
        double forcedMediaPriorityLastUpdateTime; 
        bool isForcedMediaPriorityEnabled; 
        unsigned char forcedMediaPriority; 
        struct opaqueVCVoiceDetector {} *voiceDetector; 
    }  _sinkData;
    struct _VCAudioIOControllerIOState { 
        bool timestampInitialized; 
        double lastHostTime; 
        unsigned int lastInputTimestamp; 
        unsigned int lastInputSampleCount; 
        double lastBlockSize; 
        unsigned long long lastTimestamp; 
        struct _VCSingleLinkedList { 
            struct _VCSingleLinkedListEntry {} *head; 
            bool initialized; 
            int (*compare)(); 
            unsigned long long countEntries; 
        } clientIOList; 
        struct opaqueCMSimpleQueue {} *eventQueue; 
        struct opaqueVCAudioLimiter {} *audioLimiter; 
        struct opaqueVCAudioBufferList {} *secondarySampleBuffer; 
        struct opaqueVCAudioBufferList {} *interruptMixDownSampleBuffer; 
        unsigned int audioSessionId; 
        unsigned long long channelStateBitmap; 
        unsigned long long prevUsedChannelStateBitmap; 
        BOOL logPrefix[40]; 
        bool isMuted; 
        bool isVoiceActivityEnabled; 
        bool isMediaPriorityEnabled; 
        double forcedMediaPriorityLastUpdateTime; 
        bool isForcedMediaPriorityEnabled; 
        unsigned char forcedMediaPriority; 
        struct opaqueVCVoiceDetector {} *voiceDetector; 
    }  _sourceData;
    NSMutableArray * _startingIOClients;
    unsigned int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *reportingStats;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsVoiceActivityDetection;

+ (void)initializeStateStrings;
+ (id)sharedInstanceClientFacing;
+ (id)sharedInstanceRemoteFacing;
+ (id)sharedInstanceSafeViewClientFacing;
+ (id)sharedInstanceSafeViewRemoteFacing;

- (void)_cleanupDeadClients;
- (bool)addClient:(id)arg1;
- (void)addStartingClient:(id)arg1 controllerSettings:(id)arg2;
- (id)autorelease;
- (unsigned int)channelsPerFrame;
- (unsigned int)computeSamplePerFrameWithControllerSampleRate:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg1;
- (void)flushEventQueue:(struct opaqueCMSimpleQueue { }*)arg1;
- (bool)handleTransitionPrepareToStarting;
- (id)initWithRelayType:(unsigned int)arg1 relayIOType:(unsigned int)arg2;
- (void)loadRelay;
- (id)newControllerSettingsWithNewClient:(id)arg1;
- (id)newRelayIOWithCompletionHandler:(id /* block */)arg1;
- (void)processEventQueue:(struct AudioEventQueue_t { }*)arg1 clientList:(id)arg2;
- (void)registerClientIO:(struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; unsigned int x4; unsigned int x5; unsigned int x6; struct opaqueVCAudioBufferList {} *x7; bool x8; bool x9; }*)arg1 controllerIO:(struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); unsigned long long x_7_1_4; } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; struct opaqueVCAudioBufferList {} *x11; unsigned int x12; unsigned long long x13; unsigned long long x14; BOOL x15[40]; bool x16; bool x17; bool x18; double x19; bool x20; unsigned char x21; struct opaqueVCVoiceDetector {} *x22; }*)arg2;
- (oneway void)release;
- (void)removeAllClientsForIO:(struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); unsigned long long x_7_1_4; } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; struct opaqueVCAudioBufferList {} *x11; unsigned int x12; unsigned long long x13; unsigned long long x14; BOOL x15[40]; bool x16; bool x17; bool x18; double x19; bool x20; unsigned char x21; struct opaqueVCVoiceDetector {} *x22; }*)arg1;
- (bool)removeClient:(id)arg1;
- (void)resetAudioTimestamps;
- (id)retain;
- (unsigned long long)retainCount;
- (struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); unsigned long long x_7_1_4; } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; struct opaqueVCAudioBufferList {} *x11; unsigned int x12; unsigned long long x13; unsigned long long x14; BOOL x15[40]; bool x16; bool x17; bool x18; double x19; bool x20; unsigned char x21; struct opaqueVCVoiceDetector {} *x22; }*)sinkIO;
- (struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); unsigned long long x_7_1_4; } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; struct opaqueVCAudioBufferList {} *x11; unsigned int x12; unsigned long long x13; unsigned long long x14; BOOL x15[40]; bool x16; bool x17; bool x18; double x19; bool x20; unsigned char x21; struct opaqueVCVoiceDetector {} *x22; }*)sourceIO;
- (void)startClient:(id)arg1;
- (bool)startRelayIO:(id)arg1;
- (bool)stateIdleWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int*)arg3;
- (bool)statePrepareWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int*)arg3;
- (bool)stateRunningWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int*)arg3;
- (bool)stateStartingWithControllerSettings:(id)arg1 client:(id)arg2 newState:(unsigned int*)arg3;
- (void)stopClient:(id)arg1;
- (bool)supportsVoiceActivityDetection;
- (void)unloadRelay;
- (void)unregisterClientIO:(struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; unsigned int x4; unsigned int x5; unsigned int x6; struct opaqueVCAudioBufferList {} *x7; bool x8; bool x9; }*)arg1 controllerIO:(struct _VCAudioIOControllerIOState { bool x1; double x2; unsigned int x3; unsigned int x4; double x5; unsigned long long x6; struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry {} *x_7_1_1; bool x_7_1_2; int (*x_7_1_3)(); unsigned long long x_7_1_4; } x7; struct opaqueCMSimpleQueue {} *x8; struct opaqueVCAudioLimiter {} *x9; struct opaqueVCAudioBufferList {} *x10; struct opaqueVCAudioBufferList {} *x11; unsigned int x12; unsigned long long x13; unsigned long long x14; BOOL x15[40]; bool x16; bool x17; bool x18; double x19; bool x20; unsigned char x21; struct opaqueVCVoiceDetector {} *x22; }*)arg2;
- (void)updateClient:(id)arg1 settings:(const struct tagVCAudioIOControllerClientSettings { unsigned char x1; bool x2; bool x3; bool x4; }*)arg2;
- (bool)updateStateWithClient:(id)arg1;

@end
