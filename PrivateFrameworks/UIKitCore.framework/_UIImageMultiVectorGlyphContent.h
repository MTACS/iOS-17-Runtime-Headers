
@interface _UIImageMultiVectorGlyphContent : _UIImageContent {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    NSArray * _colors;
    NSArray * _glyphs;
    struct CGImage { } * _imageRef;
    NSArray * _offsets;
    NSArray * _scaleFactors;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeInPixels;
}

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (void)_drawWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3 effect:(id)arg4;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (bool)canEmitVectorDrawingCommands;
- (bool)canScaleImageToTargetResolution;
- (bool)containsNamedColorStyles;
- (void)dealloc;
- (id)description;
- (id)initWithScale:(double)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 glyphs:(id)arg2 colors:(id)arg3 offsets:(id)arg4 scaleFactors:(id)arg5 anchorPoint:(struct CGPoint { double x1; double x2; })arg6;
- (bool)isCGImage;
- (bool)isEqual:(id)arg1;
- (bool)isVectorGlyph;
- (struct CGSize { double x1; double x2; })sizeInPixels;
- (id)typeName;
- (double)vectorScale;

@end
