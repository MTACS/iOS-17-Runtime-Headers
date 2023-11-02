
@interface PXStoryBaseTimeline : NSObject <PXStoryTimeline>

@property (nonatomic, readonly) long long dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) long long firstSegmentIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long lastSegmentIdentifier;
@property (nonatomic, readonly) long long numberOfSegments;
@property (nonatomic, readonly) NSString *objectiveCCode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } originalSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

- (void)_findSegmentMatchingIdentifier:(long long)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2 info:(struct { long long x1; struct { long long x_2_1_1; bool x_2_1_2; long long x_2_1_3; double x_2_1_4; long long x_2_1_5; } x2; struct { BOOL x_3_1_1; unsigned char x_3_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_3_1_3; BOOL x_3_1_4; union { BOOL x_5_2_1; BOOL x_5_2_2; BOOL x_5_2_3; BOOL x_5_2_4; } x_3_1_5; union { double x_6_2_1; double x_6_2_2; BOOL x_6_2_3; } x_3_1_6; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_4_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_4_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_4_1_4; BOOL x_4_1_5; } x4; }*)arg3;
- (id)clipWithIdentifier:(long long)arg1;
- (id)clipWithResourceKind:(long long)arg1 afterClipIdentifier:(long long)arg2;
- (bool)containsAllSegmentsWithIdentifiers:(id)arg1;
- (bool)containsSegmentWithIdentifier:(long long)arg1;
- (long long)dataSourceIdentifier;
- (id)diagnosticDescription;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSegmentsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (long long)firstSegmentIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSegmentWithIdentifier:(long long)arg1;
- (long long)identifierForSegmentAtIndex:(long long)arg1;
- (long long)identifierForSegmentWithOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromEndOfSegmentWithIdentifier:(long long)arg2 timeIntoSegment:(out struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3;
- (long long)identifierOfFirstClipContainingResourceAtIndex:(long long)arg1 inResourcesDataSource:(id)arg2 resourceKind:(long long)arg3;
- (long long)identifierOfFirstSegmentContainingAsset:(id)arg1;
- (long long)identifierOfSegmentClosestToSegmentWithIdentifier:(long long)arg1 inTimeline:(id)arg2;
- (id)identifiersOfSegmentsMatchingSegmentWithIdentifier:(long long)arg1 inTimeline:(id)arg2;
- (long long)indexOfResourceForClipWithIdentifier:(long long)arg1 inResourcesDataSource:(id)arg2 resourceKind:(long long)arg3;
- (long long)indexOfSegmentWithIdentifier:(long long)arg1;
- (id)indexesOfResourcesWithKind:(long long)arg1 inResourcesDataSource:(id)arg2 forClipsInSegmentWithIdentifier:(long long)arg3;
- (struct { long long x1; struct { long long x_2_1_1; bool x_2_1_2; long long x_2_1_3; double x_2_1_4; long long x_2_1_5; } x2; struct { BOOL x_3_1_1; unsigned char x_3_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_3_1_3; BOOL x_3_1_4; union { BOOL x_5_2_1; BOOL x_5_2_2; BOOL x_5_2_3; BOOL x_5_2_4; } x_3_1_5; union { double x_6_2_1; double x_6_2_2; BOOL x_6_2_3; } x_3_1_6; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_4_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_4_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_4_1_4; BOOL x_4_1_5; } x4; })infoForSegmentWithIdentifier:(long long)arg1;
- (long long)lastSegmentIdentifier;
- (long long)numberOfClipsWithResourceKind:(long long)arg1;
- (long long)numberOfSegments;
- (id)objectiveCCode;
- (struct CGSize { double x1; double x2; })originalSize;
- (id)segmentIdentifiersInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })size;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRangeForSegmentWithIdentifier:(long long)arg1;

@end
