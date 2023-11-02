
@interface NUMuteAudioNode : NURenderNode

- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)initWithInput:(id)arg1;
- (bool)requiresAudioMix;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
