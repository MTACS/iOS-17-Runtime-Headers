
@interface _UIImageCUIVectorImageContent : _UIImageCGImageContent {
    CUINamedVectorImage * _vectorImage;
}

- (void).cxx_destruct;
- (struct CGPDFPage { }*)CGPDFPage;
- (struct CGSVGDocument { }*)CGSVGDocument;
- (bool)_canProvideCGImageDirectly;
- (void)_drawWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 effect:(id)arg4;
- (struct CGImage { }*)_provideCGImageWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (bool)canEmitVectorDrawingCommands;
- (bool)canScaleImageToTargetResolution;
- (id)contentWithCGImage:(struct CGImage { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCGImage:(struct CGImage { }*)arg1 CUIVectorImage:(id)arg2 scale:(double)arg3;
- (id)initWithScale:(double)arg1;
- (bool)isCGPDFPage;
- (bool)isCGSVGDocument;
- (bool)isEqual:(id)arg1;
- (id)typeName;
- (double)vectorScale;

@end
