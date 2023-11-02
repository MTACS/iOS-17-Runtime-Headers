
@interface _UIImageCGPDFPageContent : _UIImageContent {
    struct CGPDFPage { } * _pdfPageRef;
}

- (struct CGPDFPage { }*)CGPDFPage;
- (void)_drawWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 effect:(id)arg4;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (bool)canEmitVectorDrawingCommands;
- (bool)canScaleImageToTargetResolution;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCGPDFPage:(struct CGPDFPage { }*)arg1 scale:(double)arg2;
- (id)initWithScale:(double)arg1;
- (bool)isCGPDFPage;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (id)typeName;

@end
