
@interface PIVideoCrossfadeLoopNode : NURenderNode {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _crossfadeDuration;
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
    }  _loopTimeRange;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } crossfadeDuration;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } loopTimeRange;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;

- (id)_evaluateAudioMix:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoComposition:(out id*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })crossfadeDuration;
- (id)initWithInput:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 crossfadeDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)input;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })loopTimeRange;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (bool)requiresAudioMix;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;

@end
