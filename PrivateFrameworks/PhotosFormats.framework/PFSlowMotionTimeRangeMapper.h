
@interface PFSlowMotionTimeRangeMapper : NSObject {
    NSMutableArray * _originalLengths;
    NSMutableArray * _scaledLengths;
    NSMutableArray * _scaledRegions;
}

- (void).cxx_destruct;
- (float)_mapTime:(float)arg1 fromLengths:(id)arg2 toLengths:(id)arg3;
- (void)addNextRange:(float)arg1 scaledLength:(float)arg2;
- (void)enumerateScaledRegionsUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)markScaledRegionWithRate:(float)arg1 rampInStartTime:(float)arg2 rampInEndTime:(float)arg3 rampOutStartTime:(float)arg4 rampOutEndTime:(float)arg5;
- (float)originalTimeForScaledTime:(float)arg1;
- (float)scaledTimeForOriginalTime:(float)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })scaledTimeRangeForOriginalTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;

@end
