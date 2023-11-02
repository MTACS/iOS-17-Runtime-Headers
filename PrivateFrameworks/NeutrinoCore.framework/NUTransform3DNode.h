
@interface NUTransform3DNode : NUTransformNode {
    NUImageTransform3D * _transform;
}

- (void).cxx_destruct;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_transformWithError:(out id*)arg1;
- (id)debugQuickLookObject;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)initWithTransform3D:(id)arg1 input:(id)arg2;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;

@end
