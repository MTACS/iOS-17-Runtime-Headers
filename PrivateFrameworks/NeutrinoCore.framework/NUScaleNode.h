
@interface NUScaleNode : NUAbstractScaleNode {
    struct { 
        long long numerator; 
        long long denominator; 
    }  _effectiveScale;
    long long  _sampleMode;
    struct { 
        long long numerator; 
        long long denominator; 
    }  _targetScale;
}

@property (readonly) struct { long long x1; long long x2; } effectiveScale;
@property (readonly) struct { long long x1; long long x2; } targetScale;

- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_settingsWithTargetScale:(struct { long long x1; long long x2; })arg1 effectiveScale:(struct { long long x1; long long x2; })arg2 sampleMode:(long long)arg3;
- (struct { long long x1; long long x2; })effectiveScale;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithPipelineState:(id)arg1 input:(id)arg2;
- (id)initWithScale:(struct { long long x1; long long x2; })arg1 sampleMode:(long long)arg2 input:(id)arg3;
- (id)initWithTargetScale:(struct { long long x1; long long x2; })arg1 effectiveScale:(struct { long long x1; long long x2; })arg2 sampleMode:(long long)arg3 input:(id)arg4;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (struct { long long x1; long long x2; })targetScale;

@end
