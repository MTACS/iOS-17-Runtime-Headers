
@interface NUClampNode : NURenderNode

- (id)_evaluateImage:(out id*)arg1;
- (id)initWithInput:(id)arg1;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
