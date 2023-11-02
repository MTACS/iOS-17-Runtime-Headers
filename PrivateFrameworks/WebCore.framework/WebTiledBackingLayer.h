
@interface WebTiledBackingLayer : CALayer {
    struct unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> { 
        struct __compressed_pair<WebCore::TileController *, std::default_delete<WebCore::TileController>> { 
            struct TileController {} *__value_; 
        } __ptr_; 
    }  _tileController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)actionForKey:(id)arg1;
- (double)contentsScale;
- (void*)createTileController:(void*)arg1;
- (void)dealloc;
- (bool)drawsAsynchronously;
- (id)init;
- (void)invalidate;
- (bool)isOpaque;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDrawsAsynchronously:(bool)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOpaque:(bool)arg1;
- (void)setWantsDeepColorBackingStore:(bool)arg1;
- (struct TiledBacking { int (**x1)(); }*)tiledBacking;
- (bool)wantsDeepColorBackingStore;

@end
