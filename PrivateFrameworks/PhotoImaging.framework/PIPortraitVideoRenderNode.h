
@interface PIPortraitVideoRenderNode : NURenderNode

@property (nonatomic, readonly, copy) NSArray *apertureKeyframes;
@property (nonatomic, readonly) long long debugMode;
@property (nonatomic, readonly, copy) NSArray *disparityKeyframes;
@property (nonatomic, readonly) PTGlobalRenderingMetadata *globalMetadata;
@property (nonatomic, readonly) int renderQuality;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } renderTime;
@property (nonatomic, readonly) PIPortraitVideoMetadataSample *timedMetadata;

- (id)_evaluateImage:(out id*)arg1;
- (int)_portraitQualityForRenderScale:(struct { long long x1; long long x2; })arg1;
- (bool)_prewarmPortraitRendererWithPipelineState:(id)arg1 error:(out id*)arg2;
- (struct __CVBuffer { }*)_sourceBufferFromInput:(id)arg1 error:(out id*)arg2;
- (struct { long long x1; long long x2; })_targetScaleForScale:(struct { long long x1; long long x2; })arg1;
- (id)apertureKeyframes;
- (long long)debugMode;
- (id)disparityKeyframes;
- (id)globalMetadata;
- (id)initWithInput:(id)arg1 disparityInput:(id)arg2 disparityKeyframes:(id)arg3 apertureKeyframes:(id)arg4 debugMode:(long long)arg5;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (int)renderQuality;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })renderTime;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)sourceTransferFunction;
- (id)timedMetadata;
- (id)uniqueInputNode;
- (bool)useSourceBuffersDirectly;

@end
