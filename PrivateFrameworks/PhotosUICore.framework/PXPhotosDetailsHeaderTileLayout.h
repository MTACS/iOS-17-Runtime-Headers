
@interface PXPhotosDetailsHeaderTileLayout : PXTilingLayout {
    <PXPhotosDetailsHeaderTileLayoutDelegate> * _delegate;
    struct { 
        bool contentsRectForAspectRatio; 
        bool titleFontName; 
        bool playButtonSize; 
    }  _delegateRespondsTo;
    PXPhotosDetailsHeaderSpec * _spec;
    long long  _style;
    bool  _useTitledPlayButton;
}

@property (nonatomic, readonly) struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; } contentTileIdentifier;
@property (nonatomic) <PXPhotosDetailsHeaderTileLayoutDelegate> *delegate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previewRect;
@property (nonatomic, retain) PXPhotosDetailsHeaderSpec *spec;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentsRectForAspectRatio:(double)arg1;
- (struct CGSize { double x1; double x2; })_playButtonSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (id)_userDataForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 inContainingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_viewSpecForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 boundingSize:(struct CGSize { double x1; double x2; })arg2;
- (double)_zPositionForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })contentTileIdentifier;
- (id)delegate;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)getGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg4;
- (id)init;
- (id)initWithSpec:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewRect;
- (void)setDelegate:(id)arg1;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSpec:(id)arg1;
- (void)setStyle:(long long)arg1;
- (id)spec;
- (long long)style;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })tileIdentifierForTileKind:(long long)arg1;
- (long long)tileKindForTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;

@end
