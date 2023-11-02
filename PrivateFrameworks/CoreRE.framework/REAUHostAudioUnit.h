
@interface REAUHostAudioUnit : AUAudioUnit {
    struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; } * _abl;
    float * _buffer;
    id /* block */  _cachedRenderBlock;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    unsigned int  _currentHostingMaxFramesToRender;
    double  _currentHostingSampleRate;
    unsigned int  _desiredLayoutTag;
    id /* block */  _didPrepareAudioUnit;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _hasTriggeredPrepareCallbackOnce;
    AUAudioUnitBus * _inputBus;
    AUAudioUnitBusArray * _inputBusArray;
    AVAudioFormat * _inputFormat;
    AUAudioUnitBus * _outputBus;
    AUAudioUnitBusArray * _outputBusArray;
    bool  _prepared;
    id /* block */  _pullInputOverride;
    struct shared_ptr<AudioStreamRecordingManager::StreamWriter> { 
        struct StreamWriter {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _recordingStreamWriter;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _running;
    bool  _shouldPrepareTargetOnAllocate;
    struct atomic<float> { 
        struct __cxx_atomic_impl<float, std::__cxx_atomic_base_impl<float>> { 
            _Atomic float __a_value; 
        } __a_; 
    }  _signalPresent;
    double  _signalPresentDecayPerSample;
    AUAudioUnit * _target;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _targetPreparationMutex;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) unsigned int desiredLayoutTag;
@property (nonatomic, copy) id /* block */ didPrepareAudioUnit;
@property (nonatomic, retain) AVAudioFormat *inputFormat;
@property (getter=isPrepared, nonatomic) bool prepared;
@property (nonatomic, copy) id /* block */ pullInputOverride;
@property (getter=isRunning, nonatomic) bool running;
@property (nonatomic) float signalPresent;
@property (nonatomic, retain) AUAudioUnit *target;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id)callbackQueue;
- (id)channelCapabilities;
- (void)dealloc;
- (void)deallocateRenderResources;
- (unsigned int)desiredLayoutTag;
- (id /* block */)didPrepareAudioUnit;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputFormat;
- (id /* block */)internalRenderBlock;
- (bool)isPrepared;
- (bool)isRunning;
- (id)outputBusses;
- (void)prepareTargetAU;
- (id /* block */)pullInputOverride;
- (void)setCallbackQueue:(id)arg1;
- (void)setDesiredLayoutTag:(unsigned int)arg1;
- (void)setDidPrepareAudioUnit:(id /* block */)arg1;
- (void)setInputFormat:(id)arg1;
- (void)setPrepared:(bool)arg1;
- (void)setPullInputOverride:(id /* block */)arg1;
- (void)setRunning:(bool)arg1;
- (void)setTarget:(id)arg1;
- (float)signalPresent;
- (id)target;

@end
