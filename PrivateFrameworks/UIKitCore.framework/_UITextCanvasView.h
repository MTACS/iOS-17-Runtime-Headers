
@interface _UITextCanvasView : UIView <_UITextKit1Canvas, _UITextTiledLayerDelegate> {
    <_UITextKit1CanvasContext> * _context;
    NSMutableSet * _ghostedRanges;
    NSMutableSet * _invisibleRanges;
    NSArray * _maskedRects;
    _UISceneDisplayLink * _sceneDisplayLink;
}

@property (setter=_setDrawsDebugBaselines:, nonatomic) bool _drawsDebugBaselines;
@property (nonatomic) <_UITextKit1CanvasContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UITextTiledLayer *layer;
@property (nonatomic) double maxTileHeight;
@property (readonly) Class superclass;
@property (getter=isTilingEnabled, nonatomic) bool tilingEnabled;

+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)_drawsDebugBaselines;
- (bool)_enableAutoConstraining;
- (void)_setDrawsDebugBaselines:(bool)arg1;
- (id)_textTiledLayer:(id)arg1 maskedRectsInVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateTilingViewportBookkeeping;
- (void)_updateTilingViewportLayer;
- (void)_windowDidMoveToScreen;
- (void)addGhostedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addInvisibleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)context;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTilingEnabled;
- (double)maxTileHeight;
- (void)removeAllGhostedRanges;
- (void)removeInvisibleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)resumeTiling;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaxTileHeight:(double)arg1;
- (void)setNeedsLayout;
- (void)setTilingEnabled:(bool)arg1;
- (void)suspendTiling;
- (void)updateContentSizeIfNeeded;
- (void)viewportBoundsDidChange;
- (void)willMoveToWindow:(id)arg1;

@end
