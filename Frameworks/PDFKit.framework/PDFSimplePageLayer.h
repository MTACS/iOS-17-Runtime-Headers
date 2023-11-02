
@interface PDFSimplePageLayer : CALayer <CALayerDelegate, PDFPageLayerInterface> {
    double  _contentsScale;
    CALayer * _effectsLayer;
    NSObject<PDFPageLayerGeometryInterface> * _geometryInterface;
    PDFPage * _page;
    NSMutableDictionary * _pageLayerEffects;
    PDFRenderingProperties * _renderingProperties;
    unsigned long long  _visibilityDelegateIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_pageChangedPageRef:(id)arg1;
- (void)_pageDidRotate:(id)arg1;
- (id)_pageLayerEffects;
- (void)_updateGeometry;
- (void)_updateLayerEffect:(id)arg1 withPageTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)addPageLayerEffect:(id)arg1;
- (void)applyTileLayoutScale:(double)arg1;
- (void)clearTiles;
- (void)dealloc;
- (long long)displayBox;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)enablesTileUpdates;
- (void)forceTileUpdate;
- (id)geometryInterface;
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;
- (bool)isVisible;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layerEffectTransform;
- (id)page;
- (id)pageLayerEffectForID:(id)arg1;
- (void)removePageLayerEffectForID:(id)arg1;
- (id)renderingProperties;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)scalePageLayerEffects:(double)arg1;
- (void)setEnableTileUpdates:(bool)arg1;
- (void)setNeedsTilesUpdate;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (void)updatePageLayerEffectForID:(id)arg1;
- (void)updatePageLayerEffects;
- (unsigned long long)visibilityDelegateIndex;
- (void)willEndStartLiveResize;
- (void)willStartLiveResize;

@end
