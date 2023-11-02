
@interface _UIImageContent : NSObject {
    bool  _isDecompressing;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeInPixels;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) struct CGImageSource { }*CGImageSource;
@property (nonatomic, readonly) struct CGPDFPage { }*CGPDFPage;
@property (nonatomic, readonly) struct CGSVGDocument { }*CGSVGDocument;
@property (nonatomic, readonly) CIImage *CIImage;
@property (nonatomic, readonly) struct __IOSurface { }*IOSurface;
@property (nonatomic, readonly) UIImageSymbolConfiguration *_automaticSymbolConfiguration;
@property (nonatomic) bool isDecompressing;
@property (nonatomic, readonly) UIBezierPath *outlinePath;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeInPixels;
@property (nonatomic, readonly) NSString *typeName;
@property (nonatomic, readonly) double variableValue;
@property (nonatomic, readonly) CUINamedVectorGlyph *vectorGlyph;
@property (nonatomic, readonly) double vectorScale;

+ (id)empty;

- (struct CGImage { }*)CGImage;
- (struct CGImageSource { }*)CGImageSource;
- (struct CGPDFPage { }*)CGPDFPage;
- (struct CGSize { double x1; double x2; })CGPDFPageSize;
- (struct CGSVGDocument { }*)CGSVGDocument;
- (struct CGSize { double x1; double x2; })CGSVGDocumentSize;
- (id)CIImage;
- (struct __IOSurface { }*)IOSurface;
- (id)_automaticSymbolConfiguration;
- (bool)_canProvideCGImageDirectly;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 hierarchicalColorResolver:(id /* block */)arg4;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 namedColorResolver:(id /* block */)arg4;
- (void)_drawVectorGlyphWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 paletteColors:(id)arg4;
- (void)_drawWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 effect:(id)arg4;
- (bool)_isSameSymbolImageContentExceptVariableValue:(id)arg1;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (struct CGImage { }*)_provideCGImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (struct CGImage { }*)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 hierarchicalColorResolver:(id /* block */)arg3;
- (struct CGImage { }*)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 namedColorResolver:(id /* block */)arg3;
- (struct CGImage { }*)_provideVectorGlyphCGImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 paletteColors:(id)arg3;
- (void)_setCGImageSource:(struct CGImageSource { }*)arg1;
- (bool)canEmitVectorDrawingCommands;
- (bool)canRenderCIImage;
- (bool)canScaleImageToTargetResolution;
- (bool)containsNamedColorStyle:(id)arg1;
- (bool)containsNamedColorStyles;
- (id)contentOptimizedForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)contentPreparedForDisplay;
- (id)contentWithCGImage:(struct CGImage { }*)arg1;
- (id)contentWithVariableValue:(double)arg1;
- (id)debugDescription;
- (id)debugQuickLookObject;
- (bool)hasCGImage;
- (unsigned long long)hash;
- (id)imageRendererFormat;
- (id)init;
- (id)initWithScale:(double)arg1;
- (bool)isCGImage;
- (bool)isCGImageOnly;
- (bool)isCGPDFPage;
- (bool)isCGSVGDocument;
- (bool)isCIImage;
- (bool)isDecompressing;
- (bool)isEqual:(id)arg1;
- (bool)isHDR;
- (bool)isIOSurface;
- (bool)isPreparedCGImage;
- (bool)isVectorGlyph;
- (id)makeSDRVersion;
- (unsigned long long)numberOfHierarchyLayers;
- (bool)optimizeContentForImageSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (id)outlinePath;
- (bool)prefersProvidingContentsDirectly;
- (bool)prepareContentForDisplayWithCompletionHandler:(id /* block */)arg1;
- (id)renditionApplyingEffect:(id)arg1;
- (id)renditionWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 applyingEffect:(id)arg3;
- (double)scale;
- (void)setIsDecompressing:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (id)typeName;
- (double)variableValue;
- (id)vectorGlyph;
- (double)vectorScale;

@end
