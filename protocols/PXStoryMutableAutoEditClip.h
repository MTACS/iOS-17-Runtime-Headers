
@protocol PXStoryMutableAutoEditClip <PXStoryAutoEditClip>

@required

- (struct { long long x1; long long x2; float x3; double x4; double x5; double x6; double x7; })audioInfo;
- (NSDictionary *)debugInfo;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })durationInfo;
- (double)durationMultiplier;
- (struct { long long x1; bool x2; bool x3; })moduleInfo;
- (struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })motionInfo;
- (long long)playbackStyle;
- (void)setAudioInfo:(struct { long long x1; long long x2; float x3; double x4; double x5; double x6; double x7; })arg1;
- (void)setDebugInfo:(NSDictionary *)arg1;
- (void)setDurationInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg1;
- (void)setDurationMultiplier:(double)arg1;
- (void)setModuleInfo:(struct { long long x1; bool x2; bool x3; })arg1;
- (void)setMotionInfo:(struct { long long x1; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; struct { unsigned long long x_2_2_1; } x_2_1_2; struct { unsigned long long x_3_2_1; } x_2_1_3; } x2; })arg1;
- (void)setPlaybackStyle:(long long)arg1;
- (void)setTransitionInfo:(struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; })arg1;
- (struct { long long x1; double x2; union { struct { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_3_1_1; struct { unsigned long long x_2_2_1; } x_3_1_2; struct { unsigned long long x_3_2_1; } x_3_1_3; struct { BOOL x_4_2_1; BOOL x_4_2_2; } x_3_1_4; } x3; })transitionInfo;

@end
