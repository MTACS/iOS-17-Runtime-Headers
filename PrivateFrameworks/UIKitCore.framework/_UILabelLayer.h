
@interface _UILabelLayer : CALayer {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    bool  _contentInsetsValid;
    _UILabelContentLayer * _contentLayer;
    unsigned long long  _oversizeEdgesIncludedInLabelLayer;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } letterformAwareInsets;
@property (nonatomic, readonly) bool letterformAwareInsetsAreValid;
@property (nonatomic) unsigned long long oversizeEdgesIncludedInLabelLayer;

- (void).cxx_destruct;
- (void)_clearContents;
- (bool)_glyphPathBoundsExcedesLayers:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 drawableGlyphPathBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 edgesClipped:(unsigned long long*)arg3;
- (id)_labelLayerToClipDuringBoundsSizeAnimation;
- (void)_setLabelMasksToBoundsForAnimation:(bool)arg1;
- (void)_updateContentLayer;
- (void)invalidateContentInsets;
- (void)layoutSublayers;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })letterformAwareInsets;
- (bool)letterformAwareInsetsAreValid;
- (unsigned long long)oversizeEdgesIncludedInLabelLayer;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsFormat:(id)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setContentsMultiplyColor:(struct CGColor { }*)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMasksToBounds:(bool)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayOnBoundsChange:(bool)arg1;
- (void)setOversizeEdgesIncludedInLabelLayer:(unsigned long long)arg1;
- (void)updateContentInsets;

@end
