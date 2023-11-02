
@interface NUCGAuxiliaryImageSourceNode : NUSourceNode {
    NUCGAuxiliaryImageProperties * _auxiliaryImageProperties;
    NUCGImageSourceNode * _sourceNode;
}

@property (readonly) long long auxiliaryImageType;
@property (retain) NUCGImageSourceNode *sourceNode;

- (void).cxx_destruct;
- (id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id*)arg2;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (long long)auxiliaryImageType;
- (bool)canPropagateOriginalAuxiliaryData;
- (id)initWithSettings:(id)arg1;
- (id)initWithSourceNode:(id)arg1 auxiliaryImageProperties:(id)arg2;
- (id)pipelineOptionsForPipelineState:(id)arg1 error:(out id*)arg2;
- (struct { long long x1; long long x2; })pixelSizeWithSourceOptions:(id)arg1;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (void)setSourceNode:(id)arg1;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)sourceNode;
- (long long)sourceOrientation;
- (bool)supportsPipelineState:(id)arg1 error:(out id*)arg2;

@end
