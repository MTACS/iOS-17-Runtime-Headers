
@interface PXStoryRecombinedTimeline : PXStoryBaseTimeline {
    long long  _firstTargetSegmentIndex;
    long long  _lastSourceSegmentIndex;
    PXCArrayStore * _shiftedTimeRangesStore;
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
    }  _sourceTimeRange;
    <PXStoryTimeline> * _sourceTimeline;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetTimeOffset;
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
    }  _targetTimeRange;
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
    }  _targetTimeRangeInSourceTime;
    <PXStoryTimeline> * _targetTimeline;
}

@property (nonatomic, readonly) long long firstTargetSegmentIndex;
@property (nonatomic, readonly) long long lastSourceSegmentIndex;
@property (nonatomic, readonly) PXCArrayStore *shiftedTimeRangesStore;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } sourceTimeRange;
@property (nonatomic, readonly) <PXStoryTimeline> *sourceTimeline;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } targetTimeOffset;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } targetTimeRange;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } targetTimeRangeInSourceTime;
@property (nonatomic, readonly) <PXStoryTimeline> *targetTimeline;

+ (bool)_isSegmentIndex:(long long)arg1 inTimeline:(id)arg2 visuallyEqualToSegmentIndex:(long long)arg3 inTimeline:(id)arg4;
+ (id)timelineByRecombiningSourceTimeline:(id)arg1 withTargetTimeline:(id)arg2 visibleSegmentIdentifiers:(id)arg3;

- (void).cxx_destruct;
- (void)_shiftTimeRanges:(const struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 count:(long long)arg2 byTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 resultHandler:(id /* block */)arg4;
- (id)clipWithIdentifier:(long long)arg1;
- (long long)dataSourceIdentifier;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSegmentsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (long long)firstTargetSegmentIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSegmentWithIdentifier:(long long)arg1;
- (long long)identifierForSegmentAtIndex:(long long)arg1;
- (long long)identifierOfFirstClipContainingResourceAtIndex:(long long)arg1 inResourcesDataSource:(id)arg2 resourceKind:(long long)arg3;
- (long long)indexOfResourceForClipWithIdentifier:(long long)arg1 inResourcesDataSource:(id)arg2 resourceKind:(long long)arg3;
- (long long)indexOfSegmentWithIdentifier:(long long)arg1;
- (id)indexesOfResourcesWithKind:(long long)arg1 inResourcesDataSource:(id)arg2 forClipsInSegmentWithIdentifier:(long long)arg3;
- (id)init;
- (id)initWithSourceTimeline:(id)arg1 upToSegmentIndex:(long long)arg2 targetTimeline:(id)arg3 fromSegmentIndex:(long long)arg4;
- (long long)lastSourceSegmentIndex;
- (long long)numberOfSegments;
- (id)shiftedTimeRangesStore;
- (struct CGSize { double x1; double x2; })size;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })sourceTimeRange;
- (id)sourceTimeline;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetTimeOffset;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })targetTimeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })targetTimeRangeInSourceTime;
- (id)targetTimeline;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRangeForSegmentWithIdentifier:(long long)arg1;

@end
