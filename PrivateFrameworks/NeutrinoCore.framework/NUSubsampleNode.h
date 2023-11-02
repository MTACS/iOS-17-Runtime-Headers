
@interface NUSubsampleNode : NUAbstractScaleNode {
    long long  _appliedSubsampleFactor;
    NSDictionary * _pipelineSettings;
    NUSourceContainerNode * _sourceContainer;
    NSDictionary * _sourceOptions;
    long long  _subsampleFactor;
}

@property long long appliedSubsampleFactor;
@property (readonly) NSDictionary *pipelineSettings;
@property (readonly) NUSourceContainerNode *sourceContainer;
@property (readonly) NSDictionary *sourceOptions;
@property (readonly) long long subsampleFactor;

+ (long long)subsampleFactorForScale:(struct { long long x1; long long x2; })arg1 additionalScale:(struct { long long x1; long long x2; }*)arg2;

- (void).cxx_destruct;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_evaluateImageProperties:(out id*)arg1;
- (id)_evaluateVideoComposition:(out id*)arg1;
- (id)_evaluateVideoProperties:(out id*)arg1;
- (id)_sourceNode;
- (long long)appliedSubsampleFactor;
- (id)debugQuickLookObject;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithPreparedSource:(id)arg1 container:(id)arg2 pipelineSettings:(id)arg3 sourceOptions:(id)arg4;
- (id)initWithSubsampleFactor:(long long)arg1 source:(id)arg2 container:(id)arg3 pipelineSettings:(id)arg4 sourceOptions:(id)arg5;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (id)pipelineSettings;
- (long long)resolveSubsampleFactorForPipelineState:(id)arg1 error:(out id*)arg2;
- (long long)resolveSubsampleFactorForPipelineState:(id)arg1 sourceScale:(struct { long long x1; long long x2; })arg2;
- (void)setAppliedSubsampleFactor:(long long)arg1;
- (id)sourceContainer;
- (id)sourceOptions;
- (long long)subsampleFactor;

@end
