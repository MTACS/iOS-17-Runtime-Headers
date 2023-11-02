
@interface CNCompositionInfo : CNAssetInfo

@property (readonly) AVMutableCompositionTrack *cinematicDisparityTrack;
@property (readonly) AVMutableCompositionTrack *cinematicMetadataTrack;
@property (readonly) AVMutableCompositionTrack *cinematicVideoTrack;

- (bool)insertTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 ofCinematicAssetInfo:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(id*)arg4;

@end
