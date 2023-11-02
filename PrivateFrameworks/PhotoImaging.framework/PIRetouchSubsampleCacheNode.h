
@interface PIRetouchSubsampleCacheNode : PIRetouchCacheNode

- (id)_modifyEvaluatedGeometry:(id)arg1;
- (void)_updateInputRegion:(id)arg1 outputRegion:(id)arg2 forStroke:(id)arg3 geometry:(id)arg4;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (long long)padding;
- (void)resolveWithInputImage:(id)arg1 retouchStrokes:(id)arg2 cacheKey:(id)arg3;
- (id)retouchInputNode;
- (long long)subsampleFactorForScale:(struct { long long x1; long long x2; })arg1;

@end
