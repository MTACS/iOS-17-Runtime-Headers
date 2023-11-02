
@interface _MKResizingLayer : CALayer {
    bool  _needsLayoutOnBoundsChange;
    NSMutableArray * _sizedLayers;
}

@property (nonatomic) bool needsLayoutOnBoundsChange;
@property (nonatomic, readonly, copy) NSArray *sizeToBoundsLayers;

- (void).cxx_destruct;
- (bool)needsLayoutOnBoundsChange;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsScale:(double)arg1;
- (void)setMask:(id)arg1;
- (void)setNeedsLayoutOnBoundsChange:(bool)arg1;
- (void)sizeSublayerToBounds:(id)arg1;
- (id)sizeToBoundsLayers;

@end
