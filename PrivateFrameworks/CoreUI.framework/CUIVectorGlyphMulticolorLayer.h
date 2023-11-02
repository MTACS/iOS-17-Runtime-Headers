
@interface CUIVectorGlyphMulticolorLayer : CUIVectorGlyphLayer {
    id  _fillColor;
    NSString * _fillColorName;
    id  _strokeColor;
    NSString * _strokeColorName;
}

@property (nonatomic, readonly, retain) id fillColor;
@property (nonatomic, readonly, retain) NSString *fillColorName;
@property (nonatomic, readonly, retain) id strokeColor;
@property (nonatomic, readonly, retain) NSString *strokeColorName;

- (void)_readCSSAttributes:(struct CGSVGAttributeMap { }*)arg1;
- (struct CGImage { }*)createImageUsingScaleFactor:(double)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 variableMinValue:(double)arg3 variableMaxValue:(double)arg4 colorResolver:(id /* block */)arg5;
- (void)dealloc;
- (id)debugDescription;
- (void)drawInContext:(struct CGContext { }*)arg1 scaleFactor:(double)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 variableMinValue:(double)arg4 variableMaxValue:(double)arg5 colorResolver:(id /* block */)arg6;
- (id)fillColor;
- (id)fillColorName;
- (bool)needsWideGamut;
- (id)strokeColor;
- (id)strokeColorName;

@end
