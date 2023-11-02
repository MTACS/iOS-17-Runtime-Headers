
@protocol PXStoryPacingCueSource

@required

- (<PXAudioCueSource> *)audioCueSource;
- (long long)cuesVersion;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (NSString *)diagnosticCueStringForSize:(struct CGSize { double x1; double x2; })arg1 withIndicatorTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 rangeIndicatorTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;

@end
