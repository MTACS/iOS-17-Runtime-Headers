
@interface AESceneGroupedTilingLayout : PXAssetsTilingLayout {
    <AETileLayoutInfo> * __gradientTileLayoutInfo;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedGradientOverlaySize;
    <AEBrowserLayoutDelegate> * _delegate;
    long long  _layoutStyle;
    bool  _portraitOrientation;
    AEProgressViewModelSnapshot * _progressSnapshot;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _sectionBounds;
}

@property (nonatomic, readonly) <AETileLayoutInfo> *_gradientTileLayoutInfo;
@property (nonatomic) <AEBrowserLayoutDelegate> *delegate;
@property (nonatomic, readonly) long long layoutStyle;
@property (getter=isPortraitOrientation, nonatomic) bool portraitOrientation;
@property (nonatomic, retain) AEProgressViewModelSnapshot *progressSnapshot;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_boundedVisibleOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForGridTile:(long long)arg1 inSection:(long long)arg2;
- (struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })_geometryWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 zPosition:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_gradientShadowFrameForItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_gradientTileLayoutInfo;
- (void)_invalidateBadgeDecorations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_progressFrameForGridTileFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })_safeReferenceSize;
- (long long)_thumbnailRowsForCurrentLayoutStyle;
- (double)_zPositionForDecorativeTileSubitem:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (void)dealloc;
- (id)delegate;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)getGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg4;
- (id)initWithDataSource:(id)arg1 layoutStyle:(long long)arg2 gradientTileInfo:(id)arg3 orientation:(long long)arg4;
- (id)initWithDataSource:(id)arg1 layoutStyle:(long long)arg2 orientation:(long long)arg3;
- (bool)isPortraitOrientation;
- (long long)layoutStyle;
- (void)prepareLayout;
- (id)progressSnapshot;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setPortraitOrientation:(bool)arg1;
- (void)setProgressSnapshot:(id)arg1;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSelectedIndexPaths:(id)arg1;
- (void)setVisibleOrigin:(struct CGPoint { double x1; double x2; })arg1;

@end
