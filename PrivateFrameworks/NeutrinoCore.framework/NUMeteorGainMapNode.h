
@interface NUMeteorGainMapNode : NUFilterNode

- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)initWithFilter:(id)arg1 settings:(id)arg2 inputs:(id)arg3;
- (id)initWithFilterName:(id)arg1 settings:(id)arg2 inputs:(id)arg3;
- (id)initWithInput:(id)arg1 gainMapVersion:(id)arg2 gainMapParameters:(id)arg3;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;

@end
