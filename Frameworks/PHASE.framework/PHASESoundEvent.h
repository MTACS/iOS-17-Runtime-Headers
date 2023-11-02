
@interface PHASESoundEvent : NSObject <MetaParameterValueProtocol> {
    struct shared_ptr<Phase::ActionTreeObject> { 
        struct ActionTreeObject {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _actionTreeObject;
    AVAudioSession * _audioSession;
    struct CachedTapInfo { 
        int clientPID; 
        unsigned int audioSessionToken; 
        bool isSiri; 
        NSString *sceneIdentifier; 
    }  _cachedTapInfo;
    PHASEEngine * _engine;
    bool  _indefinite;
    unsigned long long  _ioStartHostTime;
    bool  _isIndefinite;
    NSDictionary * _metaParameters;
    NSDictionary * _mixers;
    long long  _prepareState;
    unsigned long long  _preparedHostTime;
    PHASESoundPrototype * _protoType;
    NSDictionary * _pushStreamNodes;
    long long  _renderingState;
    bool  _startCalled;
    struct vector<Phase::UniqueObjectId, std::allocator<Phase::UniqueObjectId>> { 
        struct UniqueObjectId {} *__begin_; 
        struct UniqueObjectId {} *__end_; 
        struct __compressed_pair<Phase::UniqueObjectId *, std::allocator<Phase::UniqueObjectId>> { 
            struct UniqueObjectId {} *__value_; 
        } __end_cap_; 
    }  _submixIds;
}

@property (readonly) AVAudioSession *audioSession;
@property (getter=isIndefinite, readonly) bool indefinite;
@property (readonly) unsigned long long ioStartHostTime;
@property (readonly) bool isIndefinite;
@property (readonly, copy) NSDictionary *metaParameters;
@property (readonly, copy) NSDictionary *mixers;
@property (readonly) long long prepareState;
@property (readonly) unsigned long long preparedHostTime;
@property (readonly, copy) NSDictionary *pushStreamNodes;
@property (readonly) long long renderingState;

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)audioSession;
- (id)description;
- (id)getActionTreeMetaParameterNames;
- (void*)getActionTreeObject;
- (unsigned long long)hash;
- (bool)indefinite;
- (id)init;
- (id)initWithEngine:(id)arg1 actionTreeRootNode:(id)arg2 mixerParameters:(id)arg3 outError:(id*)arg4;
- (id)initWithEngine:(id)arg1 actionTreeRootNode:(id)arg2 outError:(id*)arg3;
- (id)initWithEngine:(id)arg1 actionTreeRootNode:(id)arg2 source:(id)arg3 listener:(id)arg4 outError:(id*)arg5;
- (id)initWithEngine:(id)arg1 assetIdentifier:(id)arg2 error:(id*)arg3;
- (id)initWithEngine:(id)arg1 assetIdentifier:(id)arg2 mixerParameters:(id)arg3 error:(id*)arg4;
- (id)initWithEngine:(id)arg1 assetIdentifier:(id)arg2 source:(id)arg3 listener:(id)arg4 error:(id*)arg5;
- (id)initWithEngine:(id)arg1 registeredActionTreeUID:(id)arg2 mixerParameters:(id)arg3 outError:(id*)arg4;
- (id)initWithEngine:(id)arg1 registeredActionTreeUID:(id)arg2 outError:(id*)arg3;
- (id)initWithEngine:(id)arg1 registeredActionTreeUID:(id)arg2 source:(id)arg3 listener:(id)arg4 outError:(id*)arg5;
- (id)initWithEngine:(id)arg1 registeredSoundEventNodeAsset:(id)arg2 mixerParameters:(id)arg3 outError:(id*)arg4;
- (id)initWithEngine:(id)arg1 registeredSoundEventNodeAsset:(id)arg2 outError:(id*)arg3;
- (id)initWithEngine:(id)arg1 registeredSoundEventNodeAsset:(id)arg2 source:(id)arg3 listener:(id)arg4 outError:(id*)arg5;
- (id)initWithEngine:(id)arg1 registeredSoundEventNodeAssetUID:(id)arg2 mixerParameters:(id)arg3 error:(id*)arg4;
- (id)initWithEngine:(id)arg1 registeredSoundEventNodeAssetUID:(id)arg2 source:(id)arg3 listener:(id)arg4 outError:(id*)arg5;
- (id)initWithEngine:(id)arg1 rootNode:(id)arg2 error:(id*)arg3;
- (id)initWithEngine:(id)arg1 rootNode:(id)arg2 mixerParameters:(id)arg3 error:(id*)arg4;
- (id)initWithEngine:(id)arg1 rootNode:(id)arg2 source:(id)arg3 listener:(id)arg4 error:(id*)arg5;
- (id)initWithEngine:(id)arg1 soundPrototype:(id)arg2 error:(id*)arg3;
- (id)initWithEngine:(id)arg1 soundPrototype:(id)arg2 mixerParameters:(id)arg3 error:(id*)arg4;
- (id)initWithEngine:(id)arg1 soundPrototype:(id)arg2 source:(id)arg3 listener:(id)arg4 error:(id*)arg5;
- (id)initWithEngine:(id)arg1 soundPrototype:(id)arg2 source:(id)arg3 listener:(id)arg4 outError:(id*)arg5;
- (void)internalCleanup;
- (id)internalGetActionTreeMetaParameters;
- (id)internalGetActionTreeMixersWithMixerParameters:(id)arg1 actionTreeAsset:(const void*)arg2 outError:(id*)arg3;
- (id)internalGetActionTreePushStreamNodes:(id)arg1;
- (bool)internalPrepareActionTreeWithCompletionBlock:(id /* block */)arg1;
- (bool)internalStartActionTreeWithCompletionBlock:(id /* block */)arg1;
- (unsigned long long)ioStartHostTime;
- (bool)isEqual:(id)arg1;
- (bool)isIndefinite;
- (bool)isIndefinite;
- (id)metaParameters;
- (id)mixers;
- (void)pause;
- (bool)prepareAndReturnError:(id*)arg1;
- (long long)prepareState;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (void)prepareWithCompletionBlock:(id /* block */)arg1;
- (void)prepareWithCompletionHandler:(id /* block */)arg1;
- (void)prepareWithSessionIOBinding:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)preparedHostTime;
- (id)pushStreamNodes;
- (void)registerTapSources;
- (long long)renderingState;
- (void)resume;
- (void)seekToTime:(double)arg1 completion:(id /* block */)arg2;
- (bool)seekToTime:(double)arg1 completionBlock:(id /* block */)arg2;
- (bool)seekToTime:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)setMetaParameter:(id)arg1 value:(id)arg2;
- (void)setMetaParameter:(id)arg1 value:(double)arg2 withTimeInterval:(double)arg3;
- (void)setPrepareState:(long long)arg1;
- (void)setRenderingState:(long long)arg1;
- (bool)startAndReturnError:(id*)arg1;
- (void)startWithCompletion:(id /* block */)arg1;
- (bool)startWithCompletionBlock:(id /* block */)arg1;
- (bool)startWithCompletionHandler:(id /* block */)arg1;
- (void)stopAndDestroy;
- (void)stopAndInvalidate;
- (void)unregisterTapSources;
- (bool)validateAudioSessionWithError:(id*)arg1;

@end
