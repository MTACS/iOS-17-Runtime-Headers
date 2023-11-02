
@interface NUIntermediateCacheNode : NUCacheNode

- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoComposition:(out id*)arg1;
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id*)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;

@end
