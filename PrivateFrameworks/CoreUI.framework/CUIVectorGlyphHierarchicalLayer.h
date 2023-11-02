
@interface CUIVectorGlyphHierarchicalLayer : CUIVectorGlyphLayer {
    unsigned long long  _hierarchyLevel;
}

@property (nonatomic, readonly) unsigned long long hierarchyLevel;

- (void)_readCSSAttributes:(struct CGSVGAttributeMap { }*)arg1;
- (struct CGImage { }*)createImageUsingScaleFactor:(double)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 variableMinValue:(double)arg3 variableMaxValue:(double)arg4 hierarchicalColorResolver:(id /* block */)arg5;
- (struct CGImage { }*)createImageUsingScaleFactor:(double)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 variableMinValue:(double)arg3 variableMaxValue:(double)arg4 paletteColorResolver:(id /* block */)arg5;
- (id)debugDescription;
- (void)drawInContext:(struct CGContext { }*)arg1 scaleFactor:(double)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 variableMinValue:(double)arg4 variableMaxValue:(double)arg5 hierarchicalColorResolver:(id /* block */)arg6;
- (void)drawInContext:(struct CGContext { }*)arg1 scaleFactor:(double)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 variableMinValue:(double)arg4 variableMaxValue:(double)arg5 paletteColorResolver:(id /* block */)arg6;
- (unsigned long long)hierarchyLevel;

@end
