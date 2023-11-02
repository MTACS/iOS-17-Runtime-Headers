
@interface NUHDRGainMapNode : NURenderNode

- (id)initWithInput:(id)arg1 contentHeadroom:(double)arg2 displayHeadroom:(double)arg3;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
