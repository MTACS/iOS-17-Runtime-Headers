
@interface NUOrientationNode : NUTransformNode {
    long long  _orientation;
    NUImageTransform * _transform;
}

@property (readonly) long long orientation;
@property (retain) NUImageTransform *transform;

+ (id)applyOrientation:(long long)arg1 to:(id)arg2;

- (void).cxx_destruct;
- (id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id*)arg2;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoProperties:(out id*)arg1;
- (id)_transformWithError:(out id*)arg1;
- (bool)canPropagateOriginalAuxiliaryData;
- (id)initWithOrientation:(long long)arg1 input:(id)arg2;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (bool)isGeometryNode;
- (long long)orientation;
- (long long)outputImageOrientation:(long long)arg1;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (void)setTransform:(id)arg1;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)transform;

@end
