
@interface PIRetouchCacheNode : NUCacheNode {
    NSString * _baseIdentifier;
    unsigned long long  _baseStrokeIndex;
    <NUMutableBufferImage> * _inputImage;
    NURegion * _inputRegion;
    NSString * _outputKey;
    NURegion * _outputRegion;
    NSObject<OS_dispatch_queue> * _retouchQueue;
}

@property (nonatomic, readonly) long long padding;

+ (id)nodeWithInput:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;

- (void).cxx_destruct;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_modifyEvaluatedGeometry:(id)arg1;
- (void)_resolveSourceWithResponse:(id)arg1;
- (bool)_setupRenderRequest:(id)arg1 error:(out id*)arg2;
- (bool)_tryLoad:(out id*)arg1;
- (void)_updateDigest:(id)arg1 forStroke:(id)arg2;
- (void)_updateInputRegion:(id)arg1 outputRegion:(id)arg2 forStroke:(id)arg3 geometry:(id)arg4;
- (id)baseIdentifier;
- (id)descriptionSubClassHook;
- (id)initWithInput:(id)arg1 settings:(id)arg2 subsampleFactor:(long long)arg3;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (id)outputRegion;
- (long long)padding;
- (id)persistentURL;
- (void)resolveWithInputImage:(id)arg1 retouchStrokes:(id)arg2 cacheKey:(id)arg3;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (id)retouchInputNode;
- (long long)subsampleFactorForScale:(struct { long long x1; long long x2; })arg1;
- (bool)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2;

@end
