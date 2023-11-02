
@interface AVHapticServer : NSObject <NSXPCListenerDelegate> {
    unsigned long long  _SSSClientID;
    unsigned long long  _audioPrewarmCount;
    unsigned long long  _audioRunningCount;
    NSXPCInterface * _cachedClientInterface;
    NSXPCInterface * _cachedServerInterface;
    unsigned long long  _hapticsPrewarmCount;
    unsigned long long  _hapticsRunningCount;
    unsigned long long  _initCount;
    struct map<unsigned int, NSMutableArray<AVServerWrapper *> *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, NSMutableArray<AVServerWrapper *> *>>> { 
        struct __tree<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, NSMutableArray<AVServerWrapper *> *>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _instanceMap;
    struct recursive_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _instanceMutex;
    NSXPCListener * _listener;
    void * _manager;
    struct PowerTimer { id x1; id x2; bool x3; } * _powerTimer;
    struct map<int, std::bitset<255>, std::less<int>, std::allocator<std::pair<const int, std::bitset<255>>>> { 
        struct __tree<std::__value_type<int, std::bitset<255>>, std::__map_value_compare<int, std::__value_type<int, std::bitset<255>>, std::less<int>>, std::allocator<std::__value_type<int, std::bitset<255>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::bitset<255>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::bitset<255>>, std::less<int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _processIndexMap;
    unsigned long long  _runningChannelIDCount;
    NSError * _savedError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long initCount;
@property (readonly) void*manager;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)HandleInterruptionForSessionID:(unsigned int)arg1 command:(unsigned int)arg2 dictionary:(struct __CFDictionary { }*)arg3;
- (void)addListener:(id)arg1 forAudioSessionID:(unsigned int)arg2;
- (unsigned long long)addProcessEntry:(int)arg1;
- (int)cancelPatternWithOptions:(struct __CFDictionary { }*)arg1;
- (void)checkRunningCountAndStopSynth;
- (void)cleanup;
- (void)dealloc;
- (void)decrementInit;
- (void)decrementPrewarmCountAndStopAudio:(bool)arg1 stopHaptics:(bool)arg2;
- (void)decrementRunningCountAndStopAudio:(bool)arg1 stopHaptics:(bool)arg2 entry:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg3;
- (void)displayRunningProcessEntriesWithOnTime:(unsigned long long)arg1;
- (int)doPrewarm:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)doReleaseClientResources:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (int)doStartRunning:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1 completedBlock:(id /* block */)arg2;
- (void)doStopPrewarm:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1 audio:(bool)arg2 haptics:(bool)arg3;
- (void)doStopRunning:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1 audio:(bool)arg2 haptics:(bool)arg3;
- (void)doStopRunningForInterrupt:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1 audio:(bool)arg2 haptics:(bool)arg3;
- (void)dumpProcessEntries:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })entryWithID:(unsigned long long)arg1;
- (unsigned long long)getChannelID;
- (void)incrementChannelID;
- (bool)incrementInit:(id*)arg1;
- (void)incrementPrewarmCountForAudio:(bool)arg1 haptics:(bool)arg2;
- (void)incrementRunningCountForAudio:(bool)arg1 haptics:(bool)arg2 entry:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg3;
- (id)init;
- (unsigned long long)initCount;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (int)loadSynthPreset;
- (void*)manager;
- (int)playVibePattern:(struct __CFDictionary { }*)arg1 gain:(float)arg2 synchronizer:(struct SSPlayerSynchronizer { }*)arg3 flags:(unsigned int)arg4 atTime:(double)arg5 completionHandler:(id /* block */)arg6;
- (void)removeListener:(id)arg1 withAudioSessionID:(unsigned int)arg2;
- (void)removeProcessEntry:(unsigned long long)arg1;
- (bool)setupSSSClient;
- (int)startPrewarm;
- (int)stopPrewarm;

@end
