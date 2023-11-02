
@interface PIAutoLoopMirrorVideoNode : PIAutoLoopVideoNode

+ (int)fadeLengthForTrimRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 frameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })_conformTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)_evaluateAudioMix:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoComposition:(out id*)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (bool)requiresAudioMix;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;

@end
