
@interface NUAuxiliaryImageCacheNode : NUCacheNode

- (long long)auxiliaryImageType;
- (id)evaluateSettings:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (id)initWithInput:(id)arg1 auxiliaryImageType:(long long)arg2;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (id)persistentURL;
- (void)resolveSourceWithPixelBuffer:(struct __CVBuffer { }*)arg1;
- (bool)sourceSupportsAuxiliaryImage;
- (long long)subsampleFactorForScale:(struct { long long x1; long long x2; })arg1;
- (bool)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2;

@end
