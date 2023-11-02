
@interface PHASEEngine : NSObject {
    PHASEGroupPreset * _activeGroupPreset;
    PHASEAssetRegistry * _assetRegistry;
    double  _balance;
    PHASEMedium * _defaultMedium;
    long long  _defaultPrivateReverbPreset;
    NSMutableDictionary * _duckers;
    long long  _experience;
    NSMutableDictionary * _groups;
    struct unique_ptr<PHASEEngineImpl, std::default_delete<PHASEEngineImpl>> { 
        struct __compressed_pair<PHASEEngineImpl *, std::default_delete<PHASEEngineImpl>> { 
            struct PHASEEngineImpl {} *__value_; 
        } __ptr_; 
    }  _impl;
    NSMutableArray * _internalSoundEvents;
    double  _maxGainDbSpl;
    long long  _outputSpatializationMode;
    PHASEObject * _rootObject;
    double  _sampleRate;
    long long  _sceneClassification;
    struct StopWatch<std::chrono::steady_clock> { 
        struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { 
            struct duration<long long, std::ratio<1, 1000000000>> { 
                long long __rep_; 
            } __d_; 
        } mStart; 
    }  _stopWatch;
    PHASETapInterfaceImpl * _tapInterfaceImpl;
    PHASETapRegistry * _tapRegistry;
    double  _unitsPerMeter;
    double  _unitsPerSecond;
}

@property (nonatomic, readonly) PHASEGroupPreset *activeGroupPreset;
@property (nonatomic, readonly) PHASEAssetRegistry *assetRegistry;
@property (nonatomic, retain) PHASEMedium *defaultMedium;
@property (nonatomic) long long defaultPrivateReverbPreset;
@property (nonatomic) long long defaultReverbPreset;
@property (nonatomic, readonly, copy) NSArray *duckers;
@property (nonatomic, readonly) long long engineMode;
@property (nonatomic, readonly, copy) NSDictionary *groups;
@property (nonatomic, readonly) void*implementation;
@property (nonatomic) double maximumGainDbSpl;
@property (nonatomic) long long outputSpatializationMode;
@property (nonatomic) long long overrideOutputSpatializationMode;
@property (nonatomic, readonly) long long renderingState;
@property (nonatomic, readonly) PHASEObject *rootObject;
@property (nonatomic, readonly) double sampleRate;
@property (nonatomic) long long sceneClassification;
@property (nonatomic, readonly, copy) NSArray *soundEvents;
@property (nonatomic, readonly) PHASETapRegistry *tapRegistry;
@property (nonatomic) double unitsPerMeter;
@property (nonatomic) double unitsPerSecond;

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)activeGroupPreset;
- (void)addDucker:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)addSoundEvent:(id)arg1;
- (id)assetRegistry;
- (void)clearProfileOverride;
- (void)dealloc;
- (id)defaultMedium;
- (long long)defaultPrivateReverbPreset;
- (long long)defaultReverbPreset;
- (void)destroy;
- (id)duckers;
- (long long)engineMode;
- (void)gatherExternalStreamDebugInformation:(id /* block */)arg1;
- (id)groups;
- (void*)implementation;
- (id)init;
- (bool)initInternalWithUpdateMode:(long long)arg1 engineMode:(long long)arg2 platform:(id)arg3;
- (id)initWithEngineMode:(long long)arg1 updateMode:(long long)arg2;
- (id)initWithPlatform:(id)arg1;
- (id)initWithSampleRate:(double)arg1 updateMode:(long long)arg2;
- (id)initWithUpdateMode:(long long)arg1;
- (id)initWithUpdateMode:(long long)arg1 engineMode:(long long)arg2;
- (id)initWithUpdateMode:(long long)arg1 engineMode:(long long)arg2 platform:(id)arg3;
- (double)maximumGainDbSpl;
- (long long)outputSpatializationMode;
- (long long)overrideOutputSpatializationMode;
- (void)pause;
- (void)removeDucker:(id)arg1;
- (void)removeGroup:(id)arg1;
- (void)removeSoundEvent:(id)arg1;
- (long long)renderingState;
- (id)rootObject;
- (double)sampleRate;
- (long long)sceneClassification;
- (void)setBalance:(double)arg1;
- (void)setDefaultMedium:(id)arg1;
- (void)setDefaultPrivateReverbPreset:(long long)arg1;
- (void)setDefaultReverbPreset:(long long)arg1;
- (void)setExperience:(long long)arg1;
- (bool)setHeadphoneHRIRFile:(id)arg1 error:(id*)arg2;
- (void)setInternalActiveGroupMixerPreset:(id)arg1;
- (void)setMaximumGainDbSpl:(double)arg1;
- (void)setOutputSpatializationMode:(long long)arg1;
- (void)setOverrideOutputSpatializationMode:(long long)arg1;
- (void)setProfileOverride:(id)arg1 experience:(id)arg2 faceCount:(int)arg3 balance:(double)arg4;
- (void)setProfileOverrideWithName:(id)arg1 balance:(double)arg2;
- (void)setSceneClassification:(long long)arg1;
- (void)setSpatialCategoryBandCount:(unsigned long long)arg1 withName:(id)arg2;
- (void)setSpatialCategoryMaxClusterCount:(unsigned long long)arg1 withName:(id)arg2;
- (void)setSpatialCategoryUpdateRate:(float)arg1 withName:(id)arg2;
- (void)setUnitsPerMeter:(double)arg1;
- (void)setUnitsPerSecond:(double)arg1;
- (id)soundEvents;
- (bool)startAndReturnError:(id*)arg1;
- (void)stop;
- (id)tapRegistry;
- (double)unitsPerMeter;
- (double)unitsPerSecond;
- (void)update;

@end
