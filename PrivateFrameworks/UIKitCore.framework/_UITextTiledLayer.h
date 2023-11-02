
@interface _UITextTiledLayer : CALayer <CALayerDelegate> {
    UIBezierPath * _clip;
    double  _maxPrefetchedTiles;
    double  _maxTileHeight;
    struct { 
        unsigned int disableTiling : 1; 
        unsigned int ditchAllTiles : 1; 
        unsigned int suspendLayout : 4; 
        unsigned int delegateSupportsMaskedRects : 1; 
        unsigned int delegateImplementsWillDraw : 1; 
    }  _tcTiledLayerFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _tileSize;
    CALayer * _viewportLayer;
    double  _viewportLayerExtraWidthFactor;
    NSMutableArray * _visibleTiles;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleViewportBounds;
}

@property (readonly, copy) NSString *debugDescription;
@property <_UITextTiledLayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxPrefetchedTiles;
@property (nonatomic) double maxTileHeight;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *tiles;
@property (nonatomic) bool usesTiledLayers;

- (void).cxx_destruct;
- (void)_didSetDelegate;
- (void)_drawInContext:(struct CGContext { }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 clip:(struct CGPath { }*)arg3;
- (id)_prepareNonTiledGhostLayersForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_prepareTilesForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_preparedTileForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mask:(id)arg2 opacity:(double)arg3 deferred:(bool)arg4;
- (void)_updateTilingViewportWindow:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)init;
- (void)layerWillDraw:(id)arg1;
- (void)layoutSublayers;
- (double)maxPrefetchedTiles;
- (double)maxTileHeight;
- (void)resumeTiling;
- (void)setContentsFormat:(id)arg1;
- (void)setContentsMultiplyColor:(struct CGColor { }*)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawsAsynchronously:(bool)arg1;
- (void)setMaxPrefetchedTiles:(double)arg1;
- (void)setMaxTileHeight:(double)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRasterizationScale:(double)arg1;
- (void)setUnsafeUnretainedDelegate:(id)arg1;
- (void)setUsesTiledLayers:(bool)arg1;
- (void)suspendTiling;
- (id)tiles;
- (bool)usesTiledLayers;

@end
