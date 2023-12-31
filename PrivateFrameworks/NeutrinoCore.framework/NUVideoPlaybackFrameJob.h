
@interface NUVideoPlaybackFrameJob : NURenderJob

- (id)frameRequest;
- (id)initWithRequest:(id)arg1;
- (id)initWithVideoFrameRequest:(id)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (bool)render:(out id*)arg1;
- (id)renderer:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (bool)wantsCompleteStage;
- (bool)wantsOutputVideoFrame;
- (bool)wantsPrepareNodeCached;
- (bool)wantsRenderNodeCached;

@end
