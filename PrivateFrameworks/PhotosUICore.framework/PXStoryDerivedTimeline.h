
@interface PXStoryDerivedTimeline : PXStoryBaseTimeline {
    <PXStoryTimeline> * _originalTimeline;
}

@property (nonatomic, readonly) <PXStoryTimeline> *originalTimeline;

- (void).cxx_destruct;
- (id)clipWithIdentifier:(long long)arg1;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSegmentsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSegmentWithIdentifier:(long long)arg1;
- (long long)identifierOfFirstClipContainingResourceAtIndex:(long long)arg1 inResourcesDataSource:(id)arg2 resourceKind:(long long)arg3;
- (long long)indexOfResourceForClipWithIdentifier:(long long)arg1 inResourcesDataSource:(id)arg2 resourceKind:(long long)arg3;
- (long long)indexOfSegmentWithIdentifier:(long long)arg1;
- (id)indexesOfResourcesWithKind:(long long)arg1 inResourcesDataSource:(id)arg2 forClipsInSegmentWithIdentifier:(long long)arg3;
- (id)init;
- (id)initWithOriginalTimeline:(id)arg1;
- (long long)numberOfSegments;
- (struct CGSize { double x1; double x2; })originalSize;
- (id)originalTimeline;
- (struct CGSize { double x1; double x2; })size;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRangeForSegmentWithIdentifier:(long long)arg1;

@end
