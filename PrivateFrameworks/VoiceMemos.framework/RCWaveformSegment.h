
@interface RCWaveformSegment : NSObject <NSSecureCoding> {
    NSData * _averagePowerLevelData;
    bool  _isRendered;
    struct { 
        double beginTime; 
        double endTime; 
    }  _timeRange;
}

@property (nonatomic, readonly) const float*averagePowerLevels;
@property (nonatomic, readonly) long long averagePowerLevelsCount;
@property (nonatomic) bool isRendered;
@property (nonatomic, readonly) struct { double x1; double x2; } timeRange;

+ (id)_discontinuityRepairedSegmentsByGrowingToFillGapsInSegments:(id)arg1;
+ (id)_mergedSegmentByFastMergingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2;
+ (id)_mergedSegmentByResamplingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2;
+ (id)_segmentByMergingMergableSegments:(id)arg1;
+ (id)_segmentsByJoiningSegment:(id)arg1 toSegmentIfNecessaryWithGreaterSegment:(id)arg2 averagePowerLevelJoinLimit:(unsigned long long)arg3;
+ (id)emptySegmentWithTimeRange:(struct { double x1; double x2; })arg1;
+ (void)initialize;
+ (id)segmentsByMergingSegments:(id)arg1 preferredSegmentDuration:(double)arg2;
+ (id)segmentsByMergingSegments:(id)arg1 preferredSegmentDuration:(double)arg2 beforeTime:(double)arg3 andThenUsePreferredSegmentDuration:(double)arg4;
+ (id)segmentsByReparingDiscontinuitiesInSegments:(id)arg1;
+ (id)segmentsByShiftingSegments:(id)arg1 byTimeOffset:(double)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTimeRange:(struct { double x1; double x2; })arg1 averagePowerLevelData:(id)arg2;
- (id)_segmentWithValuesInContainedTimeRange:(struct { double x1; double x2; })arg1;
- (id)_segmentsByJoiningIfNecessaryGreaterSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned long long)arg2;
- (const float*)averagePowerLevels;
- (long long)averagePowerLevelsCount;
- (id)copyWithAdjustedTimeRange:(struct { double x1; double x2; })arg1;
- (id)copyWithTimeRangeOffsetByTimeOffset:(double)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasUniformPowerLevel:(float)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeRange:(struct { double x1; double x2; })arg1 averagePowerLevelData:(id)arg2;
- (id)initWithTimeRange:(struct { double x1; double x2; })arg1 averagePowerLevelVector:(void*)arg2;
- (bool)isRendered;
- (bool)isWaveformDataAlmostEqualToDataInSegment:(id)arg1;
- (bool)isWaveformDataEqualToDataInSegment:(id)arg1;
- (id)segmentByClippingToTimeRange:(struct { double x1; double x2; })arg1;
- (id)segmentsByJoiningIfSmallSegment:(id)arg1;
- (id)segmentsByJoiningIfSmallSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned long long)arg2;
- (void)setIsRendered:(bool)arg1;
- (id)simpleDescription;
- (struct { double x1; double x2; })timeRange;
- (id)verboseDescription;

@end
