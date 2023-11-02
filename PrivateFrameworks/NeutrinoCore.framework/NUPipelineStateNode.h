
@interface NUPipelineStateNode : NURenderNode

- (id)_evaluateImage:(out id*)arg1;
- (id)debugQuickLookObject;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
