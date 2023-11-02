
@interface CUINamedVectorSVGImage : CUINamedVectorImage

@property (nonatomic, readonly) struct CGSVGDocument { }*svgDocument;

- (struct CGImage { }*)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSVGDocument { }*)svgDocument;

@end
