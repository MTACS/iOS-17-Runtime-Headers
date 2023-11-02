
@interface NUSlowMotionNode : NUTransformNode {
    NUGeometryTransform * _geomTransform;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _range;
    float  _rate;
}

@property (readonly) NUGeometryTransform *geomTransform;
@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } range;
@property (readonly) float rate;

- (void).cxx_destruct;
- (id)_evaluateAudioMix:(out id*)arg1;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoComposition:(out id*)arg1;
- (id)_transformWithError:(out id*)arg1;
- (id)geomTransform;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rate:(float)arg2 input:(id)arg3;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })range;
- (float)rate;
- (bool)requiresAudioMix;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
