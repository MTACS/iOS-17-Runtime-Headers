
@interface NUResampleNode : NUAbstractScaleNode {
    long long  _sampleMode;
    long long  _subsampleFactor;
    NUSubsampleNode * _subsampleNode;
}

@property (readonly) long long sampleMode;
@property (readonly) long long subsampleFactor;
@property (readonly) NUSubsampleNode *subsampleNode;

- (void).cxx_destruct;
- (struct { long long x1; long long x2; })_additionalScale;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithPreparedInput:(id)arg1 subsampleNode:(id)arg2;
- (id)initWithSubsampleFactor:(long long)arg1 sampleMode:(long long)arg2 source:(id)arg3 subsampleNode:(id)arg4;
- (bool)isGeometryNode;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (long long)sampleMode;
- (long long)subsampleFactor;
- (id)subsampleNode;

@end
