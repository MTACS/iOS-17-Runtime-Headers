
@interface FigFCRCALayerOutputNodeLayer : FigBaseCALayer {
    struct OpaqueFigCaptionRendererCALayerOutputNodeLayerInternal { id x1; struct CGImage {} *x2; double x3; id x4; id x5; bool x6; } * layerInternal;
}

- (void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContents:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setNodeOptions:(id)arg1 forKeyPath:(id)arg2;
- (void)setNodeSeparated:(bool)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setWindowOpacity:(double)arg1;

@end
