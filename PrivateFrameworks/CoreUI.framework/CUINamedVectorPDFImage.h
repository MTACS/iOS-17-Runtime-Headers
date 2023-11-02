
@interface CUINamedVectorPDFImage : CUINamedVectorImage

@property (nonatomic, readonly) struct CGPDFDocument { }*pdfDocument;

- (struct CGPDFDocument { }*)pdfDocument;
- (struct CGImage { }*)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(struct CGSize { double x1; double x2; })arg2;

@end
