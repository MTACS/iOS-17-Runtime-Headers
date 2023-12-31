
@interface FigCDSCALayerOutputNodeLayer : FigBaseCALayer {
    struct OpaqueFigCDSCALayerOutputNodeLayerInternal { id x1; id x2; id x3; } * layerInternal;
}

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContents:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;

@end
