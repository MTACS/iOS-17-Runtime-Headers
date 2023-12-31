
@interface NURenderPipeline : NSObject

- (id)_processedRenderNodeForComposition:(id)arg1 input:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (id)_runPipelineFiltersForRenderNode:(id)arg1 composition:(id)arg2 pipelineState:(id)arg3 error:(id*)arg4;
- (id)processedRenderNodeForComposition:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;

@end
