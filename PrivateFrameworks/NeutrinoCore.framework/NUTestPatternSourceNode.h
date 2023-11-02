
@interface NUTestPatternSourceNode : NUSourceNode {
    long long  _orientation;
    struct { 
        long long numerator; 
        long long denominator; 
    }  _scale;
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (id)initWithSettings:(id)arg1;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 orientation:(long long)arg2;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 orientation:(long long)arg2 scale:(struct { long long x1; long long x2; })arg3;
- (struct { long long x1; long long x2; })pixelSizeWithSourceOptions:(id)arg1;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (long long)sourceOrientation;
- (bool)supportsPipelineState:(id)arg1 error:(out id*)arg2;

@end
