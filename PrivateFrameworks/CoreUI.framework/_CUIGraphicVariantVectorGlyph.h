
@interface _CUIGraphicVariantVectorGlyph : CUINamedVectorGlyph {
    CUIVectorGlyphGraphicVariantOptions * _options;
}

@property (nonatomic, retain) CUIVectorGlyphGraphicVariantOptions *options;

- (struct CGPath { }*)CGPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundShapeBoundsForTargetSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (bool)_containsWideGamutColor;
- (struct CGGradient { }*)_createBackgroundGradientWithColors:(id)arg1;
- (struct CGImage { }*)_createBackgroundImageOfSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (struct CGPath { }*)_createBackgroundShapeInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2;
- (id)_createContentEffectsForTargetSize:(struct CGSize { double x1; double x2; })arg1 scale:(double*)arg2;
- (struct CGImage { }*)_createGraphicVariantImageAtScale:(double)arg1 backgroundImage:(struct CGImage { }*)arg2 symbolImage:(struct CGImage { }*)arg3 destinationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 disableColorFill:(bool)arg5 outputScale:(double)arg6;
- (id)_createShapeEffectsForTargetSize:(struct CGSize { double x1; double x2; })arg1 scale:(double*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultScaledContentRectForBackgroundSize:(struct CGSize { double x1; double x2; })arg1 safeContentArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_drawBackgroundShapeInContext:(struct CGContext { }*)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (long long)_effectiveCenteringStyle;
- (id)_initWithBaseGlyph:(id)arg1 options:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_interiorAlignmentRectUnroundedForTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_safeContentAreaBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_safeContentAreaBoundsForBackgroundSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scaledContentRectForBackgroundSize:(struct CGSize { double x1; double x2; })arg1 baseContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 snappingScale:(double)arg3;
- (struct CGSize { double x1; double x2; })_sizeOfBackgroundShape;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectForTargetSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectUnrounded;
- (double)baselineOffset;
- (double)baselineOffsetUnrounded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBoundsUnrounded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawHierarchyLayerAtIndex:(unsigned long long)arg1 inContext:(struct CGContext { }*)arg2 withColorResolver:(id /* block */)arg3;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1 withPaletteColors:(id)arg2;
- (void)drawMulticolorLayerAtIndex:(unsigned long long)arg1 inContext:(struct CGContext { }*)arg2 withColorResolver:(id /* block */)arg3;
- (void)drawPaletteLayerAtIndex:(unsigned long long)arg1 inContext:(struct CGContext { }*)arg2 withColorResolver:(id /* block */)arg3;
- (id)graphicVariantWithOptions:(id)arg1;
- (struct CGImage { }*)image;
- (struct CGImage { }*)imageWithColorResolver:(id /* block */)arg1;
- (struct CGImage { }*)imageWithHierarchyColorResolver:(id /* block */)arg1;
- (struct CGImage { }*)imageWithPaletteColorResolver:(id /* block */)arg1;
- (struct CGImage { }*)imageWithPaletteColors:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interiorAlignmentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interiorAlignmentRectForTargetSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interiorAlignmentRectUnrounded;
- (unsigned long long)numberOfHierarchyLayers;
- (unsigned long long)numberOfMulticolorLayers;
- (id)options;
- (struct CGImage { }*)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGImage { }*)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize { double x1; double x2; })arg2 withColorResolver:(id /* block */)arg3;
- (struct CGImage { }*)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize { double x1; double x2; })arg2 withHierarchyColorResolver:(id /* block */)arg3;
- (struct CGImage { }*)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize { double x1; double x2; })arg2 withPaletteColorResolver:(id /* block */)arg3;
- (struct CGImage { }*)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize { double x1; double x2; })arg2 withPaletteColors:(id)arg3;
- (void)setOptions:(id)arg1;

@end
