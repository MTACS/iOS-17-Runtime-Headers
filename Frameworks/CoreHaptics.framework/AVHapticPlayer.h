
@interface AVHapticPlayer : NSObject {
    unsigned long long  _behavior;
    NSMutableArray * _channelArray;
    AVHapticClient * _client;
    id /* block */  _connectionErrorHandler;
    bool  _resourcesAllocated;
    id /* block */  _stopRunningHandler;
}

@property (nonatomic) unsigned long long behavior;
@property (nonatomic, readonly) NSArray *channels;
@property (readonly) AVHapticClient *client;
@property (copy) id /* block */ connectionErrorHandler;
@property (readonly) double currentMediaTime;
@property (readonly) double hapticLatency;
@property (readonly) bool resourcesAllocated;
@property (copy) id /* block */ stopRunningHandler;

+ (bool)isSupported;
+ (bool)supportsAudio;
+ (bool)supportsHaptics;

- (void).cxx_destruct;
- (id)addChannel:(id*)arg1;
- (void)allocateRenderResourcesWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)behavior;
- (id)channels;
- (bool)clearSequenceEvents:(unsigned long long)arg1 atTime:(double)arg2;
- (id)client;
- (id /* block */)connectionErrorHandler;
- (bool)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(id /* block */)arg3;
- (bool)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(id /* block */)arg5;
- (id)createOptionsFromAudioSessionID:(unsigned int)arg1 shared:(bool)arg2;
- (double)currentMediaTime;
- (void)dealloc;
- (void)deallocateRenderResources;
- (void)detachHapticSequence:(unsigned long long)arg1;
- (bool)doInitWithOptions:(id)arg1 error:(id*)arg2;
- (bool)enableSequenceLooping:(unsigned long long)arg1 enable:(bool)arg2 error:(id*)arg3;
- (void)expectNotifyAfter:(double)arg1;
- (bool)finishWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)getBehavior;
- (double)hapticLatency;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)initWithSessionID:(unsigned int)arg1 error:(id*)arg2;
- (id)initWithSessionID:(unsigned int)arg1 sessionIsShared:(bool)arg2 error:(id*)arg3;
- (void)invalidateChannels;
- (bool)loadAndPrepareHapticSequenceFromData:(id)arg1 reply:(id /* block */)arg2;
- (bool)loadAndPrepareHapticSequenceFromEvents:(id)arg1 reply:(id /* block */)arg2;
- (bool)loadAndPrepareHapticSequenceFromVibePattern:(id)arg1 reply:(id /* block */)arg2;
- (bool)loadHapticEvent:(id)arg1 reply:(id /* block */)arg2;
- (bool)pauseHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (bool)playHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 offset:(double)arg3;
- (bool)prepareHapticSequence:(unsigned long long)arg1 error:(id*)arg2;
- (void)prewarmWithCompletionHandler:(id /* block */)arg1;
- (void)queryServerCapabilities:(id)arg1 reply:(id /* block */)arg2;
- (bool)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)releaseChannels;
- (bool)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (bool)removeChannel:(id)arg1 error:(id*)arg2;
- (bool)resetHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (bool)resourcesAllocated;
- (bool)resumeHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (bool)seekHapticSequence:(unsigned long long)arg1 toTime:(double)arg2;
- (bool)sendUnduckAudioCommand:(unsigned long long)arg1 atTime:(double)arg2;
- (void)setBehavior:(unsigned long long)arg1;
- (bool)setBehavior:(unsigned long long)arg1 error:(id*)arg2;
- (void)setConnectionErrorHandler:(id /* block */)arg1;
- (bool)setNumberOfChannels:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setSequenceChannelParam:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 param:(unsigned long long)arg4 value:(float)arg5 error:(id*)arg6;
- (bool)setSequenceLoopLength:(unsigned long long)arg1 length:(float)arg2 error:(id*)arg3;
- (bool)setSequencePlaybackRate:(unsigned long long)arg1 rate:(float)arg2 error:(id*)arg3;
- (void)setStopRunningHandler:(id /* block */)arg1;
- (void)startRunningWithCompletionHandler:(id /* block */)arg1;
- (bool)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (void)stopPrewarm;
- (void)stopRunning;
- (id /* block */)stopRunningHandler;
- (void)stopRunningWithCompletionHandler:(id /* block */)arg1;

@end
