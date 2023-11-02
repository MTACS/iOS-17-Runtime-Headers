
@interface NUAffineTransformNode : NUTransformNode {
    NUImageTransformAffine * _transform;
}

- (void).cxx_destruct;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_transformWithError:(out id*)arg1;
- (id)debugQuickLookObject;
- (id)initWithAffineTransform:(id)arg1 input:(id)arg2;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;

@end
