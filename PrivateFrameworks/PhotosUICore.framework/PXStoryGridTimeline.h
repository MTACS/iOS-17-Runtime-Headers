
@interface PXStoryGridTimeline : PXStoryDerivedTimeline {
    struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; } * _assetClipGeometries;
    long long * _assetClipIdentifiers;
    PXExploreLayoutGenerator * _layoutGenerator;
    long long  _numberOfAssetClips;
    PXCArrayStore * _rectsStore;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) PXExploreLayoutGenerator *layoutGenerator;

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 usingBlock:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSegmentWithIdentifier:(long long)arg1;
- (id)initWithOriginalTimeline:(id)arg1;
- (id)initWithOriginalTimeline:(id)arg1 layoutSpec:(id)arg2 viewportSize:(struct CGSize { double x1; double x2; })arg3;
- (id)layoutGenerator;
- (struct CGSize { double x1; double x2; })size;

@end
