
@interface FigCDSCALayer : FigBaseCALayer {
    struct OpaqueFigCDSCALayerInternal { id x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; unsigned char x3; void *x4; int (*x5)(); int (*x6)(); int (*x7)(); id x8; } * layerInternal;
}

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)clear:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)init;
- (void)layoutSublayers;
- (void)setCallbacks:(id)arg1 userEvent:(int (*)arg2 viewportChanged:(int (*)arg3 drawInContext:(int (*)arg4;
- (void)setVideoBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
