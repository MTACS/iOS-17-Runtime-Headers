
@interface NUSlowMotionUtilities : NSObject

+ (id)slowMotionAudioMixFromAsset:(id)arg1 rate:(float)arg2 range:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 error:(out id*)arg4;
+ (id)slowMotionVideoFromAsset:(id)arg1 rate:(float)arg2 range:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 error:(out id*)arg4;
+ (id)timeMapperForAssetDuration:(double)arg1 rate:(float)arg2 range:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 error:(out id*)arg4;

@end
