
@interface MKOverlayView : UIView {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _boundingMapRect;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    MKMapView * _mapView;
    <MKOverlay> * _overlay;
    id  _renderer;
}

@property (nonatomic, readonly) <MKOverlay> *overlay;

- (void).cxx_destruct;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_boundingMapRect;
- (bool)_canDrawContent;
- (bool)_canPossiblyDrawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (void)_forEachMapRectForKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1 withContext:(struct CGContext { }*)arg2 performBlock:(id /* block */)arg3;
- (id)_mapView;
- (bool)_mayExtendOutsideBounds;
- (id)_mk_overlayLayer;
- (id)_mk_overlayView;
- (struct { double x1; double x2; })_originMapPoint;
- (id)_renderer;
- (void)_setMapView:(id)arg1;
- (void)_updateRenderColors;
- (bool)areOverlayResourcesRequired:(id)arg1;
- (bool)canDrawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (id)customTileProviderForOverlay:(id)arg1;
- (void)dealloc;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithOverlay:(id)arg1;
- (struct { double x1; double x2; })mapPointForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)overlay;
- (bool)overlay:(id)arg1 canDrawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2;
- (bool)overlay:(id)arg1 canPossiblyDrawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2;
- (void)overlay:(id)arg1 drawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2 inContext:(struct CGContext { }*)arg3;
- (void)overlay:(id)arg1 drawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2 withData:(id)arg3 inIOSurface:(struct __IOSurface { }*)arg4;
- (bool)overlayCanProvideCustomTileData:(id)arg1;
- (bool)overlayCanProvideRasterTileData:(id)arg1;
- (bool)overlayCanProvideVectorData:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointForMapPoint:(struct { double x1; double x2; })arg1;
- (id)rasterTileProviderForOverlay:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_boundingMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_renderer:(id)arg1;
- (bool)shouldUseMetalTexture:(id)arg1;
- (id)vectorDataForOverlay:(id)arg1;

@end
