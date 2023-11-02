
@interface NUCISourceNode : NUSourceNode {
    CIImage * _image;
    long long  _orientation;
}

- (void).cxx_destruct;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (id)initWithImage:(id)arg1 identifier:(id)arg2 orientation:(long long)arg3;
- (id)initWithImage:(id)arg1 settings:(id)arg2 orientation:(long long)arg3;
- (id)initWithSettings:(id)arg1;
- (struct { long long x1; long long x2; })pixelSizeWithSourceOptions:(id)arg1;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (long long)sourceOrientation;
- (bool)supportsPipelineState:(id)arg1 error:(out id*)arg2;

@end
