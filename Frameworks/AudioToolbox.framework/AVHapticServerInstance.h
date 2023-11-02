
@interface AVHapticServerInstance : NSObject <CHHapticServerInterface, NSXPCListenerDelegate> {
    unsigned long long  _clientID;
    bool  _clientInterrupted;
    struct shared_ptr<opaqueCMSession> { 
        struct opaqueCMSession {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _clientSession;
    bool  _clientSuspended;
    NSXPCConnection * _connection;
    struct shared_ptr<HapticSession> { 
        struct HapticSession {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _hapticSession;
    AVServerWrapper * _listenerWrapper;
    AVHapticServer * _master;
    bool  _prewarmIncludesAudio;
    bool  _prewarmIncludesHaptics;
    bool  _routeUsesReceiver;
    bool  _runIncludesAudio;
    bool  _runIncludesHaptics;
    bool  _runningInBackground;
    bool  _wasPrewarmedAndSuspended;
    bool  _wasRunningAndSuspended;
}

@property (readonly) unsigned long long clientID;
@property bool clientInterrupted;
@property bool clientSuspended;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) AVHapticServer *master;
@property bool prewarmIncludesAudio;
@property bool prewarmIncludesHaptics;
@property bool runIncludesAudio;
@property bool runIncludesHaptics;
@property bool runningInBackground;
@property (readonly) Class superclass;
@property bool wasPrewarmedAndSuspended;
@property bool wasRunningAndSuspended;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allocateClientResources:(id /* block */)arg1;
- (unsigned long long)clientID;
- (bool)clientInterrupted;
- (bool)clientSuspended;
- (void)configureWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (void)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(id /* block */)arg3;
- (void)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(id /* block */)arg5;
- (void)dealloc;
- (void)debugExpectNotifyOnFinishAfter:(double)arg1 reply:(id /* block */)arg2;
- (void)detachSequence:(unsigned long long)arg1;
- (void)fadeClientForSessionInterruption:(bool)arg1 affectHaptics:(bool)arg2 fadeTime:(float)arg3 fadeLevel:(float)arg4 stopAfterFade:(bool)arg5;
- (id)getAsyncDelegateForMethod:(SEL)arg1 errorHandler:(id /* block */)arg2;
- (void)getHapticLatency:(id /* block */)arg1;
- (id)getSyncDelegateForMethod:(SEL)arg1 errorHandler:(id /* block */)arg2;
- (void)handleClientApplicationStateChange:(id)arg1;
- (void)handleClientApplicationStateChangeUsingAppState:(unsigned long long)arg1;
- (void)handleClientRouteChange:(id)arg1;
- (void)handleClientSessionInterruptionCommand:(unsigned int)arg1 dictionary:(id)arg2;
- (void)handleConnectionError;
- (id)initWithMaster:(id)arg1 id:(unsigned long long)arg2 connection:(id)arg3 outError:(id*)arg4;
- (void)loadHapticEvent:(id)arg1 reply:(id /* block */)arg2;
- (void)loadHapticSequenceFromData:(id)arg1 reply:(id /* block */)arg2;
- (void)loadHapticSequenceFromEvents:(id)arg1 reply:(id /* block */)arg2;
- (void)loadVibePattern:(id)arg1 reply:(id /* block */)arg2;
- (id)master;
- (void)muteClientForRingerSwitch:(bool)arg1;
- (void)notifyClientOnStopWithReason:(long long)arg1 error:(id)arg2;
- (void)prepareHapticSequence:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)prewarm:(id /* block */)arg1;
- (bool)prewarmIncludesAudio;
- (bool)prewarmIncludesHaptics;
- (void)queryCapabilities:(id)arg1 reply:(id /* block */)arg2;
- (void)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)releaseChannels;
- (void)releaseClientResources;
- (void)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)removeChannel:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)removeSessionListeners;
- (void)requestChannels:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (bool)runIncludesAudio;
- (bool)runIncludesHaptics;
- (bool)runningInBackground;
- (void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)setClientInterrupted:(bool)arg1;
- (void)setClientSuspended:(bool)arg1;
- (void)setPlayerBehavior:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)setPrewarmIncludesAudio:(bool)arg1;
- (void)setPrewarmIncludesHaptics:(bool)arg1;
- (void)setRunIncludesAudio:(bool)arg1;
- (void)setRunIncludesHaptics:(bool)arg1;
- (void)setRunningInBackground:(bool)arg1;
- (void)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channelIndex:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)setWasPrewarmedAndSuspended:(bool)arg1;
- (void)setWasRunningAndSuspended:(bool)arg1;
- (bool)setupAudioSessionFromID:(unsigned int)arg1 isShared:(bool)arg2 error:(id*)arg3;
- (void)startRunning:(id /* block */)arg1;
- (void)stopPrewarm;
- (void)stopRunning;
- (void)stopRunning:(id /* block */)arg1;
- (void)unmuteClientAfterSessionInterruption:(float)arg1;
- (bool)wasPrewarmedAndSuspended;
- (bool)wasRunningAndSuspended;

@end