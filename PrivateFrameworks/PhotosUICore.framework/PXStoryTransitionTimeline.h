
@interface PXStoryTransitionTimeline : PXStoryDerivedTimeline {
    PXCArrayStore * _clipFrames;
    NSMutableIndexSet * _clipIdentifiersInTransition;
    PXCArrayStore * _clipInfos;
    PXCArrayStore * _clipTimeRanges;
    NSMutableDictionary * _duplicateClipIdentifiersByOriginalClipIdentifiers;
    long long  _duplicateSegmentIdentifier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _fromSegmentClipOffset;
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
    }  _fromSegmentTimeRange;
    NSMutableDictionary * _originalClipIdentifiersByDuplicateClipIdentifiers;
    PXCArrayStore * _segmentInfos;
    PXCArrayStore * _segmentTimeRanges;
    struct { 
        long long fromSegmentIdentifier; 
        long long toSegmentIdentifier; 
    }  _transitionInfo;
}

@property (nonatomic, readonly) PXCArrayStore *clipFrames;
@property (nonatomic, readonly) PXCArrayStore *clipInfos;
@property (nonatomic, readonly) PXCArrayStore *clipTimeRanges;
@property (nonatomic, readonly) PXCArrayStore *segmentInfos;
@property (nonatomic, readonly) PXCArrayStore *segmentTimeRanges;
@property (nonatomic, readonly) struct { long long x1; long long x2; } transitionInfo;

- (void).cxx_destruct;
- (void)_modifyClipsIfNeeded:(const struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 frames:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 infos:(const struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; }*)arg3 count:(long long)arg4 resultHandler:(id /* block */)arg5;
- (void)_modifySegmentsIfNeeded:(const struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg1 infos:(const struct { long long x1; struct { long long x_2_1_1; bool x_2_1_2; long long x_2_1_3; double x_2_1_4; long long x_2_1_5; } x2; struct { BOOL x_3_1_1; unsigned char x_3_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_3_1_3; BOOL x_3_1_4; union { BOOL x_5_2_1; BOOL x_5_2_2; BOOL x_5_2_3; BOOL x_5_2_4; } x_3_1_5; union { double x_6_2_1; double x_6_2_2; BOOL x_6_2_3; } x_3_1_6; } x3; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_4_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_4_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_4_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_4_1_4; BOOL x_4_1_5; } x4; }*)arg2 count:(long long)arg3 resultHandler:(id /* block */)arg4;
- (struct CGPoint { double x1; double x2; })_offsetBetweenSegmentWithIdentifier:(long long)arg1 andSegmentWithIdentifier:(long long)arg2;
- (void)_prepareForTransitionInfo:(struct { long long x1; long long x2; })arg1;
- (struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; })_transitionClipInfoWithIdentifier:(long long)arg1 fromOriginalClipInfo:(struct { long long x1; long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_5_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_5_1_3; struct { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_4_2_1; long long x_4_2_2; } x_5_1_4; BOOL x_5_1_5; } x5; long long x6; struct { struct CGSize { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_2_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_2_2_2; } x_7_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_7_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_7_1_4; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_5_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_5_2_2; } x_7_1_5; } x7; })arg2;
- (id)clipFrames;
- (id)clipInfos;
- (id)clipTimeRanges;
- (id)clipWithIdentifier:(long long)arg1;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSegmentsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)initWithOriginalTimeline:(id)arg1;
- (id)initWithOriginalTimeline:(id)arg1 transitionInfo:(struct { long long x1; long long x2; })arg2;
- (long long)numberOfSegments;
- (id)segmentInfos;
- (id)segmentTimeRanges;
- (struct { long long x1; long long x2; })transitionInfo;

@end
