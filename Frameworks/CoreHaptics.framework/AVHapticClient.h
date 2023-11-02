
@interface AVHapticClient : NSObject <CHHapticClientInterface, NSXPCListenerDelegate> {
    id /* block */  _asyncStopCallback;
    NSArray * _channelKeys;
    unsigned long long  _clientID;
    void * _commandWriter;
    id /* block */  _completionCallback;
    NSObject<OS_dispatch_queue> * _completionQueue;
    bool  _connected;
    NSXPCConnection * _connection;
    id /* block */  _connectionCallback;
    bool  _disconnecting;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _mapMutex;
    bool  _prewarmed;
    struct map<unsigned long, AVHapticSequenceEntry *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, AVHapticSequenceEntry *>>> { 
        struct __tree<std::__value_type<unsigned long, AVHapticSequenceEntry *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, AVHapticSequenceEntry *>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, AVHapticSequenceEntry *>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, AVHapticSequenceEntry *>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, AVHapticSequenceEntry *>, std::less<unsigned long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _sequenceEntryMap;
    int  _serverProcessID;
    int  _serverTimeout;
    int  _state;
    unsigned long long  _uniqueID;
}

@property (copy) id /* block */ asyncStopCallback;
@property (readonly) NSArray *channelKeys;
@property (readonly) unsigned long long clientID;
@property (copy) id /* block */ completionCallback;
@property bool connected;
@property (copy) id /* block */ connectionCallback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool disconnecting;
@property (readonly) double hapticLatency;
@property (readonly) unsigned long long hash;
@property (readonly) bool prewarmed;
@property (readonly) bool running;
@property int serverProcessID;
@property (readonly) int state;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allocateResources:(id /* block */)arg1;
- (id /* block */)asyncStopCallback;
- (unsigned int)calculateHapticCommandParamCurveMemorySize:(unsigned int)arg1;
- (void)callSequenceFinishedHandlersWithError:(id)arg1;
- (id)channelKeys;
- (void)clearAssignedChannels;
- (bool)clearEventsFromTime:(double)arg1 channel:(unsigned long long)arg2;
- (bool)clearSequenceEvents:(unsigned long long)arg1 atTime:(double)arg2;
- (void)clientCompletedWithError:(id)arg1;
- (void)clientDisconnectingForReason:(unsigned long long)arg1 error:(id)arg2;
- (unsigned long long)clientID;
- (void)clientStoppedForReason:(unsigned long long)arg1 error:(id)arg2;
- (id /* block */)completionCallback;
- (bool)connected;
- (id /* block */)connectionCallback;
- (bool)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(id /* block */)arg3;
- (bool)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(id /* block */)arg5;
- (void)dealloc;
- (void)destroySharedMemory;
- (void)detachHapticSequence:(unsigned long long)arg1;
- (void)detachSequenceEntryforID:(unsigned long long)arg1;
- (void)disconnect;
- (bool)disconnecting;
- (void)doInit;
- (bool)doScheduleParamCurve:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 paramCurve:(id)arg4 error:(id*)arg5;
- (bool)doScheduleParamCurveWithMemoryReserve:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 memoryReserve:(struct HapticSharedMemoryAddressReserve { void *x1; unsigned int x2; void *x3; unsigned int x4; int x5; }*)arg4 paramCurve:(id)arg5 error:(id*)arg6;
- (bool)doSendEvents:(id)arg1 withImmediateParameters:(id)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 sorted:(bool)arg5 outToken:(unsigned long long*)arg6 error:(id*)arg7;
- (bool)enableSequenceLooping:(unsigned long long)arg1 enable:(bool)arg2 error:(id*)arg3;
- (void)expectNotifyAfter:(double)arg1;
- (bool)finish:(id /* block */)arg1;
- (id)getAsyncDelegateForMethod:(SEL)arg1 errorHandler:(id /* block */)arg2;
- (id /* block */)getSequenceFinishedHandlerForID:(unsigned long long)arg1;
- (id)getSyncDelegateForMethod:(SEL)arg1 errorHandler:(id /* block */)arg2;
- (void)handleServerConnectionInterruption;
- (void)handleServerConnectionInvalidation;
- (double)hapticLatency;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (bool)loadAndPrepareHapticSequenceFromData:(id)arg1 reply:(id /* block */)arg2;
- (bool)loadAndPrepareHapticSequenceFromEvents:(id)arg1 reply:(id /* block */)arg2;
- (bool)loadAndPrepareHapticSequenceFromVibePattern:(id)arg1 reply:(id /* block */)arg2;
- (bool)loadHapticEvent:(id)arg1 reply:(id /* block */)arg2;
- (bool)pauseHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (bool)prepareHapticSequence:(unsigned long long)arg1 error:(id*)arg2;
- (void)prewarm:(id /* block */)arg1;
- (bool)prewarmed;
- (void)queryServerCapabilities:(id)arg1 reply:(id /* block */)arg2;
- (bool)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (bool)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)releaseResources;
- (bool)removeAssignedChannelID:(unsigned long long)arg1 error:(id*)arg2;
- (bool)requestAssignedChannels:(unsigned long long)arg1 error:(id*)arg2;
- (bool)resetChannel:(unsigned long long)arg1 atTime:(double)arg2;
- (bool)resetHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (bool)resumeHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (bool)running;
- (bool)scheduleParameterCurve:(unsigned long long)arg1 curve:(id)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 error:(id*)arg5;
- (bool)seekHapticSequence:(unsigned long long)arg1 toTime:(double)arg2;
- (bool)sendEvents:(id)arg1 withImmediateParameters:(id)arg2 atTime:(double)arg3 channel:(unsigned long long)arg4 outToken:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)sendUnduckAudioCommand:(unsigned long long)arg1 atTime:(double)arg2;
- (void)sequenceFinished:(unsigned long long)arg1 error:(id)arg2;
- (int)serverProcessID;
- (void)setAsyncStopCallback:(id /* block */)arg1;
- (bool)setChannelEventBehavior:(unsigned long long)arg1 channel:(unsigned long long)arg2;
- (void)setChannelKeys:(id)arg1;
- (void)setCompletionCallback:(id /* block */)arg1;
- (void)setConnected:(bool)arg1;
- (void)setConnectionCallback:(id /* block */)arg1;
- (bool)setParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 channel:(unsigned long long)arg4;
- (bool)setPlayerBehavior:(unsigned long long)arg1 error:(id*)arg2;
- (void)setRunStateForSequenceEntryWithID:(unsigned long long)arg1 running:(bool)arg2;
- (bool)setSequenceChannelParameter:(unsigned long long)arg1 atTime:(double)arg2 value:(float)arg3 sequenceID:(unsigned long long)arg4 channel:(unsigned long long)arg5;
- (bool)setSequenceEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 channel:(unsigned long long)arg3;
- (void)setSequenceFinishedHandlerForID:(unsigned long long)arg1 finishedHandler:(id /* block */)arg2;
- (bool)setSequenceLoopLength:(unsigned long long)arg1 length:(float)arg2 error:(id*)arg3;
- (bool)setSequencePlaybackRate:(unsigned long long)arg1 rate:(float)arg2 error:(id*)arg3;
- (void)setServerProcessID:(int)arg1;
- (void)setState:(int)arg1;
- (bool)setupConnectionWithOptions:(id)arg1 error:(id*)arg2;
- (bool)startHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 withOffset:(double)arg3;
- (void)startRunning:(id /* block */)arg1;
- (int)state;
- (bool)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2;
- (void)stopPrewarm;
- (void)stopRunning;
- (void)stopRunning:(id /* block */)arg1;

@end
