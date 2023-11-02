
@interface REPHASEContext : NSObject {
    struct unique_ptr<re::HashTable<unsigned long long, REPHASESoundAsset>, std::function<void (re::HashTable<unsigned long long, REPHASESoundAsset> *)>>="__ptr_"{__compressed_pair<re::HashTable<unsigned long long, REPHASESoundAsset> *, std::function<void (re::HashTable<unsigned long long, REPHASESoundAsset> *)>>="__value_"^v"__value_"{function<void (re::HashTable<unsigned long long, REPHASESoundAsset> *)>="__f_"{__value_func<void (re::HashTable<unsigned long long, REPHASESoundAsset> *)>="__buf_"{type="__lx"[24C] {}  _audioAssets;
    struct UnfairLock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } m_lock; 
    }  _audioAssetsMutex;
    struct UnfairLock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } m_lock; 
    }  _audioEngineMutex;
    bool  _automaticUpdate;
    NSURL * _customHRIRURL;
    PHASENumberMetaParameterDefinition * _directSendParamDefinition;
    PHASEEngine * _engine;
    bool  _engineIsConfiguredForAutomaticUpdate;
    PHASENumberMetaParameterDefinition * _gainLinearParamDefinition;
    PHASECardioidDirectivityModelParameters * _humanDirectivity;
    unsigned int  _maxBufferSize;
    NSMutableDictionary * _mixGroups;
    int  _mixerDefNameCounter;
    PHASENumberMetaParameterDefinition * _rateParamDefinition;
    double  _referenceGainDBSPL;
    long long  _reverbPreset;
    PHASENumberMetaParameterDefinition * _reverbSendParamDefinition;
    double  _sampleRate;
    struct unique_ptr<re::HashTable<unsigned long long, REPHASEAudioScene *>, std::function<void (re::HashTable<unsigned long long, REPHASEAudioScene *> *)>>="__ptr_"{__compressed_pair<re::HashTable<unsigned long long, REPHASEAudioScene *> *, std::function<void (re::HashTable<unsigned long long, REPHASEAudioScene *> *)>>="__value_"^v"__value_"{function<void (re::HashTable<unsigned long long, REPHASEAudioScene *> *)>="__f_"{__value_func<void (re::HashTable<unsigned long long, REPHASEAudioScene *> *)>="__buf_"{type="__lx"[24C] {}  _scenes;
    struct unique_ptr<re::HashTable<unsigned long long, PHASEShape *>, std::function<void (re::HashTable<unsigned long long, PHASEShape *> *)>>="__ptr_"{__compressed_pair<re::HashTable<unsigned long long, PHASEShape *> *, std::function<void (re::HashTable<unsigned long long, PHASEShape *> *)>>="__value_"^v"__value_"{function<void (re::HashTable<unsigned long long, PHASEShape *> *)>="__f_"{__value_func<void (re::HashTable<unsigned long long, PHASEShape *> *)>="__buf_"{type="__lx"[24C] {}  _shapes;
    PHASEObject * _sharedSimulationWorldRootObject;
    bool  _shouldPostNotificationWhenPHASESoundEventCreated;
    struct unique_ptr<re::HashTable<unsigned long long, REPHASESoundEvent *>, std::function<void (re::HashTable<unsigned long long, REPHASESoundEvent *> *)>>="__ptr_"{__compressed_pair<re::HashTable<unsigned long long, REPHASESoundEvent *> *, std::function<void (re::HashTable<unsigned long long, REPHASESoundEvent *> *)>>="__value_"^v"__value_"{function<void (re::HashTable<unsigned long long, REPHASESoundEvent *> *)>="__f_"{__value_func<void (re::HashTable<unsigned long long, REPHASESoundEvent *> *)>="__buf_"{type="__lx"[24C] {}  _soundEvents;
    struct UnfairLock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } m_lock; 
    }  _soundEventsMutex;
    struct unique_ptr<re::HashTable<unsigned long long, bool>, std::function<void (re::HashTable<unsigned long long, bool> *)>>="__ptr_"{__compressed_pair<re::HashTable<unsigned long long, bool> *, std::function<void (re::HashTable<unsigned long long, bool> *)>>="__value_"^v"__value_"{function<void (re::HashTable<unsigned long long, bool> *)>="__f_"{__value_func<void (re::HashTable<unsigned long long, bool> *)>="__buf_"{type="__lx"[24C] {}  _soundEventsPreparing;
    struct UnfairLock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } m_lock; 
    }  _soundEventsPreparingMutex;
    long long  _spaceBlendTargetReverbPreset;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _stoppedAndDestroyed;
    bool  _testNilEngine;
}

@property (nonatomic) bool automaticUpdate;
@property (nonatomic, retain) NSURL *customHRIRURL;
@property (nonatomic, readonly) PHASENumberMetaParameterDefinition *directSendParamDefinition;
@property (readonly) PHASEEngine *engine;
@property (nonatomic, readonly) bool engineIsConfiguredForAutomaticUpdate;
@property (nonatomic, readonly) PHASENumberMetaParameterDefinition *gainLinearParamDefinition;
@property (nonatomic, readonly) PHASECardioidDirectivityModelParameters *humanDirectivity;
@property (nonatomic, readonly) unsigned int maxBufferSize;
@property (readonly) PHASEEngine *maybeEngine;
@property (nonatomic, readonly) NSMutableDictionary *mixGroups;
@property (nonatomic, readonly) PHASENumberMetaParameterDefinition *rateParamDefinition;
@property (nonatomic) long long reverbPreset;
@property (nonatomic, readonly) PHASENumberMetaParameterDefinition *reverbSendParamDefinition;
@property (nonatomic, readonly) double sampleRate;
@property (readonly) PHASEObject *sharedSimulationWorldRootObject;
@property (nonatomic) bool shouldPostNotificationWhenPHASESoundEventCreated;
@property (nonatomic) long long spaceBlendTargetReverbPreset;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAudioAssetID:(unsigned long long)arg1 asset:(id)arg2 configuration:(const struct AudioAssetConfiguration { bool x1; id x2; int x3; int x4; double x5; }*)arg3;
- (void)addEvent:(id)arg1 forToken:(unsigned long long)arg2;
- (float)allowableUpwardGainForAudioAssetID:(unsigned long long)arg1;
- (void)applyCustomHRIR;
- (void)applyReverbPreset;
- (bool)automaticUpdate;
- (id)baseMixerDefinitionWith:(id)arg1;
- (void)createPendingListenersIfReady;
- (id)createSamplerDefinitionForToken:(unsigned long long)arg1;
- (id)customHRIRURL;
- (id)directSendParamDefinition;
- (double)doubleFromPlistValue:(id)arg1 defaultValue:(double)arg2;
- (id)engine;
- (bool)engineIsConfiguredForAutomaticUpdate;
- (bool)engineShouldBeRunning;
- (bool)eventBeingPrepared:(unsigned long long)arg1;
- (id)eventFor:(unsigned long long)arg1;
- (id)gainLinearParamDefinition;
- (bool)getConfigurationForAudioAssetID:(unsigned long long)arg1 configuration:(struct AudioAssetConfiguration { bool x1; id x2; int x3; int x4; double x5; }*)arg2;
- (id)groupUDIDWithSceneID:(unsigned long long)arg1 playbackHostConnectionIdentifier:(unsigned long long)arg2 groupID:(unsigned long long)arg3;
- (id)humanDirectivity;
- (id)initWithSampleRate:(double)arg1 maxBufferSize:(unsigned int)arg2 referenceGain:(double)arg3 automaticUpdate:(bool)arg4;
- (void)loadHumanDirectivityPlistFromURL:(id)arg1;
- (unsigned int)maxBufferSize;
- (id)maybeEngine;
- (id)mixGroups;
- (id)mixerParametersForPrepareState:(id)arg1 source:(id)arg2 listener:(id)arg3 mixerIdentifiers:(id)arg4;
- (id)phaseGroupWithSceneID:(unsigned long long)arg1 playbackHostConnectionIdentifier:(unsigned long long)arg2 groupID:(unsigned long long)arg3;
- (id)phaseIDForAssetID:(unsigned long long)arg1;
- (void)postDidCreateSoundEventNotificationWithSource:(id)arg1 mixGroupID:(unsigned long long)arg2;
- (void)prepare:(id)arg1;
- (id)rateParamDefinition;
- (void)removeAudioAssetID:(unsigned long long)arg1;
- (void)removeEntity:(unsigned long long)arg1;
- (void)removeEventFor:(unsigned long long)arg1;
- (long long)reverbPreset;
- (id)reverbSendParamDefinition;
- (double)sampleRate;
- (id)samplerDefForFileAsset:(unsigned long long)arg1 with:(id)arg2;
- (id)sceneForID:(unsigned long long)arg1;
- (void*)scenes;
- (void)setAutomaticUpdate:(bool)arg1;
- (void)setCustomHRIRURL:(id)arg1;
- (void)setPreparing:(bool)arg1 forToken:(unsigned long long)arg2;
- (void)setReverbPreset:(long long)arg1;
- (void)setShouldPostNotificationWhenPHASESoundEventCreated:(bool)arg1;
- (void)setSpaceBlendTargetReverbPreset:(long long)arg1;
- (void*)shapes;
- (id)sharedSimulationWorldRootObject;
- (bool)shouldPostNotificationWhenPHASESoundEventCreated;
- (void*)soundEvents;
- (void*)soundEventsPreparing;
- (long long)spaceBlendTargetReverbPreset;
- (id)spatialMixerDefinition:(id)arg1;
- (void)stopAllAndReset;
- (void)testNilEngine;
- (void)update;

@end
