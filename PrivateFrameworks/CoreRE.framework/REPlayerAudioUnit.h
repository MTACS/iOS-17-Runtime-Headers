
@interface REPlayerAudioUnit : AUAudioUnit {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentEventTime;
    unsigned long long  _currentFadeIndex;
    struct FadeState { 
        unsigned int uniqueID; 
        bool shouldFade; 
    }  _currentFadeState;
    unsigned long long  _currentMachStartTime;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _didHitStop;
    AVAudioEngine * _engine;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _engineConfigurationMutex;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _fadeWindow;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _looping;
    unsigned char  _missedPlayStrategy;
    struct atomic<FadeState> { 
        struct __cxx_atomic_impl<FadeState, std::__cxx_atomic_base_impl<FadeState>> { 
            _Atomic struct FadeState {} __a_value; 
        } __a_; 
    }  _nextFadeState;
    AUAudioUnitBusArray * _outputBusArray;
    struct atomic<REAudioPlaybackState> { 
        struct __cxx_atomic_impl<REAudioPlaybackState, std::__cxx_atomic_base_impl<REAudioPlaybackState>> { 
            _Atomic unsigned long long __a_value; 
        } __a_; 
    }  _playbackState;
    id /* block */  _playbackStateDidChange;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _playedFrames;
    AVAudioPlayerNode * _playingNode;
    struct OpaqueAudioComponentInstance { } * _playingNodeAudioUnit;
    id /* block */  _playingNodeRenderBlock;
    struct shared_ptr<AudioStreamRecordingManager::StreamWriter> { 
        struct StreamWriter {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _recordingStreamWriter;
    id  _resource;
    AVAudioMixerNode * _sampleRateConverter;
    id /* block */  _sampleRateConverterRenderBlock;
    NSObject<OS_dispatch_queue> * _serialWorkQueue;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _shouldDispatchCompletion;
}

@property (readonly) bool isPrepared;
@property (nonatomic) unsigned char missedPlayStrategy;
@property (copy) id /* block */ playbackStateDidChange;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialWorkQueue;
@property (readonly) unsigned long long state;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_playbackCompletionCallback;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (void)changePlaybackStateTo:(unsigned long long)arg1;
- (id)channelCapabilities;
- (void)dealloc;
- (void)deallocateRenderResources;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id /* block */)internalRenderBlock;
- (bool)isPrepared;
- (unsigned char)missedPlayStrategy;
- (id)outputBusses;
- (id /* block */)playbackStateDidChange;
- (void)prepareToPlayBuffer:(id)arg1 withLayoutTag:(unsigned int)arg2 looping:(bool)arg3;
- (void)prepareToPlayFile:(id)arg1 withLayoutTag:(unsigned int)arg2 looping:(bool)arg3;
- (double)sampleRate;
- (void)scheduleMachStartTime:(unsigned long long)arg1 fromEventTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 useMissedPlayStrategy:(bool)arg3;
- (id)serialWorkQueue;
- (void)setMissedPlayStrategy:(unsigned char)arg1;
- (void)setPlaybackStateDidChange:(id /* block */)arg1;
- (void)setSerialWorkQueue:(id)arg1;
- (unsigned long long)state;
- (void)stop;

@end
