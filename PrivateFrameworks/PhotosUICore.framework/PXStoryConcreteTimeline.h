
@interface PXStoryConcreteTimeline : PXStoryBaseTimeline <NSCopying, NSMutableCopying> {
    long long  _clipCapacity;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _clipFrames;
    long long * _clipIndicesSortedByTimeRangeEnd;
    struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; } * _clipInfos;
    long long * _clipResourceIndexes;
    long long * _clipResourceKinds;
    struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } * _clipTimeRanges;
    long long  _numberOfClips;
    long long  _numberOfSegments;
    PXStoryResourcesDataSource * _resourcesDataSource;
    long long  _segmentCapacity;
    struct { long long x1; struct { long long x_2_1_1; bool x_2_1_2; long long x_2_1_3; double x_2_1_4; long long x_2_1_5; } x2; struct { BOOL x_3_1_1; unsigned char x_3_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_3_1_3; BOOL x_3_1_4; union { BOOL x_5_2_1; BOOL x_5_2_2; BOOL x_5_2_3; BOOL x_5_2_4; } x_3_1_5; union { double x_6_2_1; double x_6_2_2; BOOL x_6_2_3; } x_3_1_6; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_4_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_4_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_4_1_4; BOOL x_4_1_5; } x4; } * _segmentInfos;
    struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } * _segmentTimeRanges;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
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
    }  _timeRange;
}

@property (nonatomic, readonly) long long lastClipIdentifier;
@property (nonatomic) long long numberOfClips;
@property (nonatomic) long long numberOfSegments;
@property (nonatomic, readonly) PXStoryResourcesDataSource *resourcesDataSource;

- (void).cxx_destruct;
- (void)_assertConsistency;
- (id)_clipResourceIndexesOfKind:(long long)arg1 inSegmentAtIndex:(long long)arg2;
- (void)_enumerateClipsWithResourceKind:(long long)arg1 indexes:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateSegmentsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)_indexesOfSegmentsContainingClipsWithResourceKind:(long long)arg1 indexes:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_smallestRangeOfClipsPotentiallyIntersectingTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_smallestRangeOfSegmentsPotentiallyIntersectingTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)clipWithIdentifier:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataSourceIdentifier;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateConcreteClipsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSegmentsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (long long)identifierForSegmentAtIndex:(long long)arg1;
- (long long)identifierOfFirstClipContainingResourceAtIndex:(long long)arg1 inResourcesDataSource:(id)arg2 resourceKind:(long long)arg3;
- (long long)identifierOfSegmentClosestToSegmentWithIdentifier:(long long)arg1 inTimeline:(id)arg2;
- (id)identifiersOfSegmentsMatchingSegmentWithIdentifier:(long long)arg1 inTimeline:(id)arg2;
- (long long)indexOfResourceForClipWithIdentifier:(long long)arg1 inResourcesDataSource:(id)arg2 resourceKind:(long long)arg3;
- (long long)indexOfSegmentWithIdentifier:(long long)arg1;
- (id)indexesOfResourcesWithKind:(long long)arg1 inResourcesDataSource:(id)arg2 forClipsInSegmentWithIdentifier:(long long)arg3;
- (struct { long long x1; struct { long long x_2_1_1; bool x_2_1_2; long long x_2_1_3; double x_2_1_4; long long x_2_1_5; } x2; struct { BOOL x_3_1_1; unsigned char x_3_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_3_1_3; BOOL x_3_1_4; union { BOOL x_5_2_1; BOOL x_5_2_2; BOOL x_5_2_3; BOOL x_5_2_4; } x_3_1_5; union { double x_6_2_1; double x_6_2_2; BOOL x_6_2_3; } x_3_1_6; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_4_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_4_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_4_1_4; BOOL x_4_1_5; } x4; })infoForSegmentWithIdentifier:(long long)arg1;
- (id)init;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 resourcesDataSource:(id)arg2;
- (id)initWithTimeline:(id)arg1;
- (long long)lastClipIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)numberOfClips;
- (long long)numberOfSegments;
- (id)resourcesDataSource;
- (void)setNumberOfClips:(long long)arg1;
- (void)setNumberOfSegments:(long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRangeForSegmentWithIdentifier:(long long)arg1;

@end
