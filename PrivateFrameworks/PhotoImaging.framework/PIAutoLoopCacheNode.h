
@interface PIAutoLoopCacheNode : NUVideoCacheNode

+ (id)nodeWithInput:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;

- (id)descriptionSubClassHook;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2;
- (id)outputSettings:(out id*)arg1;
- (id)persistentLongExposureURL;
- (id)persistentMaskURL;
- (id)persistentURL;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (long long)subsampleFactorForScale:(struct { long long x1; long long x2; })arg1;

@end
