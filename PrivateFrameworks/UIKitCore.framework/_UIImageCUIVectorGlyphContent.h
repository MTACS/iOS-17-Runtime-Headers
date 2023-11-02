
@interface _UIImageCUIVectorGlyphContent : _UIImageContent {
    double  _glyphScaleFactor;
    _Atomic int  _isMultiColor;
    _Atomic long long  _numberOfHierarchyLayers;
    struct CGImage { } * _overrideImageRef;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeInPixels;
    _UIImageContent * _vectorContent;
    CUINamedVectorGlyph * _vectorGlyph;
    double  _vectorScale;
}

@property (nonatomic) double glyphScaleFactor;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (id)_automaticSymbolConfiguration;
- (bool)_canProvideCGImageDirectly;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 hierarchicalColorResolver:(id /* block */)arg4;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 namedColorResolver:(id /* block */)arg4;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 paletteColors:(id)arg4;
- (void)_drawWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 effect:(id)arg4;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (struct CGImage { }*)_provideCGImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (struct CGImage { }*)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 hierarchicalColorResolver:(id /* block */)arg3;
- (struct CGImage { }*)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 namedColorResolver:(id /* block */)arg3;
- (struct CGImage { }*)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 paletteColors:(id)arg3;
- (bool)canEmitVectorDrawingCommands;
- (bool)canScaleImageToTargetResolution;
- (bool)containsNamedColorStyle:(id)arg1;
- (bool)containsNamedColorStyles;
- (id)contentWithCGImage:(struct CGImage { }*)arg1;
- (id)contentWithVariableValue:(double)arg1;
- (void)dealloc;
- (id)description;
- (double)glyphScaleFactor;
- (unsigned long long)hash;
- (id)initWithCUIVectorGlyph:(id)arg1 scale:(double)arg2;
- (id)initWithScale:(double)arg1;
- (bool)isCGImage;
- (bool)isEqual:(id)arg1;
- (bool)isVectorGlyph;
- (unsigned long long)numberOfHierarchyLayers;
- (id)outlinePath;
- (void)setGlyphScaleFactor:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (id)typeName;
- (double)variableValue;
- (id)vectorGlyph;
- (double)vectorScale;

@end
