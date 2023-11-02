
@interface PTScanlineMask_FocusBlurMap : PTScanlineMask {
    PTFocusBlurMap * _map;
    struct CGSize { 
        double width; 
        double height; 
    }  _normalizedTileSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _placementTileSize;
    NSIndexSet * _region;
}

@property (readonly) PTFocusBlurMap *map;
@property struct CGSize { double x1; double x2; } normalizedTileSize;
@property struct CGSize { double x1; double x2; } placementTileSize;
@property (readonly) NSIndexSet *region;

- (void).cxx_destruct;
- (void)_recalculatePlacementTileSize;
- (id)initWithFocusBlurMap:(id)arg1 region:(id)arg2;
- (id)map;
- (struct CGSize { double x1; double x2; })normalizedTileSize;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pixelRangeForTileRangeX:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pixelRangeForTileRangeY:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGSize { double x1; double x2; })placementTileSize;
- (id)region;
- (id)scanlineIter;
- (void)setNormalizedTileSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlacement:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlacementTileSize:(struct CGSize { double x1; double x2; })arg1;

@end
