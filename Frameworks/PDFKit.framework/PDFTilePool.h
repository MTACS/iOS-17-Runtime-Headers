
@interface PDFTilePool : NSObject {
    PDFTilePoolPrivate * _private;
}

+ (id)sharedPool;

- (void).cxx_destruct;
- (struct CGContext { }*)_createContextForTileSurface:(id)arg1 ofRequest:(id)arg2;
- (id)_createTileSurfaceForRequest:(id)arg1;
- (void)_renderTileForRequest:(id)arg1;
- (int)activeTileCount;
- (void)dealloc;
- (id)init;
- (void)releasePDFTileSurface:(id)arg1;
- (void)requestPDFTileSurfaceForTarget:(id)arg1 forPage:(id)arg2 withRenderingProperties:(id)arg3 atZoomFactor:(double)arg4 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg6 tag:(int)arg7;
- (void)saveBitmapFiles;
- (void)setTileSurfaceType:(int)arg1;
- (int)tileSurfaceSize;
- (int)tileSurfaceType;

@end
