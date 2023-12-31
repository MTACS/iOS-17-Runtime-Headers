
@interface NUCompositionSourceNode : NUSourceNode {
    NUComposition * _composition;
    struct { 
        long long width; 
        long long height; 
    }  _pixelSize;
    NURenderPipeline * _renderPipeline;
}

- (void).cxx_destruct;
- (id)_compositionRenderNodeForPipelineState:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)initWithComposition:(id)arg1 renderPipeline:(id)arg2 settings:(id)arg3;
- (id)initWithSettings:(id)arg1;
- (bool)load:(out id*)arg1;
- (struct { long long x1; long long x2; })pixelSizeWithSourceOptions:(id)arg1;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
