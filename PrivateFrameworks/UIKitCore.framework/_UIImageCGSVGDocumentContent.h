
@interface _UIImageCGSVGDocumentContent : _UIImageContent {
    struct CGSVGDocument { } * _svgDocumentRef;
}

- (struct CGSVGDocument { }*)CGSVGDocument;
- (void)_drawWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 effect:(id)arg4;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (bool)canEmitVectorDrawingCommands;
- (bool)canScaleImageToTargetResolution;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCGSVGDocument:(struct CGSVGDocument { }*)arg1 scale:(double)arg2;
- (id)initWithScale:(double)arg1;
- (bool)isCGSVGDocument;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (id)typeName;

@end
