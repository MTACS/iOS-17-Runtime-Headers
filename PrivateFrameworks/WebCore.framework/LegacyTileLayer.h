
@interface LegacyTileLayer : CALayer {
    bool  _isRenderingInContext;
    unsigned int  _paintCount;
    void * _tileGrid;
}

@property (nonatomic, readonly) bool isRenderingInContext;
@property (nonatomic) unsigned int paintCount;
@property (nonatomic) void*tileGrid;

- (id)actionForKey:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)isRenderingInContext;
- (void)layoutSublayers;
- (unsigned int)paintCount;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPaintCount:(unsigned int)arg1;
- (void)setTileGrid:(void*)arg1;
- (void*)tileGrid;

@end
