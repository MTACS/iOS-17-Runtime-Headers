
@interface REPHASESoundPrepareState : NSObject {
    unsigned long long  _assetID;
    long long  _assetType;
    AVAudioFormat * _audioFormat;
    AVAudioSession * _audioSession;
    AUAudioUnit * _audioUnit;
    id /* block */  _completion;
    float  _directivityFocus;
    int  _directivityMode;
    PHASEDirectivityModelParameters * _directivityOverride;
    float  _directivitySphericalCapDiameter;
    float  _directivitySphericalCapOpeningAngle;
    unsigned long long  _entityID;
    NSUUID * _externalStreamUUID;
    struct vector<unsigned long long, std::allocator<unsigned long long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _fileGroupAssetIDs;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _hasSuccesfullyCompleted;
    PHASEDirectivityModelParameters * _humanDirectivity;
    unsigned char  _inputMode;
    unsigned int  _layoutTag;
    int  _loopCount;
    PHASEGroup * _mixGroup;
    unsigned long long  _mixGroupID;
    id /* block */  _playbackStateChangeHandler;
    unsigned long long  _playbackToken;
    bool  _randomizeStart;
    unsigned long long  _sceneID;
}

@property (nonatomic) unsigned long long assetID;
@property (nonatomic) long long assetType;
@property (nonatomic, retain) AVAudioFormat *audioFormat;
@property (nonatomic, retain) AVAudioSession *audioSession;
@property (nonatomic, retain) AUAudioUnit *audioUnit;
@property (nonatomic, readonly) AVAudioChannelLayout *channelLayout;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) float directivityFocus;
@property (nonatomic) int directivityMode;
@property (nonatomic, retain) PHASEDirectivityModelParameters *directivityOverride;
@property (nonatomic) float directivitySphericalCapDiameter;
@property (nonatomic) float directivitySphericalCapOpeningAngle;
@property (nonatomic) unsigned long long entityID;
@property (nonatomic, retain) NSUUID *externalStreamUUID;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<unsigned long long' */ struct  fileGroupAssetIDs; /* unknown property attribute:  std::allocator<unsigned long long>>=^Q}} */
@property (nonatomic, retain) PHASEDirectivityModelParameters *humanDirectivity;
@property (nonatomic) unsigned char inputMode;
@property (nonatomic) unsigned int layoutTag;
@property (nonatomic) int loopCount;
@property (nonatomic, retain) PHASEGroup *mixGroup;
@property (nonatomic) unsigned long long mixGroupID;
@property (nonatomic, copy) id /* block */ playbackStateChangeHandler;
@property (nonatomic) unsigned long long playbackToken;
@property (nonatomic) bool randomizeStart;
@property (nonatomic) unsigned long long sceneID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)assetID;
- (long long)assetType;
- (id)audioFormat;
- (id)audioSession;
- (id)audioUnit;
- (id)channelLayout;
- (id /* block */)completion;
- (float)directivityFocus;
- (int)directivityMode;
- (id)directivityOverride;
- (float)directivitySphericalCapDiameter;
- (float)directivitySphericalCapOpeningAngle;
- (unsigned long long)entityID;
- (id)externalStreamUUID;
- (struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *x_3_1_1; } x3; })fileGroupAssetIDs;
- (id)humanDirectivity;
- (id)initWithCompletion:(id /* block */)arg1;
- (unsigned char)inputMode;
- (unsigned int)layoutTag;
- (int)loopCount;
- (id)mixGroup;
- (unsigned long long)mixGroupID;
- (id /* block */)playbackStateChangeHandler;
- (unsigned long long)playbackToken;
- (bool)randomizeStart;
- (unsigned long long)sceneID;
- (void)setAssetID:(unsigned long long)arg1;
- (void)setAssetType:(long long)arg1;
- (void)setAudioFormat:(id)arg1;
- (void)setAudioSession:(id)arg1;
- (void)setAudioUnit:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDirectivityFocus:(float)arg1;
- (void)setDirectivityMode:(int)arg1;
- (void)setDirectivityOverride:(id)arg1;
- (void)setDirectivitySphericalCapDiameter:(float)arg1;
- (void)setDirectivitySphericalCapOpeningAngle:(float)arg1;
- (void)setEntityID:(unsigned long long)arg1;
- (void)setExternalStreamUUID:(id)arg1;
- (void)setFileGroupAssetIDs:(struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *x_3_1_1; } x3; })arg1;
- (void)setHumanDirectivity:(id)arg1;
- (void)setInputMode:(unsigned char)arg1;
- (void)setLayoutTag:(unsigned int)arg1;
- (void)setLoopCount:(int)arg1;
- (void)setMixGroup:(id)arg1;
- (void)setMixGroupID:(unsigned long long)arg1;
- (void)setPlaybackStateChangeHandler:(id /* block */)arg1;
- (void)setPlaybackToken:(unsigned long long)arg1;
- (void)setRandomizeStart:(bool)arg1;
- (void)setSceneID:(unsigned long long)arg1;

@end
