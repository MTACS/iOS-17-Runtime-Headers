
@interface NUCacheNode : NURenderNode {
    NSString * _cachedCacheIdentifier;
    NSObject<OS_dispatch_group> * _group;
    NSObject<OS_dispatch_queue> * _queue;
    NURenderContext * _renderContext;
    NSError * _sourceError;
    NUSourceNode * _sourceNode;
    long long  _subsampleFactor;
}

@property (nonatomic, readonly) NSString *cacheIdentifier;
@property (retain) NSString *cachedCacheIdentifier;
@property (nonatomic, readonly) NURenderNode *inputNode;
@property (nonatomic, readonly) long long subsampleFactor;

+ (void)_ensureCacheDirectoryURL:(id)arg1;
+ (long long)_maxCacheDirectorySize;
+ (void)_pruneCacheDirectory:(id)arg1 toSize:(long long)arg2;
+ (id)cacheDirectoryURL;
+ (void)clearCacheDirectory;
+ (id)nodeWithInput:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
+ (id)registry;

- (void).cxx_destruct;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoComposition:(out id*)arg1;
- (unsigned long long)_hash;
- (void)_resolveWithSourceNode:(id)arg1 error:(id)arg2;
- (id)cacheIdentifier;
- (id)cachedCacheIdentifier;
- (id)descriptionSubClassHook;
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id*)arg2;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithInput:(id)arg1 settings:(id)arg2 subsampleFactor:(long long)arg3;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)inputNode;
- (bool)installTemporaryURL:(id)arg1 intoPersistentURL:(id)arg2 error:(out id*)arg3;
- (bool)isEqualToRenderNode:(id)arg1;
- (bool)isResolved;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (void)nu_updateDigest:(id)arg1;
- (id)persistentURL;
- (id)persistentURLPrefix;
- (bool)requiresAudioMix;
- (bool)requiresVideoComposition;
- (void)resolveSourceWithResponse:(id)arg1;
- (void)resolveWithSourceNode:(id)arg1 error:(id)arg2;
- (id)resolvedSourceNode:(out id*)arg1;
- (long long)sampleMode;
- (void)setCachedCacheIdentifier:(id)arg1;
- (long long)subsampleFactor;
- (long long)subsampleFactorForScale:(struct { long long x1; long long x2; })arg1;
- (id)temporaryURLPrefix;
- (bool)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2;

@end