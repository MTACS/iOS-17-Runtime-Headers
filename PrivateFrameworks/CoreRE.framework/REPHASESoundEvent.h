
@interface REPHASESoundEvent : NSObject <PHASEExternalStreamDelegate> {
    AVAudioSession * _audioSession;
    AUAudioUnit * _audioUnit;
    float  _cachedDirectSendLevel;
    float  _cachedPlaybackSpeed;
    float  _cachedReverbSendLevel;
    struct queue<REPHASESoundEventCommandState, std::deque<REPHASESoundEventCommandState>> { 
        struct deque<REPHASESoundEventCommandState, std::allocator<REPHASESoundEventCommandState>> { 
            struct __split_buffer<REPHASESoundEventCommandState *, std::allocator<REPHASESoundEventCommandState *>> { 
                struct REPHASESoundEventCommandState {} **__first_; 
                struct REPHASESoundEventCommandState {} **__begin_; 
                struct REPHASESoundEventCommandState {} **__end_; 
                struct __compressed_pair<REPHASESoundEventCommandState **, std::allocator<REPHASESoundEventCommandState *>> { 
                    struct REPHASESoundEventCommandState {} **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<REPHASESoundEventCommandState>> { 
                unsigned long long __value_; 
            } __size_; 
        } c; 
    }  _commandQueue;
    struct recursive_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _commandQueueMutex;
    PHASEEngine * _engine;
    PHASEExternalOutputStream * _externalStream;
    PHASEExternalOutputStreamController * _externalStreamController;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _isStopping;
    PHASEListener * _listener;
    PHASEMixerParameters * _mixerParameters;
    id /* block */  _playbackStateChangeHandler;
    REPHASESoundPrepareState * _prepareState;
    PHASESoundEventNodeDefinition * _rootNode;
    PHASESoundEvent * _soundEvent;
    id /* block */  _soundEventFactory;
    PHASESource * _source;
    unsigned long long  _state;
    struct recursive_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _stateChangeMutex;
    struct optional<double> { 
        union { 
            BOOL __null_state_; 
            double __val_; 
        } ; 
        bool __engaged_; 
    }  _stationaryTime;
}

@property (readonly) AVAudioSession *audioSession;
@property (nonatomic, retain) AUAudioUnit *audioUnit;
@property (nonatomic) float cachedDirectSendLevel;
@property (nonatomic) float cachedPlaybackSpeed;
@property (nonatomic) float cachedReverbSendLevel;
@property (nonatomic, retain) PHASEExternalOutputStream *externalStream;
@property (nonatomic, readonly) PHASEExternalOutputStreamController *externalStreamController;
@property (nonatomic, copy) id /* block */ playbackStateChangeHandler;
@property (nonatomic, retain) REPHASESoundPrepareState *prepareState;
@property (nonatomic, readonly) PHASESoundEvent *soundEvent;
@property (readonly) unsigned long long state;

+ (void)controllerWithEngine:(id)arg1 streamUUID:(id)arg2 mixerDefinition:(id)arg3 source:(id)arg4 listener:(id)arg5 normalizationMode:(int)arg6 calibrationMode:(int)arg7 calibrationLevel:(double)arg8 callback:(id /* block */)arg9;
+ (void)eventWithEngine:(id)arg1 streamUUID:(id)arg2 mixerDefinition:(id)arg3 source:(id)arg4 listener:(id)arg5 normalizationMode:(int)arg6 calibrationMode:(int)arg7 calibrationLevel:(double)arg8 audioSession:(id)arg9 callback:(id /* block */)arg10;
+ (void)eventWithEngine:(id)arg1 streamUUID:(id)arg2 prepareState:(id)arg3 maximumFramesToRender:(unsigned int)arg4 audioSession:(id)arg5 callback:(id /* block */)arg6;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_pause;
- (bool)_resume;
- (bool)_seekToTime:(double)arg1;
- (bool)_startWithCompletionHandler:(id /* block */)arg1;
- (bool)_stopAndDestroy;
- (id)audioSession;
- (id)audioUnit;
- (float)cachedDirectSendLevel;
- (float)cachedPlaybackSpeed;
- (float)cachedReverbSendLevel;
- (unsigned long long)changeToState:(unsigned long long)arg1;
- (id)description;
- (id)externalStream;
- (id)externalStreamController;
- (id)initWithAudioSession:(id)arg1;
- (id)initWithEngine:(id)arg1 rootNode:(id)arg2 source:(id)arg3 listener:(id)arg4 mixerParameters:(id)arg5 audioSession:(id)arg6 outError:(id*)arg7;
- (id)initWithSoundEventFactory:(id /* block */)arg1;
- (id)paramForKey:(id)arg1;
- (void)pause;
- (id /* block */)playbackStateChangeHandler;
- (id)prepareState;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (void)resume;
- (bool)seekToTime:(double)arg1;
- (void)setAudioUnit:(id)arg1;
- (void)setCachedDirectSendLevel:(float)arg1;
- (void)setCachedPlaybackSpeed:(float)arg1;
- (void)setCachedReverbSendLevel:(float)arg1;
- (void)setExternalStream:(id)arg1;
- (void)setPlaybackStateChangeHandler:(id /* block */)arg1;
- (void)setPrepareState:(id)arg1;
- (id)soundEvent;
- (unsigned long long)state;
- (void)stopAndDestroy;
- (void)stream:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)updateCommandQueue;

@end
