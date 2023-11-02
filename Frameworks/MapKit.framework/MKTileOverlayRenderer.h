
@interface MKTileOverlayRenderer : MKOverlayRenderer {
    UIImage * _colorMap;
    bool  _externalSubclassOverridesDrawingMethods;
    unsigned long long  _loopsRemaining;
    GEOTileKeyList * _pendingRequests;
    NSObject<OS_dispatch_queue> * _pendingRequestsLock;
    VKRasterTileOverlayProviderData * _rasterProvider;
    NSNumber * _visibleKeyframeOverride;
}

@property (nonatomic, retain) UIImage *colorMap;
@property (getter=_visibleKeyframeIndex, nonatomic, readonly) unsigned long long visibleKeyframeIndex;
@property (nonatomic, retain) NSNumber *visibleKeyframeOverride;

+ (bool)_externalSubclassOverridesDrawingMethods;
+ (id)keyPathsForValuesAffectingVisibleKeyframeIndex;

- (void).cxx_destruct;
- (bool)_mayExtendOutsideBounds;
- (void)_playWithLoopCount:(unsigned long long)arg1;
- (void)_updateColorMap;
- (void)_updateRenderColors;
- (unsigned long long)_visibleKeyframeIndex;
- (bool)canDrawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (id)colorMap;
- (void)dealloc;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (id)initWithOverlay:(id)arg1;
- (id)initWithTileOverlay:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)overlayCanProvideRasterTileData:(id)arg1;
- (id)rasterTileProviderForOverlay:(id)arg1;
- (void)reloadData;
- (void)setAlpha:(double)arg1;
- (void)setColorMap:(id)arg1;
- (void)setVisibleKeyframeOverride:(id)arg1;
- (id)visibleKeyframeOverride;

@end
